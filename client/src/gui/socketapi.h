/*
 * Copyright (C) by Dominik Schmidt <dev@dominik-schmidt.de>
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


#ifndef SOCKETAPI_H
#define SOCKETAPI_H

#include "syncfileitem.h"
#include "syncfilestatus.h"
#include "ownsql.h"

#if defined(Q_OS_MAC)
#include "socketapisocket_mac.h"
#else
#include <QLocalServer>
typedef QLocalServer SocketApiServer;
#endif

class QUrl;
class QLocalSocket;
class QStringList;

namespace OCC {

class SyncFileStatus;
class Folder;

/**
 * @brief The SocketApi class
 * @ingroup gui
 */
class SocketApi : public QObject
{
Q_OBJECT

public:
    explicit SocketApi(QObject* parent = 0);
    virtual ~SocketApi();

public slots:
    void slotUpdateFolderView(Folder *f);
    void slotUnregisterPath( const QString& alias );
    void slotRegisterPath( const QString& alias );

signals:
    void shareCommandReceived(const QString &sharePath, const QString &localPath, bool resharingAllowed);
    void shareUserGroupCommandReceived(const QString &sharePath, const QString &localPath, bool resharingAllowed);

private slots:
    void slotNewConnection();
    void onLostConnection();
    void slotReadSocket();
    void slotFileStatusChanged(const QString& systemFileName, SyncFileStatus fileStatus);

private:
    void sendMessage(QIODevice* socket, const QString& message, bool doWait = false);
    void broadcastMessage(const QString& verb, const QString &path, const QString &status = QString::null, bool doWait = false);

    Q_INVOKABLE void command_RETRIEVE_FOLDER_STATUS(const QString& argument, QIODevice* socket);
    Q_INVOKABLE void command_RETRIEVE_FILE_STATUS(const QString& argument, QIODevice* socket);
    Q_INVOKABLE void command_SHARE(const QString& localFile, QIODevice* socket);

    Q_INVOKABLE void command_VERSION(const QString& argument, QIODevice* socket);

    Q_INVOKABLE void command_SHARE_STATUS(const QString& localFile, QIODevice *socket);
    Q_INVOKABLE void command_SHARE_MENU_TITLE(const QString& argument, QIODevice* socket);
    QString buildRegisterPathMessage(const QString& path);

    QSet<QString> _registeredAliases;
    QList<QIODevice*> _listeners;
    SocketApiServer _localServer;
};

}
#endif // SOCKETAPI_H
