/*
 * Copyright (C) by Roeland Jago Douma <roeland@owncloud.com>
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

#ifndef SHAREUSERGROUPWIDGET_H
#define SHAREUSERGROUPWIDGET_H

#include "accountfwd.h"
#include "sharepermissions.h"
#include "QProgressIndicator.h"
#include <QDialog>
#include <QWidget>
#include <QVariantMap>
#include <QSharedPointer>
#include <QList>
#include <QVector>
#include <QTimer>

class QAction;
class QCompleter;
class QModelIndex;

namespace OCC {

namespace Ui {
class ShareUserGroupWidget;
class ShareWidget;
}

class AbstractCredentials;
class QuotaInfo;
class SyncResult;
class Share;
class Sharee;
class ShareManager;
class ShareeModel;

class ShareWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ShareWidget(QSharedPointer<Share> Share,
                         SharePermissions maxSharingPermissions,
                         bool isFile,
                         QWidget *parent = 0);
    ~ShareWidget();

    QSharedPointer<Share> share() const;

signals:
    void shareDeleted(ShareWidget *share);
    void resizeRequested();

private slots:
    void on_deleteShareButton_clicked();
    void slotPermissionsChanged();
    void slotEditPermissionsChanged();
    void slotDeleteAnimationFinished();

    void slotShareDeleted();
    void slotPermissionsSet();
private:
    void displayPermissions();

    Ui::ShareWidget *_ui;
    QSharedPointer<Share> _share;
    bool _isFile;

    QAction *_permissionCreate;
    QAction *_permissionUpdate;
    QAction *_permissionDelete;
};


/**
 * @brief The ShareDialog (user/group) class
 * @ingroup gui
 */
class ShareUserGroupWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ShareUserGroupWidget(AccountPtr account, 
                                  const QString &sharePath,
                                  const QString &localPath,
                                  SharePermissions maxSharingPermissions,
                                  QWidget *parent = 0);
    ~ShareUserGroupWidget();

public slots:
    void getShares();

private slots:
    void slotSharesFetched(const QList<QSharedPointer<Share>> &shares);

    void on_shareeLineEdit_textChanged(const QString &text);
    void searchForSharees();
    void slotLineEditTextEdited(const QString &text);

    void slotLineEditReturn();
    void slotCompleterActivated(const QModelIndex & index);
    void slotCompleterHighlighted(const QModelIndex & index);
    void slotShareesReady();
    void slotAdjustScrollWidgetSize();
    void displayError(int code ,const QString &message);

private:
    Ui::ShareUserGroupWidget *_ui;
    AccountPtr _account;
    QString _sharePath;
    QString _localPath;

    QCompleter *_completer;
    ShareeModel *_completerModel;
    QTimer _completionTimer;

    SharePermissions _maxSharingPermissions;
    bool _isFile;
    bool _disableCompleterActivated; // in order to avoid that we share the contents twice
    ShareManager *_manager;

    QProgressIndicator _pi_sharee;
};

}

#endif // SHAREUSERGROUPWIDGET_H
