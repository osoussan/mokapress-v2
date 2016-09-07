/*
 * Copyright (C) by Duncan Mac-Vicar P. <duncan@kde.org>
 * Copyright (C) by Klaas Freitag <freitag@owncloud.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 */

#include "syncengine.h"
#include "account.h"
#include "owncloudpropagator.h"
#include "syncjournaldb.h"
#include "syncjournalfilerecord.h"
#include "discoveryphase.h"
#include "creds/abstractcredentials.h"
#include "syncfilestatus.h"
#include "csync_private.h"
#include "filesystem.h"

#ifdef Q_OS_WIN
#include <windows.h>
#else
#include <unistd.h>
#endif

#include <climits>
#include <assert.h>

#include <QCoreApplication>
#include <QDebug>
#include <QSslSocket>
#include <QDir>
#include <QMutexLocker>
#include <QThread>
#include <QStringList>
#include <QTextStream>
#include <QTime>
#include <QUrl>
#include <QSslCertificate>
#include <QProcess>
#include <QElapsedTimer>
#include <qtextcodec.h>

extern "C" const char *csync_instruction_str(enum csync_instructions_e instr);

namespace OCC {

bool SyncEngine::s_anySyncRunning = false;

qint64 SyncEngine::minimumFileAgeForUpload = 2000;

SyncEngine::SyncEngine(AccountPtr account, const QString& localPath,
                       const QUrl& remoteURL, const QString& remotePath, OCC::SyncJournalDb* journal)
  : _account(account)
  , _needsUpdate(false)
  , _syncRunning(false)
  , _localPath(localPath)
  , _remoteUrl(remoteURL)
  , _remotePath(remotePath)
  , _journal(journal)
  , _progressInfo(new ProgressInfo)
  , _hasNoneFiles(false)
  , _hasRemoveFile(false)
  , _hasForwardInTimeFiles(false)
  , _backInTimeFiles(0)
  , _uploadLimit(0)
  , _downloadLimit(0)
  , _newBigFolderSizeLimit(-1)
  , _checksum_hook(journal)
  , _anotherSyncNeeded(false)
{
    qRegisterMetaType<SyncFileItem>("SyncFileItem");
    qRegisterMetaType<SyncFileItem::Status>("SyncFileItem::Status");

    // We need to reconstruct the url because the path needs to be fully decoded, as csync will re-encode the path:
    //  Remember that csync will just append the filename to the path and pass it to the vio plugin.
    //  csync_owncloud will then re-encode everything.
#if QT_VERSION >= QT_VERSION_CHECK(5, 0, 0)
    QString url_string = _remoteUrl.scheme() + QLatin1String("://") + _remoteUrl.authority(QUrl::EncodeDelimiters) + _remoteUrl.path(QUrl::FullyDecoded);
#else
    // Qt4 was broken anyway as it did not encode the '#' as it should have done  (it was actually a problem when parsing the path from QUrl::setPath
    QString url_string = _remoteUrl.toString();
#endif
    url_string = Utility::toCSyncScheme(url_string);

    csync_create(&_csync_ctx, localPath.toUtf8().data(), url_string.toUtf8().data());
    csync_init(_csync_ctx);
    _excludedFiles.reset(new ExcludedFiles(&_csync_ctx->excludes));
    _syncFileStatusTracker.reset(new SyncFileStatusTracker(this));

    _thread.setObjectName("SyncEngine_Thread");
}

SyncEngine::~SyncEngine()
{
    abort();
    _thread.quit();
    _thread.wait();
    _excludedFiles.reset();
    csync_destroy(_csync_ctx);
}

//Convert an error code from csync to a user readable string.
// Keep that function thread safe as it can be called from the sync thread or the main thread
QString SyncEngine::csyncErrorToString(CSYNC_STATUS err)
{
    QString errStr;

    switch( err ) {
    case CSYNC_STATUS_OK:
        errStr = tr("Success.");
        break;
    case CSYNC_STATUS_STATEDB_LOAD_ERROR:
        errStr = tr("CSync failed to load or create the journal file. "
                    "Make sure you have read and write permissions in the local sync folder.");
        break;
    case CSYNC_STATUS_STATEDB_CORRUPTED:
        errStr = tr("CSync failed to load the journal file. The journal file is corrupted.");
        break;
    case CSYNC_STATUS_NO_MODULE:
        errStr = tr("<p>The %1 plugin for csync could not be loaded.<br/>Please verify the installation!</p>").arg(qApp->applicationName());
        break;
    case CSYNC_STATUS_TREE_ERROR:
        errStr = tr("CSync got an error while processing internal trees.");
        break;
    case CSYNC_STATUS_MEMORY_ERROR:
        errStr = tr("CSync failed to reserve memory.");
        break;
    case CSYNC_STATUS_PARAM_ERROR:
        errStr = tr("CSync fatal parameter error.");
        break;
    case CSYNC_STATUS_UPDATE_ERROR:
        errStr = tr("CSync processing step update failed.");
        break;
    case CSYNC_STATUS_RECONCILE_ERROR:
        errStr = tr("CSync processing step reconcile failed.");
        break;
    case CSYNC_STATUS_PROXY_AUTH_ERROR:
        errStr = tr("CSync could not authenticate at the proxy.");
        break;
    case CSYNC_STATUS_LOOKUP_ERROR:
        errStr = tr("CSync failed to lookup proxy or server.");
        break;
    case CSYNC_STATUS_SERVER_AUTH_ERROR:
        errStr = tr("CSync failed to authenticate at the %1 server.").arg(qApp->applicationName());
        break;
    case CSYNC_STATUS_CONNECT_ERROR:
        errStr = tr("CSync failed to connect to the network.");
        break;
    case CSYNC_STATUS_TIMEOUT:
        errStr = tr("A network connection timeout happened.");
        break;
    case CSYNC_STATUS_HTTP_ERROR:
        errStr = tr("A HTTP transmission error happened.");
        break;
    case CSYNC_STATUS_PERMISSION_DENIED:
        errStr = tr("CSync failed due to unhandled permission denied.");
        break;
    case CSYNC_STATUS_NOT_FOUND:
        errStr = tr("CSync failed to access") + " "; // filename gets added.
        break;
    case CSYNC_STATUS_FILE_EXISTS:
        errStr = tr("CSync tried to create a folder that already exists.");
        break;
    case CSYNC_STATUS_OUT_OF_SPACE:
        errStr = tr("CSync: No space on %1 server available.").arg(qApp->applicationName());
        break;
    case CSYNC_STATUS_UNSUCCESSFUL:
        errStr = tr("CSync unspecified error.");
        break;
    case CSYNC_STATUS_ABORTED:
        errStr = tr("Aborted by the user");
        break;
    case CSYNC_STATUS_SERVICE_UNAVAILABLE:
        errStr = tr("The service is temporarily unavailable");
        break;
    case CSYNC_STATUS_STORAGE_UNAVAILABLE:
        errStr = tr("The mounted folder is temporarily not available on the server");
        break;
    case CSYNC_STATUS_FORBIDDEN:
        errStr = tr("Access is forbidden");
        break;
    case CSYNC_STATUS_OPENDIR_ERROR:
        errStr = tr("An error occurred while opening a folder");
        break;
    case CSYNC_STATUS_READDIR_ERROR:
        errStr = tr("Error while reading folder.");
        break;
    case CSYNC_STATUS_INVALID_CHARACTERS:
        // Handled in callee
    default:
        errStr = tr("An internal error number %1 occurred.").arg( (int) err );
    }

    return errStr;

}

/**
 * Check if the item is in the blacklist.
 * If it should not be sync'ed because of the blacklist, update the item with the error instruction
 * and proper error message, and return true.
 * If the item is not in the blacklist, or the blacklist is stale, return false.
 */
bool SyncEngine::checkErrorBlacklisting( SyncFileItem &item )
{
    if( !_journal ) {
        qWarning() << "Journal is undefined!";
        return false;
    }

    SyncJournalErrorBlacklistRecord entry = _journal->errorBlacklistEntry(item._file);
    item._hasBlacklistEntry = false;

    if( !entry.isValid() ) {
        return false;
    }

    item._hasBlacklistEntry = true;

    // If duration has expired, it's not blacklisted anymore
    time_t now = Utility::qDateTimeToTime_t(QDateTime::currentDateTime());
    if( now > entry._lastTryTime + entry._ignoreDuration ) {
        qDebug() << "blacklist entry for " << item._file << " has expired!";
        return false;
    }

    // If the file has changed locally or on the server, the blacklist
    // entry no longer applies
    if( item._direction == SyncFileItem::Up ) { // check the modtime
        if(item._modtime == 0 || entry._lastTryModtime == 0) {
            return false;
        } else if( item._modtime != entry._lastTryModtime ) {
            qDebug() << item._file << " is blacklisted, but has changed mtime!";
            return false;
        } else if( item._renameTarget != entry._renameTarget) {
            qDebug() << item._file << " is blacklisted, but rename target changed from" << entry._renameTarget;
            return false;
        }
    } else if( item._direction == SyncFileItem::Down ) {
        // download, check the etag.
        if( item._etag.isEmpty() || entry._lastTryEtag.isEmpty() ) {
            qDebug() << item._file << "one ETag is empty, no blacklisting";
            return false;
        } else if( item._etag != entry._lastTryEtag ) {
            qDebug() << item._file << " is blacklisted, but has changed etag!";
            return false;
        }
    }

    qDebug() << "Item is on blacklist: " << entry._file
             << "retries:" << entry._retryCount
             << "for another" << (entry._lastTryTime + entry._ignoreDuration - now) << "s";
    item._instruction = CSYNC_INSTRUCTION_ERROR;
    item._status = SyncFileItem::FileIgnored;
    item._errorString = tr("The item is not synced because of previous errors: %1").arg(entry._errorString);

    return true;
}

void SyncEngine::deleteStaleDownloadInfos()
{
    // Find all downloadinfo paths that we want to preserve.
    QSet<QString> download_file_paths;
    foreach(const SyncFileItemPtr &it, _syncedItems) {
        if (it->_direction == SyncFileItem::Down
                && it->_type == SyncFileItem::File)
        {
            download_file_paths.insert(it->_file);
        }
    }

    // Delete from journal and from filesystem.
    const QVector<SyncJournalDb::DownloadInfo> deleted_infos =
            _journal->getAndDeleteStaleDownloadInfos(download_file_paths);
    foreach (const SyncJournalDb::DownloadInfo & deleted_info, deleted_infos) {
        const QString tmppath = _propagator->getFilePath(deleted_info._tmpfile);
        qDebug() << "Deleting stale temporary file: " << tmppath;
        FileSystem::remove(tmppath);
    }
}

void SyncEngine::deleteStaleUploadInfos()
{
    // Find all blacklisted paths that we want to preserve.
    QSet<QString> upload_file_paths;
    foreach(const SyncFileItemPtr &it, _syncedItems) {
        if (it->_direction == SyncFileItem::Up
                && it->_type == SyncFileItem::File)
        {
            upload_file_paths.insert(it->_file);
        }
    }

    // Delete from journal.
    _journal->deleteStaleUploadInfos(upload_file_paths);
}

void SyncEngine::deleteStaleErrorBlacklistEntries()
{
    // Find all blacklisted paths that we want to preserve.
    QSet<QString> blacklist_file_paths;
    foreach(const SyncFileItemPtr &it, _syncedItems) {
        if (it->_hasBlacklistEntry)
            blacklist_file_paths.insert(it->_file);
    }

    // Delete from journal.
    _journal->deleteStaleErrorBlacklistEntries(blacklist_file_paths);
}

int SyncEngine::treewalkLocal( TREE_WALK_FILE* file, void *data )
{
    return static_cast<SyncEngine*>(data)->treewalkFile( file, false );
}

int SyncEngine::treewalkRemote( TREE_WALK_FILE* file, void *data )
{
    return static_cast<SyncEngine*>(data)->treewalkFile( file, true );
}

int SyncEngine::treewalkFile( TREE_WALK_FILE *file, bool remote )
{
    if( ! file ) return -1;

    QTextCodec::ConverterState utf8State;
    static QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    Q_ASSERT(codec);
    QString fileUtf8 = codec->toUnicode(file->path, qstrlen(file->path), &utf8State);
    QString renameTarget;
    QString key = fileUtf8;

    auto instruction = file->instruction;
    if (utf8State.invalidChars > 0 || utf8State.remainingChars > 0) {
        qWarning() << "File ignored because of invalid utf-8 sequence: " << file->path;
        instruction = CSYNC_INSTRUCTION_IGNORE;
    } else {
        renameTarget = codec->toUnicode(file->rename_path, qstrlen(file->rename_path), &utf8State);
        if (utf8State.invalidChars > 0 || utf8State.remainingChars > 0) {
            qWarning() << "File ignored because of invalid utf-8 sequence in the rename_path: " << file->path << file->rename_path;
            instruction = CSYNC_INSTRUCTION_IGNORE;
        }
        if (instruction == CSYNC_INSTRUCTION_RENAME) {
            key = renameTarget;
        }
    }

    // Gets a default-constructed SyncFileItemPtr or the one from the first walk (=local walk)
    SyncFileItemPtr item = _syncItemMap.value(key);
    if (!item)
        item = SyncFileItemPtr(new SyncFileItem);

    if (item->_file.isEmpty() || instruction == CSYNC_INSTRUCTION_RENAME) {
        item->_file = fileUtf8;
    }
    item->_originalFile = item->_file;

    if (item->_instruction == CSYNC_INSTRUCTION_NONE
            || (item->_instruction == CSYNC_INSTRUCTION_IGNORE && instruction != CSYNC_INSTRUCTION_NONE)) {
        item->_instruction = instruction;
        item->_modtime = file->modtime;
    } else {
        if (instruction != CSYNC_INSTRUCTION_NONE) {
            qDebug() << "ERROR: Instruction" << item->_instruction << "vs" << instruction << "for" << fileUtf8;
            Q_ASSERT(!"Instructions are both unequal NONE");
            return -1;
        }
    }

    if (file->file_id && file->file_id[0]) {
        item->_fileId = file->file_id;
    }
    if (file->directDownloadUrl) {
        item->_directDownloadUrl = QString::fromUtf8( file->directDownloadUrl );
    }
    if (file->directDownloadCookies) {
        item->_directDownloadCookies = QString::fromUtf8( file->directDownloadCookies );
    }
    if (file->remotePerm && file->remotePerm[0]) {
        item->_remotePerm = QByteArray(file->remotePerm);
    }

    item->_should_update_metadata = item->_should_update_metadata || file->should_update_metadata;

    /* The flag "serverHasIgnoredFiles" is true if item in question is a directory
     * that has children which are ignored in sync, either because the files are
     * matched by an ignore pattern, or because they are hidden.
     *
     * Only the information about the server side ignored files is stored to the
     * database and thus written to the item here. For the local repository its
     * generated by the walk through the real file tree by discovery phase.
     *
     * It needs to go to the sync journal becasue the stat information about remote
     * files are often read from database rather than being pulled from remote.
     */
    if( remote ) {
        item->_serverHasIgnoredFiles    = (file->has_ignored_files > 0);
    }

    // Sometimes the discovery computes checksums for local files
    if (!remote && file->checksum && file->checksumTypeId) {
        item->_contentChecksum = QByteArray(file->checksum);
        item->_contentChecksumType = _journal->getChecksumType(file->checksumTypeId);
    }

    // record the seen files to be able to clean the journal later
    _seenFiles.insert(item->_file);
    if (!renameTarget.isEmpty()) {
        // Yes, this records both the rename renameTarget and the original so we keep both in case of a rename
        _seenFiles.insert(renameTarget);
    }

    if (remote && file->remotePerm && file->remotePerm[0]) {
        _remotePerms[item->_file] = file->remotePerm;
    }

    switch(file->error_status) {
    case CSYNC_STATUS_OK:
        break;
    case CSYNC_STATUS_INDIVIDUAL_IS_SYMLINK:
        item->_errorString = tr("Symbolic links are not supported in syncing.");
        break;
    case CSYNC_STATUS_INDIVIDUAL_IGNORE_LIST:
        item->_errorString = tr("File is listed on the ignore list.");
        break;
    case CSYNC_STATUS_INDIVIDUAL_IS_INVALID_CHARS:
        item->_errorString = tr("Filename contains invalid characters that can not be synced cross platform.");
        break;
    case CSYNC_STATUS_INDIVIDUAL_EXCLUDE_LONG_FILENAME:
        item->_errorString = tr("Filename is too long.");
        break;
    case CSYNC_STATUS_INDIVIDUAL_EXCLUDE_HIDDEN:
        item->_errorString = tr("File/Folder is ignored because it's hidden.");
        break;
    case CYSNC_STATUS_FILE_LOCKED_OR_OPEN:
        item->_errorString = QLatin1String("File locked"); // don't translate, internal use!
        break;
    case CSYNC_STATUS_INDIVIDUAL_STAT_FAILED:
        item->_errorString = tr("Stat failed.");
        break;
    case CSYNC_STATUS_SERVICE_UNAVAILABLE:
        item->_errorString = QLatin1String("Server temporarily unavailable.");
        break;
    case CSYNC_STATUS_STORAGE_UNAVAILABLE:
        item->_errorString = QLatin1String("Directory temporarily not available on server.");
        item->_status = SyncFileItem::SoftError;
        _temporarilyUnavailablePaths.insert(item->_file);
        break;
    case CSYNC_STATUS_FORBIDDEN:
        item->_errorString = QLatin1String("Access forbidden.");
        item->_status = SyncFileItem::SoftError;
        _temporarilyUnavailablePaths.insert(item->_file);
        break;
    case CSYNC_STATUS_PERMISSION_DENIED:
        item->_errorString = QLatin1String("Directory not accessible on client, permission denied.");
        item->_status = SyncFileItem::SoftError;
        break;
    default:
        Q_ASSERT("Non handled error-status");
        /* No error string */
    }

    if (item->_instruction == CSYNC_INSTRUCTION_IGNORE && (utf8State.invalidChars > 0 || utf8State.remainingChars > 0)) {
        item->_status = SyncFileItem::NormalError;
        //item->_instruction = CSYNC_INSTRUCTION_ERROR;
        item->_errorString = tr("Filename encoding is not valid");
    }

    bool isDirectory = file->type == CSYNC_FTW_TYPE_DIR;

    if (file->etag && file->etag[0]) {
        item->_etag = file->etag;
    }
    item->_size = file->size;

    if (!item->_inode) {
        item->_inode = file->inode;
    }

    switch( file->type ) {
    case CSYNC_FTW_TYPE_DIR:
        item->_type = SyncFileItem::Directory;
        break;
    case CSYNC_FTW_TYPE_FILE:
        item->_type = SyncFileItem::File;
        break;
    case CSYNC_FTW_TYPE_SLINK:
        item->_type = SyncFileItem::SoftLink;
        break;
    default:
        item->_type = SyncFileItem::UnknownType;
    }

    SyncFileItem::Direction dir = SyncFileItem::None;

    int re = 0;
    switch(file->instruction) {
    case CSYNC_INSTRUCTION_NONE: {
        if (remote && item->_should_update_metadata && !isDirectory && item->_instruction == CSYNC_INSTRUCTION_NONE) {
            // Update the database now already:  New remote fileid or Etag or RemotePerm
            // Or for files that were detected as "resolved conflict".
            // Or a local inode/mtime change (see localMetadataUpdate below)

            // In case of "resolved conflict": there should have been a conflict because they
            // both were new, or both had their local mtime or remote etag modified, but the
            // size and mtime is the same on the server.  This typically happens when the
            // database is removed. Nothing will be done for those files, but we still need
            // to update the database.

            // This metadata update *could* be a propagation job of its own, but since it's
            // quick to do and we don't want to create a potentially large number of
            // mini-jobs later on, we just update metadata right now.

            QString filePath = _localPath + item->_file;

            // Even if the mtime is different on the server, we always want to keep the mtime from
            // the file system in the DB, this is to avoid spurious upload on the next sync
            item->_modtime = file->other.modtime;
            // same for the size
            item->_size = file->other.size;

            // If the 'W' remote permission changed, update the local filesystem
            SyncJournalFileRecord prev = _journal->getFileRecord(item->_file);
            if (prev.isValid() && prev._remotePerm.contains('W') != item->_remotePerm.contains('W')) {
                const bool isReadOnly = !item->_remotePerm.contains('W');
                FileSystem::setFileReadOnlyWeak(filePath, isReadOnly);
            }

            _journal->setFileRecordMetadata(SyncJournalFileRecord(*item, filePath));
            item->_should_update_metadata = false;

            // Technically we're done with this item. See localMetadataUpdate hack below.
            _syncItemMap.remove(key);
        }
        // Any files that are instruction NONE?
        if (!isDirectory && file->other.instruction == CSYNC_INSTRUCTION_NONE) {
            _hasNoneFiles = true;
        }
        // We want to still update etags of directories, other NONE
        // items can be ignored.
        bool directoryEtagUpdate = isDirectory && file->should_update_metadata;
        bool localMetadataUpdate = !remote && file->should_update_metadata;
        if (!directoryEtagUpdate) {
            item->_isDirectory = isDirectory;
            if (localMetadataUpdate) {
                // Hack, we want a local metadata update to happen, but only if the
                // remote tree doesn't ask us to do some kind of propagation.
                _syncItemMap.insert(key, item);
            }
            emit syncItemDiscovered(*item);
            return re;
        }
        break;
    }
    case CSYNC_INSTRUCTION_RENAME:
        dir = !remote ? SyncFileItem::Down : SyncFileItem::Up;
        item->_renameTarget = renameTarget;
        if (isDirectory)
            _renamedFolders.insert(item->_file, item->_renameTarget);
        break;
    case CSYNC_INSTRUCTION_REMOVE:
        _hasRemoveFile = true;
        dir = !remote ? SyncFileItem::Down : SyncFileItem::Up;
        break;
    case CSYNC_INSTRUCTION_CONFLICT:
    case CSYNC_INSTRUCTION_IGNORE:
    case CSYNC_INSTRUCTION_ERROR:
        dir = SyncFileItem::None;
        break;
    case CSYNC_INSTRUCTION_TYPE_CHANGE:
    case CSYNC_INSTRUCTION_SYNC:
        if (!remote) {
            // An upload of an existing file means that the file was left unchanged on the server
            // This counts as a NONE for detecting if all the files on the server were changed
            _hasNoneFiles = true;
        } else if (!isDirectory) {
            if (std::difftime(file->modtime, file->other.modtime) < 0) {
                // We are going back on time
                _backInTimeFiles++;
                qDebug() << file->path << "has a timestamp earlier than the local file";
            } else {
                _hasForwardInTimeFiles = true;
            }
        }
        dir = remote ? SyncFileItem::Down : SyncFileItem::Up;
        break;
    case CSYNC_INSTRUCTION_NEW:
    case CSYNC_INSTRUCTION_EVAL:
    case CSYNC_INSTRUCTION_STAT_ERROR:
    default:
        dir = remote ? SyncFileItem::Down : SyncFileItem::Up;
        break;
    }

    item->_direction = dir;
    item->_isDirectory = isDirectory;
    if (instruction != CSYNC_INSTRUCTION_NONE) {
        // check for blacklisting of this item.
        // if the item is on blacklist, the instruction was set to ERROR
        checkErrorBlacklisting( *item );
    }

    _progressInfo->adjustTotalsForFile(*item);

    _needsUpdate = true;

    item->log._etag          = file->etag;
    item->log._fileId        = file->file_id;
    item->log._instruction   = file->instruction;
    item->log._modtime       = file->modtime;
    item->log._size          = file->size;

    item->log._other_etag        = file->other.etag;
    item->log._other_fileId      = file->other.file_id;
    item->log._other_instruction = file->other.instruction;
    item->log._other_modtime     = file->other.modtime;
    item->log._other_size        = file->other.size;

    _syncItemMap.insert(key, item);

    emit syncItemDiscovered(*item);
    return re;
}

void SyncEngine::handleSyncError(CSYNC *ctx, const char *state) {
    CSYNC_STATUS err = csync_get_status( ctx );
    const char *errMsg = csync_get_status_string( ctx );
    QString errStr = csyncErrorToString(err);
    if( errMsg ) {
        if( !errStr.endsWith(" ")) {
            errStr.append(" ");
        }
        errStr += QString::fromUtf8(errMsg);
    }
    // Special handling CSYNC_STATUS_INVALID_CHARACTERS
    if (err == CSYNC_STATUS_INVALID_CHARACTERS) {
        errStr = tr("Invalid characters, please rename \"%1\"").arg(errMsg);
    }

    // if there is csyncs url modifier in the error message, replace it.
    if( errStr.contains("ownclouds://") ) errStr.replace("ownclouds://", "https://");
    if( errStr.contains("owncloud://") ) errStr.replace("owncloud://", "http://");

    qDebug() << " #### ERROR during "<< state << ": " << errStr;

    if( CSYNC_STATUS_IS_EQUAL( err, CSYNC_STATUS_ABORTED) ) {
        qDebug() << "Update phase was aborted by user!";
    } else if( CSYNC_STATUS_IS_EQUAL( err, CSYNC_STATUS_SERVICE_UNAVAILABLE ) ||
            CSYNC_STATUS_IS_EQUAL( err, CSYNC_STATUS_CONNECT_ERROR )) {
        emit csyncUnavailable();
    } else {
        emit csyncError(errStr);
    }
    finalize(false);
}

void SyncEngine::startSync()
{
    if (_journal->exists()) {
        QVector< SyncJournalDb::PollInfo > pollInfos = _journal->getPollInfos();
        if (!pollInfos.isEmpty()) {
            qDebug() << "Finish Poll jobs before starting a sync";
            CleanupPollsJob *job = new CleanupPollsJob(pollInfos, _account,
                                                       _journal, _localPath, this);
            connect(job, SIGNAL(finished()), this, SLOT(startSync()));
            connect(job, SIGNAL(aborted(QString)), this, SLOT(slotCleanPollsJobAborted(QString)));
            job->start();
            return;
        }
    }

    Q_ASSERT(!s_anySyncRunning);
    Q_ASSERT(!_syncRunning);
    s_anySyncRunning = true;
    _syncRunning = true;
    _anotherSyncNeeded = false;

    _progressInfo->reset();

    if (!QDir(_localPath).exists()) {
        // No _tr, it should only occur in non-mirall
        emit csyncError("Unable to find local sync folder.");
        finalize(false);
        return;
    }

    // Check free size on disk first.
    const qint64 minFree = criticalFreeSpaceLimit();
    const qint64 freeBytes = Utility::freeDiskSpace(_localPath);
    if (freeBytes >= 0) {
        qDebug() << "There are" << freeBytes << "bytes available at" << _localPath
                 << "and at least" << minFree << "are required";
        if (freeBytes < minFree) {
            emit csyncError(tr("Only %1 are available, need at least %2 to start",
                               "Placeholders are postfixed with file sizes using Utility::octetsToString()").arg(
                                Utility::octetsToString(freeBytes),
                                Utility::octetsToString(minFree)));
            finalize(false);
            return;
        }
    } else {
        qDebug() << "Could not determine free space available at" << _localPath;
    }

    _syncedItems.clear();
    _syncItemMap.clear();
    _needsUpdate = false;

    csync_resume(_csync_ctx);

    int fileRecordCount = -1;
    if (!_journal->exists()) {
        qDebug() << "=====sync looks new (no DB exists)";
    } else {
        qDebug() << "=====sync with existing DB";
    }

    qDebug() <<  "=====Using Qt" << qVersion();
#if QT_VERSION >= QT_VERSION_CHECK(5,0,0)
    qDebug() <<  "=====Using SSL library version"
             <<  QSslSocket::sslLibraryVersionString().toUtf8().data();
#endif

    fileRecordCount = _journal->getFileRecordCount(); // this creates the DB if it does not exist yet

    if( fileRecordCount == -1 ) {
        qDebug() << "No way to create a sync journal!";
        emit csyncError(tr("Unable to initialize a sync journal."));
        finalize(false);
        return;
        // database creation error!
    }

    _csync_ctx->read_remote_from_db = true;

    // This tells csync to never read from the DB if it is empty
    // thereby speeding up the initial discovery significantly.
    _csync_ctx->db_is_empty = (fileRecordCount == 0);

    bool ok;
    auto selectiveSyncBlackList = _journal->getSelectiveSyncList(SyncJournalDb::SelectiveSyncBlackList, &ok);
    if (ok) {
        bool usingSelectiveSync = (!selectiveSyncBlackList.isEmpty());
        qDebug() << Q_FUNC_INFO << (usingSelectiveSync ? "====Using Selective Sync" : "====NOT Using Selective Sync");
    } else {
        qDebug() << Q_FUNC_INFO << "Could not retrieve selective sync list from DB";
        emit csyncError(tr("Unable to read the blacklist from the local database"));
        finalize(false);
        return;
    }
    csync_set_userdata(_csync_ctx, this);

    // Set up checksumming hook
    _csync_ctx->callbacks.checksum_hook = &CSyncChecksumHook::hook;
    _csync_ctx->callbacks.checksum_userdata = &_checksum_hook;

    _stopWatch.start();

    qDebug() << "#### Discovery start #################################################### >>";

    _thread.start();
    _discoveryMainThread = new DiscoveryMainThread(account());
    _discoveryMainThread->setParent(this);
    connect(this, SIGNAL(finished(bool)), _discoveryMainThread, SLOT(deleteLater()));
    qDebug() << "=====Server" << account()->serverVersion()
             <<  QString("rootEtagChangesNotOnlySubFolderEtags=%1").arg(account()->rootEtagChangesNotOnlySubFolderEtags());
    if (account()->rootEtagChangesNotOnlySubFolderEtags()) {
        connect(_discoveryMainThread, SIGNAL(etag(QString)), this, SLOT(slotRootEtagReceived(QString)));
    } else {
        connect(_discoveryMainThread, SIGNAL(etagConcatenation(QString)), this, SLOT(slotRootEtagReceived(QString)));
    }

    DiscoveryJob *discoveryJob = new DiscoveryJob(_csync_ctx);
    discoveryJob->_selectiveSyncBlackList = selectiveSyncBlackList;
    discoveryJob->_selectiveSyncWhiteList =
        _journal->getSelectiveSyncList(SyncJournalDb::SelectiveSyncWhiteList, &ok);
    if (!ok) {
        delete discoveryJob;
        qDebug() << Q_FUNC_INFO << "Unable to read selective sync list, aborting.";
        emit csyncError(tr("Unable to read from the sync journal."));
        finalize(false);
        return;
    }

    discoveryJob->_newBigFolderSizeLimit = _newBigFolderSizeLimit;
    discoveryJob->moveToThread(&_thread);
    connect(discoveryJob, SIGNAL(finished(int)), this, SLOT(slotDiscoveryJobFinished(int)));
    connect(discoveryJob, SIGNAL(folderDiscovered(bool,QString)),
            this, SIGNAL(folderDiscovered(bool,QString)));

    connect(discoveryJob, SIGNAL(newBigFolder(QString)),
            this, SIGNAL(newBigFolder(QString)));


    // This is used for the DiscoveryJob to be able to request the main thread/
    // to read in directory contents.
    qDebug() << Q_FUNC_INFO << _remotePath << _remoteUrl;
    _discoveryMainThread->setupHooks( discoveryJob, _remotePath);

    // Starts the update in a seperate thread
    QMetaObject::invokeMethod(discoveryJob, "start", Qt::QueuedConnection);
}

void SyncEngine::slotRootEtagReceived(const QString &e) {
    if (_remoteRootEtag.isEmpty()) {
        qDebug() << Q_FUNC_INFO << e;
        _remoteRootEtag = e;
        emit rootEtag(_remoteRootEtag);
    }
}

void SyncEngine::slotDiscoveryJobFinished(int discoveryResult)
{
    // To clean the progress info
    emit folderDiscovered(false, QString());

    if (discoveryResult < 0 ) {
        handleSyncError(_csync_ctx, "csync_update");
        return;
    }
    qDebug() << "<<#### Discovery end #################################################### " << _stopWatch.addLapTime(QLatin1String("Discovery Finished"));

    // Sanity check
    if (!_journal->isConnected()) {
        qDebug() << "Bailing out, DB failure";
        emit csyncError(tr("Cannot open the sync journal"));
        finalize(false);
        return;
    } else {
        // Commits a possibly existing (should not though) transaction and starts a new one for the propagate phase
        _journal->commitIfNeededAndStartNewTransaction("Post discovery");
    }

    if( csync_reconcile(_csync_ctx) < 0 ) {
        handleSyncError(_csync_ctx, "csync_reconcile");
        return;
    }

    qDebug() << "<<#### Reconcile end #################################################### " << _stopWatch.addLapTime(QLatin1String("Reconcile Finished"));

    _hasNoneFiles = false;
    _hasRemoveFile = false;
    _hasForwardInTimeFiles = false;
    _backInTimeFiles = 0;
    bool walkOk = true;
    _seenFiles.clear();
    _temporarilyUnavailablePaths.clear();

    if( csync_walk_local_tree(_csync_ctx, &treewalkLocal, 0) < 0 ) {
        qDebug() << "Error in local treewalk.";
        walkOk = false;
    }
    if( walkOk && csync_walk_remote_tree(_csync_ctx, &treewalkRemote, 0) < 0 ) {
        qDebug() << "Error in remote treewalk.";
    }

    if (_csync_ctx->remote.root_perms) {
        _remotePerms[QLatin1String("")] = _csync_ctx->remote.root_perms;
        qDebug() << "Permissions of the root folder: " << _remotePerms[QLatin1String("")];
    }

    // Re-init the csync context to free memory
    csync_commit(_csync_ctx);

    // The map was used for merging trees, convert it to a list:
    _syncedItems = _syncItemMap.values().toVector();
    _syncItemMap.clear(); // free memory

    // Adjust the paths for the renames.
    for (SyncFileItemVector::iterator it = _syncedItems.begin();
            it != _syncedItems.end(); ++it) {
        (*it)->_file = adjustRenamedPath((*it)->_file);
    }

    // Check for invalid character in old server version
    if (_account->serverVersionInt() < 0x080100) {
        // Server version older than 8.1 don't support these character in filename.
        static const QRegExp invalidCharRx("[\\\\:?*\"<>|]");
        for (auto it = _syncedItems.begin(); it != _syncedItems.end(); ++it) {
            if ((*it)->_direction == SyncFileItem::Up &&
                    (*it)->destination().contains(invalidCharRx)) {
                (*it)->_errorString  = tr("File name contains at least one invalid character");
                (*it)->_instruction = CSYNC_INSTRUCTION_IGNORE;
            }
        }
    }

    if (!_hasNoneFiles && _hasRemoveFile) {
        qDebug() << Q_FUNC_INFO << "All the files are going to be changed, asking the user";
        bool cancel = false;
        emit aboutToRemoveAllFiles(_syncedItems.first()->_direction, &cancel);
        if (cancel) {
            qDebug() << Q_FUNC_INFO << "Abort sync";
            finalize(false);
            return;
        }
    }
    if (!_hasForwardInTimeFiles && _backInTimeFiles >= 2) {
        qDebug() << "All the changes are bringing files in the past, asking the user";
        // this typically happen when a backup is restored on the server
        bool restore = false;
        emit aboutToRestoreBackup(&restore);
        if (restore) {
            restoreOldFiles();
        }
    }

    // Sort items per destination
    std::sort(_syncedItems.begin(), _syncedItems.end());

    // make sure everything is allowed
    checkForPermission();

    // To announce the beginning of the sync
    emit aboutToPropagate(_syncedItems);
    // it's important to do this before ProgressInfo::start(), to announce start of new sync
    emit transmissionProgress(*_progressInfo);
    _progressInfo->startEstimateUpdates();

    // post update phase script: allow to tweak stuff by a custom script in debug mode.
    if( !qgetenv("OWNCLOUD_POST_UPDATE_SCRIPT").isEmpty() ) {
#ifndef NDEBUG
        QString script = qgetenv("OWNCLOUD_POST_UPDATE_SCRIPT");

        qDebug() << "OOO => Post Update Script: " << script;
        QProcess::execute(script.toUtf8());
#else
    qWarning() << "**** Attention: POST_UPDATE_SCRIPT installed, but not executed because compiled with NDEBUG";
#endif
    }

    // do a database commit
    _journal->commit("post treewalk");

    _propagator = QSharedPointer<OwncloudPropagator>(
        new OwncloudPropagator (_account, _localPath, _remoteUrl.path(), _remotePath, _journal));
    connect(_propagator.data(), SIGNAL(itemCompleted(const SyncFileItem &, const PropagatorJob &)),
            this, SLOT(slotItemCompleted(const SyncFileItem &, const PropagatorJob &)));
    connect(_propagator.data(), SIGNAL(progress(const SyncFileItem &,quint64)),
            this, SLOT(slotProgress(const SyncFileItem &,quint64)));
    connect(_propagator.data(), SIGNAL(finished()), this, SLOT(slotFinished()), Qt::QueuedConnection);
    connect(_propagator.data(), SIGNAL(seenLockedFile(QString)), SIGNAL(seenLockedFile(QString)));

    // apply the network limits to the propagator
    setNetworkLimits(_uploadLimit, _downloadLimit);

    deleteStaleDownloadInfos();
    deleteStaleUploadInfos();
    deleteStaleErrorBlacklistEntries();
    _journal->commit("post stale entry removal");

    // Emit the started signal only after the propagator has been set up.
    if (_needsUpdate)
        emit(started());

    _propagator->start(_syncedItems);

    qDebug() << "<<#### Post-Reconcile end #################################################### " << _stopWatch.addLapTime(QLatin1String("Post-Reconcile Finished"));
}

void SyncEngine::slotCleanPollsJobAborted(const QString &error)
{
    csyncError(error);
    finalize(false);
}

void SyncEngine::setNetworkLimits(int upload, int download)
{
    _uploadLimit = upload;
    _downloadLimit = download;

    if( !_propagator ) return;

    _propagator->_uploadLimit = upload;
    _propagator->_downloadLimit = download;

    int propDownloadLimit = _propagator->_downloadLimit
#if QT_VERSION >= QT_VERSION_CHECK(5, 0, 0)
            .load()
#endif
            ;
    int propUploadLimit = _propagator->_uploadLimit
#if QT_VERSION >= QT_VERSION_CHECK(5, 0, 0)
            .load()
#endif
            ;

    if( propDownloadLimit != 0 || propUploadLimit != 0 ) {
        qDebug() << " N------N Network Limits (down/up) " << propDownloadLimit << propUploadLimit;
    }
}

void SyncEngine::slotItemCompleted(const SyncFileItem &item, const PropagatorJob &job)
{
    const char * instruction_str = csync_instruction_str(item._instruction);
    qDebug() << Q_FUNC_INFO << item._file << instruction_str << item._status << item._errorString;

    _progressInfo->setProgressComplete(item);

    if (item._status == SyncFileItem::FatalError) {
        emit csyncError(item._errorString);
    }

    emit transmissionProgress(*_progressInfo);
    emit itemCompleted(item, job);
}

void SyncEngine::slotFinished()
{
    _anotherSyncNeeded = _anotherSyncNeeded || _propagator->_anotherSyncNeeded;

    // emit the treewalk results.
    if( ! _journal->postSyncCleanup( _seenFiles, _temporarilyUnavailablePaths ) ) {
        qDebug() << "Cleaning of synced ";
    }

    _journal->commit("All Finished.", false);
    emit treeWalkResult(_syncedItems);
    finalize(true); // FIXME: should it be true if there was errors?
}

void SyncEngine::finalize(bool success)
{
    _thread.quit();
    _thread.wait();

    csync_commit(_csync_ctx);
    _journal->close();

    qDebug() << "CSync run took " << _stopWatch.addLapTime(QLatin1String("Sync Finished"));
    _stopWatch.stop();

    s_anySyncRunning = false;
    _syncRunning = false;
    emit finished(success);

    // Delete the propagator only after emitting the signal.
    _propagator.clear();
}

void SyncEngine::slotProgress(const SyncFileItem& item, quint64 current)
{
    _progressInfo->setProgressItem(item, current);
    emit transmissionProgress(*_progressInfo);
}


/* Given a path on the remote, give the path as it is when the rename is done */
QString SyncEngine::adjustRenamedPath(const QString& original)
{
    int slashPos = original.size();
    while ((slashPos = original.lastIndexOf('/' , slashPos - 1)) > 0) {
        QHash< QString, QString >::const_iterator it = _renamedFolders.constFind(original.left(slashPos));
        if (it != _renamedFolders.constEnd()) {
            return *it + original.mid(slashPos);
        }
    }
    return original;
}

/**
 *
 * Make sure that we are allowed to do what we do by checking the permissions and the selective sync list
 *
 */
void SyncEngine::checkForPermission()
{
    bool selectiveListOk;
    auto selectiveSyncBlackList = _journal->getSelectiveSyncList(SyncJournalDb::SelectiveSyncBlackList, &selectiveListOk);
    std::sort(selectiveSyncBlackList.begin(), selectiveSyncBlackList.end());

    for (SyncFileItemVector::iterator it = _syncedItems.begin(); it != _syncedItems.end(); ++it) {
        if ((*it)->_direction != SyncFileItem::Up) {
            // Currently we only check server-side permissions
            continue;
        }

        // Do not propagate anything in the server if it is in the selective sync blacklist
        const QString path = (*it)->destination() + QLatin1Char('/');

        // if reading the selective sync list from db failed, lets ignore all rather than nothing.
        if (!selectiveListOk || std::binary_search(selectiveSyncBlackList.constBegin(), selectiveSyncBlackList.constEnd(),
                                path)) {
            (*it)->_instruction = CSYNC_INSTRUCTION_IGNORE;
            (*it)->_status = SyncFileItem::FileIgnored;
            (*it)->_errorString = tr("Ignored because of the \"choose what to sync\" blacklist");

            if ((*it)->_isDirectory) {
                for (SyncFileItemVector::iterator it_next = it + 1; it_next != _syncedItems.end() && (*it_next)->_file.startsWith(path); ++it_next) {
                    it = it_next;
                    (*it)->_instruction = CSYNC_INSTRUCTION_IGNORE;
                    (*it)->_status = SyncFileItem::FileIgnored;
                    (*it)->_errorString = tr("Ignored because of the \"choose what to sync\" blacklist");
                }
            }
            continue;
        }

        switch((*it)->_instruction) {
            case CSYNC_INSTRUCTION_TYPE_CHANGE:
            case CSYNC_INSTRUCTION_NEW: {
                int slashPos = (*it)->_file.lastIndexOf('/');
                QString parentDir = slashPos <= 0 ? "" : (*it)->_file.mid(0, slashPos);
                const QByteArray perms = getPermissions(parentDir);
                if (perms.isNull()) {
                    // No permissions set
                    break;
                } else if ((*it)->_isDirectory && !perms.contains("K")) {
                    qDebug() << "checkForPermission: ERROR" << (*it)->_file;
                    (*it)->_instruction = CSYNC_INSTRUCTION_ERROR;
                    (*it)->_status = SyncFileItem::NormalError;
                    (*it)->_errorString = tr("Not allowed because you don't have permission to add subfolders to that folder");

                    for (SyncFileItemVector::iterator it_next = it + 1; it_next != _syncedItems.end() && (*it_next)->destination().startsWith(path); ++it_next) {
                        it = it_next;
                        if ((*it)->_instruction == CSYNC_INSTRUCTION_RENAME) {
                            // The file was most likely moved in this directory.
                            // If the file was read only or could not be moved or removed, it should
                            // be restored. Do that in the next sync by not considering as a rename
                            // but delete and upload. It will then be restored if needed.
                            _journal->avoidRenamesOnNextSync((*it)->_file);
                            _anotherSyncNeeded = true;
                            qDebug() << "Moving of " << (*it)->_file << " canceled because no permission to add parent folder";
                        }
                        (*it)->_instruction = CSYNC_INSTRUCTION_ERROR;
                        (*it)->_status = SyncFileItem::NormalError;
                        (*it)->_errorString = tr("Not allowed because you don't have permission to add parent folder");
                    }

                } else if (!(*it)->_isDirectory && !perms.contains("C")) {
                    qDebug() << "checkForPermission: ERROR" << (*it)->_file;
                    (*it)->_instruction = CSYNC_INSTRUCTION_ERROR;
                    (*it)->_status = SyncFileItem::NormalError;
                    (*it)->_errorString = tr("Not allowed because you don't have permission to add files in that folder");
                }
                break;
            }
            case CSYNC_INSTRUCTION_SYNC: {
                const QByteArray perms = getPermissions((*it)->_file);
                if (perms.isNull()) {
                    // No permissions set
                    break;
                } if (!(*it)->_isDirectory && !perms.contains("W")) {
                    qDebug() << "checkForPermission: RESTORING" << (*it)->_file;
                    (*it)->_should_update_metadata = true;
                    (*it)->_instruction = CSYNC_INSTRUCTION_CONFLICT;
                    (*it)->_direction = SyncFileItem::Down;
                    (*it)->_isRestoration = true;
                    // take the things to write to the db from the "other" node (i.e: info from server)
                    (*it)->_modtime = (*it)->log._other_modtime;
                    (*it)->_size = (*it)->log._other_size;
                    (*it)->_fileId = (*it)->log._other_fileId;
                    (*it)->_etag = (*it)->log._other_etag;
                    (*it)->_errorString = tr("Not allowed to upload this file because it is read-only on the server, restoring");
                    continue;
                }
                break;
            }
            case CSYNC_INSTRUCTION_REMOVE: {
                const QByteArray perms = getPermissions((*it)->_file);
                if (perms.isNull()) {
                    // No permissions set
                    break;
                }
                if (!perms.contains("D")) {
                    qDebug() << "checkForPermission: RESTORING" << (*it)->_file;
                    (*it)->_should_update_metadata = true;
                    (*it)->_instruction = CSYNC_INSTRUCTION_NEW;
                    (*it)->_direction = SyncFileItem::Down;
                    (*it)->_isRestoration = true;
                    (*it)->_errorString = tr("Not allowed to remove, restoring");

                    if ((*it)->_isDirectory) {
                        // restore all sub items
                        for (SyncFileItemVector::iterator it_next = it + 1;
                             it_next != _syncedItems.end() && (*it_next)->_file.startsWith(path); ++it_next) {
                            it = it_next;

                            if ((*it)->_instruction != CSYNC_INSTRUCTION_REMOVE) {
                                qWarning() << "non-removed job within a removed folder"
                                           << (*it)->_file << (*it)->_instruction;
                                continue;
                            }

                            qDebug() << "checkForPermission: RESTORING" << (*it)->_file;
                            (*it)->_should_update_metadata = true;

                            (*it)->_instruction = CSYNC_INSTRUCTION_NEW;
                            (*it)->_direction = SyncFileItem::Down;
                            (*it)->_isRestoration = true;
                            (*it)->_errorString = tr("Not allowed to remove, restoring");
                        }
                    }
                } else if(perms.contains("S") && perms.contains("D")) {
                    // this is a top level shared dir which can be removed to unshare it,
                    // regardless if it is a read only share or not.
                    // To avoid that we try to restore files underneath this dir which have
                    // not delete permission we fast forward the iterator and leave the
                    // delete jobs intact. It is not physically tried to remove this files
                    // underneath, propagator sees that.
                    if( (*it)->_isDirectory ) {
                        // put a more descriptive message if a top level share dir really is removed.
                        if( it == _syncedItems.begin() || !(path.startsWith((*(it-1))->_file)) ) {
                            (*it)->_errorString = tr("Local files and share folder removed.");
                        }

                        for (SyncFileItemVector::iterator it_next = it + 1;
                             it_next != _syncedItems.end() && (*it_next)->_file.startsWith(path); ++it_next) {
                            it = it_next;
                        }
                    }
                }
                break;
            }

            case CSYNC_INSTRUCTION_RENAME: {

                int slashPos = (*it)->_renameTarget.lastIndexOf('/');
                const QString parentDir = slashPos <= 0 ? "" : (*it)->_renameTarget.mid(0, slashPos);
                const QByteArray destPerms = getPermissions(parentDir);
                const QByteArray filePerms = getPermissions((*it)->_file);

                //true when it is just a rename in the same directory. (not a move)
                bool isRename = (*it)->_file.startsWith(parentDir) && (*it)->_file.lastIndexOf('/') == slashPos;


                // Check if we are allowed to move to the destination.
                bool destinationOK = true;
                if (isRename || destPerms.isNull()) {
                    // no need to check for the destination dir permission
                    destinationOK = true;
                } else if ((*it)->_isDirectory && !destPerms.contains("K")) {
                    destinationOK = false;
                } else if (!(*it)->_isDirectory && !destPerms.contains("C")) {
                    destinationOK = false;
                }

                // check if we are allowed to move from the source
                bool sourceOK = true;
                if (!filePerms.isNull()
                    &&  ((isRename && !filePerms.contains("N"))
                         || (!isRename && !filePerms.contains("V")))) {

                    // We are not allowed to move or rename this file
                    sourceOK = false;

                    if (filePerms.contains("D") && destinationOK) {
                        // but we are allowed to delete it
                        // TODO!  simulate delete & upload
                    }
                }

#ifdef OWNCLOUD_RESTORE_RENAME /* We don't like the idea of renaming behind user's back, as the user may be working with the files */
                if (!sourceOK && (!destinationOK || isRename)
                        // (not for directory because that's more complicated with the contents that needs to be adjusted)
                        && !(*it)->_isDirectory) {
                    // Both the source and the destination won't allow move.  Move back to the original
                    std::swap((*it)->_file, (*it)->_renameTarget);
                    (*it)->_direction = SyncFileItem::Down;
                    (*it)->_errorString = tr("Move not allowed, item restored");
                    (*it)->_isRestoration = true;
                    qDebug() << "checkForPermission: MOVING BACK" << (*it)->_file;
                    // in case something does wrong, we will not do it next time
                    _journal->avoidRenamesOnNextSync((*it)->_file);
                } else
#endif
                if (!sourceOK || !destinationOK) {
                    // One of them is not possible, just throw an error
                    (*it)->_instruction = CSYNC_INSTRUCTION_ERROR;
                    (*it)->_status = SyncFileItem::NormalError;
                    const QString errorString = tr("Move not allowed because %1 is read-only").arg(
                        sourceOK ? tr("the destination") : tr("the source"));
                    (*it)->_errorString = errorString;

                    qDebug() << "checkForPermission: ERROR MOVING" << (*it)->_file << errorString;

                    // Avoid a rename on next sync:
                    // TODO:  do the resolution now already so we don't need two sync
                    //  At this point we would need to go back to the propagate phase on both remote to take
                    //  the decision.
                    _journal->avoidRenamesOnNextSync((*it)->_file);
                    _anotherSyncNeeded = true;


                    if ((*it)->_isDirectory) {
                        for (SyncFileItemVector::iterator it_next = it + 1;
                             it_next != _syncedItems.end() && (*it_next)->destination().startsWith(path); ++it_next) {
                            it = it_next;
                            (*it)->_instruction = CSYNC_INSTRUCTION_ERROR;
                            (*it)->_status = SyncFileItem::NormalError;
                            (*it)->_errorString = errorString;
                            qDebug() << "checkForPermission: ERROR MOVING" << (*it)->_file;
                        }
                    }
                }
                break;
            }
            default:
                break;
        }
    }
}

QByteArray SyncEngine::getPermissions(const QString& file) const
{
    static bool isTest = qgetenv("OWNCLOUD_TEST_PERMISSIONS").toInt();
    if (isTest) {
        QRegExp rx("_PERM_([^_]*)_[^/]*$");
        if (rx.indexIn(file) != -1) {
            return rx.cap(1).toLatin1();
        }
    }
    return _remotePerms.value(file);
}

void SyncEngine::restoreOldFiles()
{
    /* When the server is trying to send us lots of file in the past, this means that a backup
       was restored in the server.  In that case, we should not simply overwrite the newer file
       on the file system with the older file from the backup on the server. Instead, we will
       upload the client file. But we still downloaded the old file in a conflict file just in case
    */

    for (auto it = _syncedItems.begin(); it != _syncedItems.end(); ++it) {
        if ((*it)->_direction != SyncFileItem::Down)
            continue;

        switch ((*it)->_instruction) {
        case CSYNC_INSTRUCTION_SYNC:
            qDebug() << "restoreOldFiles: RESTORING" << (*it)->_file;
            (*it)->_instruction = CSYNC_INSTRUCTION_CONFLICT;
            break;
        case CSYNC_INSTRUCTION_REMOVE:
            qDebug() << "restoreOldFiles: RESTORING" << (*it)->_file;
            (*it)->_should_update_metadata = true;
            (*it)->_instruction = CSYNC_INSTRUCTION_NEW;
            (*it)->_direction = SyncFileItem::Up;
            break;
        case CSYNC_INSTRUCTION_RENAME:
        case CSYNC_INSTRUCTION_NEW:
            // Ideally we should try to revert the rename or remove, but this would be dangerous
            // without re-doing the reconcile phase.  So just let it happen.
            break;
        default:
            break;
        }
    }
}

SyncFileItem* SyncEngine::findSyncItem(const QString &fileName) const
{
    Q_FOREACH(const SyncFileItemPtr &item, _syncedItems) {
        // Directories will appear in this list as well, and will get their status set once all children have been propagated
        if ((item->_file == fileName || (!item->_renameTarget.isEmpty() && item->_renameTarget == fileName)))
            return item.data();
    }
    return 0;
}

qint64 SyncEngine::timeSinceFileTouched(const QString& fn) const
{
    // This copy is essential for thread safety.
    QSharedPointer<OwncloudPropagator> prop = _propagator;
    if (prop) {
        return prop->timeSinceFileTouched(fn);
    }
    return -1;
}

AccountPtr SyncEngine::account() const
{
    return _account;
}

void SyncEngine::abort()
{
    // Sets a flag for the update phase
    csync_request_abort(_csync_ctx);
    qDebug() << Q_FUNC_INFO << _discoveryMainThread;
    // Aborts the discovery phase job
    if (_discoveryMainThread) {
        _discoveryMainThread->abort();
    }
    // For the propagator
    if(_propagator) {
        _propagator->abort();
    }
}

} // namespace OCC
