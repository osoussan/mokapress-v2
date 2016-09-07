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

#ifndef MIRALL_FOLDERWATCHER_LINUX_H
#define MIRALL_FOLDERWATCHER_LINUX_H

#include <QObject>
#include <QString>
#include <QSocketNotifier>
#include <QHash>
#include <QDir>

#include "folderwatcher.h"

namespace OCC
{

/**
 * @brief Linux (inotify) API implementation of FolderWatcher
 * @ingroup gui
 */
class FolderWatcherPrivate : public QObject
{
    Q_OBJECT
public:
    FolderWatcherPrivate() { }
    FolderWatcherPrivate(FolderWatcher *p, const QString &path);
    ~FolderWatcherPrivate();

    void addPath(const QString &path);
    void removePath(const QString &);

protected slots:
    void slotReceivedNotification(int fd);
    void slotAddFolderRecursive(const QString &path);

protected:
    bool findFoldersBelow( const QDir& dir, QStringList& fullList );
    void inotifyRegisterPath(const QString& path);

private:
    FolderWatcher *_parent;

    QString _folder;
    QHash <int, QString> _watches;
    QScopedPointer<QSocketNotifier> _socket;
    int _fd;
};

}

#endif
