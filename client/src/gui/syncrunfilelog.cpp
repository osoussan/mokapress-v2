/*
 * Copyright (C) by Klaas Freitag <freitag@owncloud.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 */

#include <QRegExp>

#include "syncrunfilelog.h"
#include "utility.h"
#include "filesystem.h"
#include <qfileinfo.h>

namespace OCC {

SyncRunFileLog::SyncRunFileLog()
{
}

QString SyncRunFileLog::dateTimeStr( const QDateTime& dt )
{
    return dt.toString(Qt::ISODate);
}

QString SyncRunFileLog::directionToStr( SyncFileItem::Direction dir )
{
    QString re("N");
    if( dir == SyncFileItem::Up ) {
        re = QLatin1String("Up");
    } else if( dir == SyncFileItem::Down ) {
        re = QLatin1String("Down");
    }
    return re;
}

QString SyncRunFileLog::instructionToStr( csync_instructions_e inst )
{
    QString re;

    switch( inst ) {
    case CSYNC_INSTRUCTION_NONE:
        re = "INST_NONE";
        break;
    case CSYNC_INSTRUCTION_EVAL:
        re = "INST_EVAL";
        break;
    case CSYNC_INSTRUCTION_REMOVE:
        re = "INST_REMOVE";
        break;
    case CSYNC_INSTRUCTION_RENAME:
        re = "INST_RENAME";
        break;
    case CSYNC_INSTRUCTION_EVAL_RENAME:
        re = "INST_EVAL_RENAME";
        break;
    case CSYNC_INSTRUCTION_NEW:
        re = "INST_NEW";
        break;
    case CSYNC_INSTRUCTION_CONFLICT:
        re = "INST_CONFLICT";
        break;
    case CSYNC_INSTRUCTION_IGNORE:
        re = "INST_IGNORE";
        break;
    case CSYNC_INSTRUCTION_SYNC:
        re = "INST_SYNC";
        break;
    case CSYNC_INSTRUCTION_STAT_ERROR:
        re = "INST_STAT_ERR";
        break;
    case CSYNC_INSTRUCTION_ERROR:
        re = "INST_ERROR";
        break;
    case CSYNC_INSTRUCTION_TYPE_CHANGE:
        re = "INST_TYPE_CHANGE";
        break;
    }

    return re;
}


void SyncRunFileLog::start(const QString &folderPath,  const Utility::StopWatch &stopWatch )
{
    const qint64 logfileMaxSize = 1024*1024; // 1MiB

    // Note; this name is ignored in csync_exclude.c
    const QString filename = folderPath + QLatin1String(".owncloudsync.log");

    // When the file is too big, just rename it to an old name.
    QFileInfo info(filename);
    bool exists = info.exists();
    if (exists && info.size() > logfileMaxSize) {
        exists = false;
        QString newFilename = filename + QLatin1String(".1");
        QFile::remove(newFilename);
        QFile::rename(filename, newFilename);
    }
    _file.reset(new QFile(filename));

    _file->open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text);
    _out.setDevice( _file.data() );

    QDateTime dt = stopWatch.startTime();
    QDateTime de = stopWatch.timeOfLap(QLatin1String("Sync Finished"));

    if (!exists) {
        // We are creating a new file, add the note.
        _out << "# timestamp | duration | file | instruction | dir | modtime | etag | "
                "size | fileId | status | errorString | http result code | "
                "other size | other modtime | other etag | other fileId | "
                "other instruction" << endl;

        FileSystem::setFileHidden(filename, true);
    }


    _out << "#=#=#=# Syncrun started " << dateTimeStr(dt) << " until " << dateTimeStr(de) << " ("
            << stopWatch.durationOfLap(QLatin1String("Sync Finished")) << " msec)" << endl;
}

void SyncRunFileLog::logItem( const SyncFileItem& item )
{
    // don't log the directory items that are in the list
    if( item._direction == SyncFileItem::None ) {
        return;
    }
    QString ts =  QString::fromAscii(item._responseTimeStamp);
    if( ts.length() > 6 ) {
        QRegExp rx("(\\d\\d:\\d\\d:\\d\\d)");
        if( ts.contains(rx) ) {
            ts = rx.cap(0);
        }
    }

    const QChar L = QLatin1Char('|');
    _out << ts << L;
    _out << QString::number(item._requestDuration) << L;
    _out << item._file << L;
    _out << instructionToStr( item.log._instruction ) << L;
    _out << directionToStr( item._direction ) << L;
    _out << QString::number(item.log._modtime) << L;
    _out << item.log._etag << L;
    _out << QString::number(item.log._size) << L;
    _out << item.log._fileId << L;
    _out << item._status << L;
    _out << item._errorString << L;
    _out << QString::number(item._httpErrorCode) << L;
    _out << QString::number(item.log._other_size) << L;
    _out << QString::number(item.log._other_modtime) << L;
    _out << item.log._other_etag << L;
    _out << item.log._other_fileId << L;
    _out << instructionToStr(item.log._other_instruction) << L;

    _out << endl;
}

void SyncRunFileLog::close()
{
    _file->close();
}

}
