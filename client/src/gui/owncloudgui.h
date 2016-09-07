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

#ifndef OWNCLOUDGUI_H
#define OWNCLOUDGUI_H

#include "systray.h"
#include "connectionvalidator.h"
#include "progressdispatcher.h"

#include <QObject>
#include <QPointer>
#include <QAction>
#include <QMenu>
#include <QSignalMapper>
#include <QSize>

namespace OCC {

class Folder;

class SettingsDialog;
class SettingsDialogMac;
class ShareDialog;
class Application;
class LogBrowser;
class AccountState;

/**
 * @brief The ownCloudGui class
 * @ingroup gui
 */
class ownCloudGui : public QObject
{
    Q_OBJECT
public:
    explicit ownCloudGui(Application *parent = 0);

    bool checkAccountExists(bool openSettings);

    static void raiseDialog(QWidget *raiseWidget);
    static QSize settingsDialogSize() { return QSize(800, 500); }
    void setupOverlayIcons();

signals:
    void setupProxy();

public slots:
    void setupContextMenu();
    void slotComputeOverallSyncStatus();
    void slotShowTrayMessage(const QString &title, const QString &msg);
    void slotShowOptionalTrayMessage(const QString &title, const QString &msg);
    void slotFolderOpenAction( const QString& alias );
    void slotRebuildRecentMenus();
    void slotUpdateProgress(const QString &folder, const ProgressInfo& progress);
    void slotShowGuiMessage(const QString &title, const QString &message);
    void slotFoldersChanged();
    void slotShowSettings();
    void slotShowSyncProtocol();
    void slotShutdown();
    void slotSyncStateChange(Folder*);
    void slotTrayClicked( QSystemTrayIcon::ActivationReason reason );
    void slotToggleLogBrowser();
    void slotOpenOwnCloud();
    void slotOpenSettingsDialog();
    void slotHelp();
    void slotOpenPath(const QString& path);
    void slotAccountStateChanged();
    void slotTrayMessageIfServerUnsupported(Account *account);
    void slotShowShareDialog(const QString &sharePath, const QString &localPath, bool resharingAllowed);
    void slotRemoveDestroyedShareDialogs();

private slots:
    void slotDisplayIdle();
    void slotLogin();
    void slotLogout();
    void slotUnpauseAllFolders();
    void slotPauseAllFolders();

private:
    void setPauseOnAllFoldersHelper(bool pause);
    void setupActions();
    void addAccountContextMenu(AccountStatePtr accountState, QMenu* menu, bool separateMenu);

    QPointer<Systray> _tray;
#if defined(Q_OS_MAC)
    QPointer<SettingsDialogMac> _settingsDialog;
#else
    QPointer<SettingsDialog> _settingsDialog;
#endif
    QPointer<LogBrowser>_logBrowser;
       // tray's menu
    QScopedPointer<QMenu> _contextMenu;
    QMenu *_recentActionsMenu;
    QVector<QMenu*> _accountMenus;
    bool _qdbusmenuWorkaround;
    QMap<QString, QPointer<ShareDialog> > _shareDialogs;

    QAction *_actionLogin;
    QAction *_actionLogout;

    QAction *_actionSettings;
    QAction *_actionStatus;
    QAction *_actionEstimate;
    QAction *_actionRecent;
    QAction *_actionHelp;
    QAction *_actionQuit;
    QAction *_actionCrash;

    QList<QAction*> _recentItemsActions;

    QSignalMapper *_folderOpenActionMapper;
    QSignalMapper *_recentItemsMapper;

    Application *_app;
};

} // namespace OCC

#endif // OWNCLOUDGUI_H
