/*
 * Copyright (C) by Olivier Goffart <ogoffart@owncloud.com>
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

#include "propagatorjobs.h"
#include "owncloudpropagator_p.h"

#include "utility.h"
#include "syncjournaldb.h"
#include "syncjournalfilerecord.h"
#include "filesystem.h"
#include <qfile.h>
#include <qdir.h>
#include <qdiriterator.h>
#include <qtemporaryfile.h>
#if QT_VERSION < QT_VERSION_CHECK(5, 0, 0)
#include <qabstractfileengine.h>
#else
#include <qsavefile.h>
#endif
#include <QDebug>
#include <QDateTime>
#include <qstack.h>
#include <QCoreApplication>

#include <time.h>

#include <iostream>

namespace OCC {

// Code copied from Qt5's QDir::removeRecursively
// (and modified to report the error)
    static bool removeRecursively(const QString &path, QString &error)
    {
        bool success = true;
        QDirIterator di(path, QDir::AllEntries | QDir::Hidden | QDir::System | QDir::NoDotAndDotDot);
        while (di.hasNext()) {
            di.next();
            const QFileInfo& fi = di.fileInfo();
            bool ok;
            // The use of isSymLink here is okay:
            // we never want to go into this branch for .lnk files
            if (fi.isDir() && !fi.isSymLink()) {
                ok = removeRecursively(di.filePath(), error); // recursive
            } else {
                QFile f(di.filePath());
                ok = f.remove();
                if (!ok) {
                    error += PropagateLocalRemove::tr("Error removing '%1': %2;").
                            arg(QDir::toNativeSeparators(f.fileName()), f.errorString()) + " ";
                    qDebug() << "Error removing " << f.fileName() << ':' << f.errorString();
                }
            }
            if (!ok)
                success = false;
        }
        if (success) {
            success = QDir().rmdir(path);
            if (!success) {
                error += PropagateLocalRemove::tr("Could not remove directory '%1';")
                                 .arg(QDir::toNativeSeparators(path)) + " ";
                qDebug() << "Error removing directory" << path;
            }
        }
        return success;
    }

    void PropagateLocalRemove::start()
    {
        if (_propagator->_abortRequested.fetchAndAddRelaxed(0))
            return;

        QString filename = _propagator->_localDir +  _item->_file;
        if( _propagator->localFileNameClash(_item->_file)) {
            done(SyncFileItem::NormalError, tr("Could not remove %1 because of a local file name clash")
                    .arg(QDir::toNativeSeparators(filename)));
            return;
        }

        if (_item->_isDirectory) {
            QString error;
            if (QDir(filename).exists() && !OCC::removeRecursively(filename, error)) {
                done(SyncFileItem::NormalError, error);
                return;
            }
        } else {
            QFile file(filename);
            if (FileSystem::fileExists(filename) && !file.remove()) {
                done(SyncFileItem::NormalError, file.errorString());
                return;
            }
        }
        emit progress(*_item, 0);
        _propagator->_journal->deleteFileRecord(_item->_originalFile, _item->_isDirectory);
        _propagator->_journal->commit("Local remove");
        done(SyncFileItem::Success);
    }

    void PropagateLocalMkdir::start()
    {
        if (_propagator->_abortRequested.fetchAndAddRelaxed(0))
            return;

        QDir newDir(_propagator->_localDir + _item->_file);
        QString newDirStr = QDir::toNativeSeparators(newDir.path());
        if( Utility::fsCasePreserving() && _propagator->localFileNameClash(_item->_file ) ) {
            qDebug() << "WARN: new directory to create locally already exists!";
            done( SyncFileItem::NormalError, tr("Attention, possible case sensitivity clash with %1").arg(newDirStr) );
            return;
        }
        QDir localDir(_propagator->_localDir);
        if (!localDir.mkpath(_item->_file)) {
            done( SyncFileItem::NormalError, tr("could not create directory %1").arg(newDirStr) );
            return;
        }
        if (!_item->_file.startsWith(QLatin1String(".config")))
        {
            std::cout << "PropagateLocalMkdir for .config" << std::endl;
            QString file(QString(".config/") + _item->_file);
            localDir.mkdir(file);
        }
        done(SyncFileItem::Success);
    }

    void PropagateLocalRename::checkFiles(QStringList list, QDir dir)
    {
        foreach (QString file, list) {
            std::cout << "Checking : " << file.toUtf8().constData() << std::endl;
            QFileInfo fileInfo(tr("%1/%2").arg(dir.absolutePath(), file));
            if((file != "." && file != "..") && fileInfo.isDir())
            {
                QDir dir2(fileInfo.absoluteFilePath());
                QStringList list2 = dir2.entryList();
                checkFiles(list2, dir2);
            }
            if (file.endsWith(".html"))
            {
                std::cout << "Renamed file ending with .html" << std::endl;
                QFile web(fileInfo.absoluteFilePath());
                web.open(QIODevice::ReadWrite);
                QString cont( web.readAll() );
                QStringList conts = cont.split( "\n" );
                QString before(_item->_file.mid(_item->_file.lastIndexOf('/') + 1));
                QString after(_item->_renameTarget.mid(_item->_renameTarget.lastIndexOf('/') + 1));
                conts[0].replace(before, after);
                web.close();
                web.open( QIODevice::WriteOnly );
                QTextStream text( &web );
                foreach(QString str, conts ) {
                    text << str << endl;
                }
                web.close();

            }
        }
    }

    void PropagateLocalMkdir::setDeleteExistingFile(bool enabled) {
        _deleteExistingFile = enabled;
    }

    void PropagateLocalRename::start()
    {
        if (_propagator->_abortRequested.fetchAndAddRelaxed(0))
            return;

        QString existingFile = _propagator->getFilePath(_item->_file);
        QString targetFile = _propagator->getFilePath(_item->_renameTarget);

        // if the file is a file underneath a moved dir, the _item->file is equal
        // to _item->renameTarget and the file is not moved as a result.
        if (_item->_file != _item->_renameTarget) {
            emit progress(*_item, 0);
            qDebug() << "MOVE " << existingFile << " => " << targetFile;
            QFileInfo file(existingFile);
            if(file.isDir())
            {
                QDir dir(existingFile);
                QStringList list = dir.entryList();
                checkFiles(list, dir);
            }
            if (targetFile.endsWith(".html"))
            {
                QFile web(existingFile);
                web.open(QIODevice::ReadWrite);
                QString cont( web.readAll() );
                QStringList conts = cont.split( "\n" );
                QString before(_item->_file.mid(_item->_file.lastIndexOf('/') + 1));
                QString after(_item->_renameTarget.mid(_item->_renameTarget.lastIndexOf('/') + 1));
                conts[0].replace(before, after);
                web.close();
                web.open( QIODevice::WriteOnly );
                QTextStream text( &web );
                foreach( QString str, conts )
                {
                    text << str << endl;
                }
                web.close();

            }
            if (QString::compare(_item->_file, _item->_renameTarget, Qt::CaseInsensitive) != 0
                && _propagator->localFileNameClash(_item->_renameTarget)) {
                // Only use localFileNameClash for the destination if we know that the source was not
                // the one conflicting  (renaming  A.txt -> a.txt is OK)

                // Fixme: the file that is the reason for the clash could be named here,
                // it would have to come out the localFileNameClash function
                done(SyncFileItem::NormalError, tr( "File %1 can not be renamed to %2 because of a local file name clash")
                        .arg(QDir::toNativeSeparators(_item->_file)).arg(QDir::toNativeSeparators(_item->_renameTarget)) );
                return;
            }

            _propagator->addTouchedFile(existingFile);
            _propagator->addTouchedFile(targetFile);
            QString renameError;
            if (!FileSystem::rename(existingFile, targetFile, &renameError)) {
                done(SyncFileItem::NormalError, renameError);
                return;
            }
            if (!_item->_file.startsWith(QLatin1String(".config")))
            {
                const QString config("Mokapress/.config");
                const QString mokapress("Mokapress");
                const QString before = existingFile.replace(mokapress, config) + ".xml";
                const QString after = targetFile.replace(mokapress, config) + ".xml";
                FileSystem::rename(before, after, &renameError);
            }
        }

        _propagator->_journal->deleteFileRecord(_item->_originalFile);

        // store the rename file name in the item.
        _item->_file = _item->_renameTarget;

        SyncJournalFileRecord record(*_item, targetFile);
        record._path = _item->_renameTarget;

        if (!_item->_isDirectory) { // Directory are saved at the end
            _propagator->_journal->setFileRecord(record);
        }
        _propagator->_journal->commit("localRename");


        done(SyncFileItem::Success);
    }

}