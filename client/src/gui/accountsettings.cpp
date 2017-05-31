/*
 * Copyright (C) by Daniel Molkentin <danimo@owncloud.com>
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


#include "accountsettings.h"
#include "ui_accountsettings.h"

#include "theme.h"
#include "folderman.h"
#include "folderwizard.h"
#include "folderstatusmodel.h"
#include "folderstatusdelegate.h"
#include "utility.h"
#include "application.h"
#include "configfile.h"
#include "account.h"
#include "accountstate.h"
#include "quotainfo.h"
#include "accountmanager.h"
#include "owncloudsetupwizard.h"
#include "creds/abstractcredentials.h"
#include "tooltipupdater.h"

#include <math.h>

#include <QDebug>
#include <QDesktopServices>
#include <QDir>
#include <QListWidgetItem>
#include <QMessageBox>
#include <QAction>
#include <QVBoxLayout>
#include <QTreeView>
#include <QKeySequence>
#include <QIcon>
#include <QVariant>
#include <QToolTip>
#include <qstringlistmodel.h>
#include <qpropertyanimation.h>

#include "account.h"

#ifdef Q_OS_MAC
#include "settingsdialogmac.h"
#endif

namespace OCC {

static const char progressBarStyleC[] =
        "QProgressBar {"
        "border: 1px solid grey;"
        "border-radius: 5px;"
        "text-align: center;"
        "}"
        "QProgressBar::chunk {"
        "background-color: %1; width: 1px;"
        "}";

AccountSettings::AccountSettings(AccountState *accountState, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AccountSettings),
    _wasDisabledBefore(false),
    _accountState(accountState),
    _quotaInfo(accountState)
{
    ui->setupUi(this);

    _model = new FolderStatusModel;
    _model->setAccountState(_accountState);
    _model->setParent(this);
    FolderStatusDelegate *delegate = new FolderStatusDelegate;
    delegate->setParent(this);

    ui->_folderList->header()->hide();
    ui->_folderList->setItemDelegate( delegate );
    ui->_folderList->setModel( _model );
#if defined(Q_OS_MAC)
    ui->_folderList->setMinimumWidth( 400 );
#else
    ui->_folderList->setMinimumWidth( 300 );
#endif
    new ToolTipUpdater(ui->_folderList);

    createAccountToolbox();
    connect(AccountManager::instance(), SIGNAL(accountAdded(AccountState*)),
            SLOT(slotAccountAdded(AccountState*)));
    connect(ui->_folderList, SIGNAL(customContextMenuRequested(QPoint)),
            this, SLOT(slotCustomContextMenuRequested(QPoint)));

    connect(ui->_folderList, SIGNAL(expanded(QModelIndex)) , this, SLOT(refreshSelectiveSyncStatus()));
    connect(ui->_folderList, SIGNAL(collapsed(QModelIndex)) , this, SLOT(refreshSelectiveSyncStatus()));
    connect(ui->selectiveSyncNotification, SIGNAL(linkActivated(QString)),
            this, SLOT(slotLinkActivated(QString)));
    connect(_model, SIGNAL(suggestExpand(QModelIndex)), ui->_folderList, SLOT(expand(QModelIndex)));
    connect(_model, SIGNAL(dirtyChanged()), this, SLOT(refreshSelectiveSyncStatus()));
    refreshSelectiveSyncStatus();
    connect(_model, SIGNAL(rowsInserted(QModelIndex,int,int)),
            this, SLOT(refreshSelectiveSyncStatus()));

    QAction *syncNowAction = new QAction(this);
    syncNowAction->setShortcut(QKeySequence(Qt::Key_F6));
    connect(syncNowAction, SIGNAL(triggered()), SLOT(slotSyncCurrentFolderNow()));
    addAction(syncNowAction);

    connect(ui->_folderList, SIGNAL(clicked(const QModelIndex &)),
            this, SLOT(slotFolderListClicked(const QModelIndex&)));

    connect(ui->selectiveSyncApply, SIGNAL(clicked()), _model, SLOT(slotApplySelectiveSync()));
    connect(ui->selectiveSyncCancel, SIGNAL(clicked()), _model, SLOT(resetFolders()));
    connect(FolderMan::instance(), SIGNAL(folderListChanged(Folder::Map)), _model, SLOT(resetFolders()));
    connect(this, SIGNAL(folderChanged()), _model, SLOT(resetFolders()));


    QColor color = palette().highlight().color();
    ui->quotaProgressBar->setStyleSheet(QString::fromLatin1(progressBarStyleC).arg(color.name()));

    ui->connectLabel->setText(tr("No account configured."));

    connect(_accountState, SIGNAL(stateChanged(int)), SLOT(slotAccountStateChanged(int)));
    slotAccountStateChanged(_accountState->state());

    connect( &_quotaInfo, SIGNAL(quotaUpdated(qint64,qint64)),
            this, SLOT(slotUpdateQuota(qint64,qint64)));

}


void AccountSettings::createAccountToolbox()
{
    QMenu *menu = new QMenu();
    _addAccountAction = new QAction(tr("Add new"), this);
    menu->addAction(_addAccountAction);
    connect(_addAccountAction, SIGNAL(triggered(bool)), SLOT(slotOpenAccountWizard()));

    _toggleSignInOutAction = new QAction(tr("Log out"), this);
    connect(_toggleSignInOutAction, SIGNAL(triggered(bool)), SLOT(slotToggleSignInState()));
    menu->addAction(_toggleSignInOutAction);

    QAction *action = new QAction(tr("Remove"), this);
    menu->addAction(action);
    connect( action, SIGNAL(triggered(bool)), SLOT(slotDeleteAccount()));

    ui->_accountToolbox->setText(tr("Account") + QLatin1Char(' '));
    ui->_accountToolbox->setMenu(menu);
    ui->_accountToolbox->setPopupMode(QToolButton::InstantPopup);

    slotAccountAdded(_accountState);
}

void AccountSettings::slotOpenAccountWizard()
{
    if (
#if QT_VERSION > QT_VERSION_CHECK(5, 0, 0)
            qgetenv("QT_QPA_PLATFORMTHEME") == "appmenu-qt5" ||
                // We can't call isSystemTrayAvailable with appmenu-qt5 because it breaks the systemtray
                // (issue #4693, #4944)
#endif
            QSystemTrayIcon::isSystemTrayAvailable()) {
        topLevelWidget()->close();
    }
#ifdef Q_OS_MAC
    qDebug() << parent() << topLevelWidget();
    SettingsDialogMac *sd = qobject_cast<SettingsDialogMac*>(topLevelWidget());

    if (sd) {
        sd->showActivityPage();
    } else {
        qFatal("nope");
    }
#endif
    OwncloudSetupWizard::runWizard(qApp, SLOT(slotownCloudWizardDone(int)), 0);
}

void AccountSettings::slotToggleSignInState()
{
    if (_accountState->isSignedOut()) {
        _accountState->signIn();
    } else {
        _accountState->signOutByUi();
    }
}

void AccountSettings::doExpand()
{
    ui->_folderList->expandToDepth(0);
}

void AccountSettings::slotCustomContextMenuRequested(const QPoint &pos)
{
    QTreeView *tv = ui->_folderList;
    QModelIndex index = tv->indexAt(pos);
    if (!index.isValid()) {
        return;
    }

    if (_model->classify(index) != FolderStatusModel::RootFolder) {
        return;
    }

    tv->setCurrentIndex(index);
    bool folderPaused = _model->data( index, FolderStatusDelegate::FolderSyncPaused).toBool();
    bool folderConnected = _model->data( index, FolderStatusDelegate::FolderAccountConnected ).toBool();

    QMenu *menu = new QMenu(tv);
    menu->setAttribute(Qt::WA_DeleteOnClose);

    QAction *ac = menu->addAction(tr("Open folder"));
    connect(ac, SIGNAL(triggered(bool)), this, SLOT(slotOpenCurrentFolder()));

    if (!ui->_folderList->isExpanded(index)) {
        ac = menu->addAction(tr("Choose what to sync"));
        ac->setEnabled(folderConnected);
        connect(ac, SIGNAL(triggered(bool)), this, SLOT(doExpand()));
    }

    ac = menu->addAction(folderPaused ? tr("Resume sync") : tr("Pause sync"));
    connect(ac, SIGNAL(triggered(bool)), this, SLOT(slotEnableCurrentFolder()));

    ac = menu->addAction(tr("Remove folder sync connection"));
    connect(ac, SIGNAL(triggered(bool)), this, SLOT(slotRemoveCurrentFolder()));
    menu->exec(tv->mapToGlobal(pos));
}

void AccountSettings::slotFolderListClicked(const QModelIndex& indx)
{
    if (indx.data(FolderStatusDelegate::AddButton).toBool()) {
        if (indx.flags() & Qt::ItemIsEnabled) {
            slotAddFolder();
        } else {
            QToolTip::showText(
                    QCursor::pos(),
                    _model->data(indx, Qt::ToolTipRole).toString(),
                    this);
        }
        return;
    }
    if (_model->classify(indx) == FolderStatusModel::RootFolder) {
        // tries to find if we clicked on the '...' button.
        QTreeView *tv = ui->_folderList;
        auto pos = tv->mapFromGlobal(QCursor::pos());
        if (FolderStatusDelegate::optionsButtonRect(tv->visualRect(indx), layoutDirection()).contains(pos)) {
            slotCustomContextMenuRequested(pos);
            return;
        }

        // Expand root items on single click
        if(_accountState && _accountState->state() == AccountState::Connected ) {
            bool expanded = ! (ui->_folderList->isExpanded(indx));
            ui->_folderList->setExpanded(indx, expanded);
        }
    }
}

void AccountSettings::slotAddFolder()
{
    FolderMan *folderMan = FolderMan::instance();
    folderMan->setSyncEnabled(false); // do not start more syncs.

    FolderWizard *folderWizard = new FolderWizard(_accountState->account(), this);

    connect(folderWizard, SIGNAL(accepted()), SLOT(slotFolderWizardAccepted()));
    connect(folderWizard, SIGNAL(rejected()), SLOT(slotFolderWizardRejected()));
    folderWizard->open();
}


void AccountSettings::slotFolderWizardAccepted()
{
    FolderWizard *folderWizard = qobject_cast<FolderWizard*>(sender());
    FolderMan *folderMan = FolderMan::instance();

    qDebug() << "* Folder wizard completed";

    FolderDefinition definition;
    definition.localPath    = FolderDefinition::prepareLocalPath(
            folderWizard->field(QLatin1String("sourceFolder")).toString());
    definition.targetPath   = folderWizard->property("targetPath").toString();

    {
        QDir dir(definition.localPath);
        if (!dir.exists()) {
            qDebug() << "Creating folder" << definition.localPath;
            if (!dir.mkpath(".")) {
                QMessageBox::warning(this, tr("Folder creation failed"),
                                     tr("<p>Could not create local folder <i>%1</i>.")
                                        .arg(QDir::toNativeSeparators(definition.localPath)));
                return;
            }

        }
    }

    /* take the value from the definition of already existing folders. All folders have
     * the same setting so far.
     * The default is to not sync hidden files
     */

    //definition.ignoreHiddenFiles = folderMan->ignoreHiddenFiles();
    definition.ignoreHiddenFiles = false;

    auto selectiveSyncBlackList = folderWizard->property("selectiveSyncBlackList").toStringList();

    folderMan->setSyncEnabled(true);

    Folder *f = folderMan->addFolder(_accountState, definition);
    if( f ) {
        f->journalDb()->setSelectiveSyncList(SyncJournalDb::SelectiveSyncBlackList, selectiveSyncBlackList);

        // The user already accepted the selective sync dialog. everything is in the white list
        f->journalDb()->setSelectiveSyncList(SyncJournalDb::SelectiveSyncWhiteList,
                                             QStringList() << QLatin1String("/"));
        folderMan->slotScheduleAllFolders();
        emit folderChanged();
    }
}

void AccountSettings::slotFolderWizardRejected()
{
    qDebug() << "* Folder wizard cancelled";
    FolderMan *folderMan = FolderMan::instance();
    folderMan->setSyncEnabled(true);
}

void AccountSettings::slotRemoveCurrentFolder()
{
    QModelIndex selected = ui->_folderList->selectionModel()->currentIndex();
    if( selected.isValid() ) {
        int row = selected.row();

        QString alias = _model->data( selected, FolderStatusDelegate::FolderAliasRole ).toString();
        qDebug() << "Remove Folder alias " << alias;
        if( !alias.isEmpty() ) {
            FolderMan *folderMan = FolderMan::instance();
            QString shortGuiLocalPath = folderMan->folder(alias)->shortGuiLocalPath();

            QMessageBox messageBox(QMessageBox::Question,
                                   tr("Confirm Folder Sync Connection Removal"),
                                   tr("<p>Do you really want to stop syncing the folder <i>%1</i>?</p>"
                                      "<p><b>Note:</b> This will <b>not</b> delete any files.</p>").arg(shortGuiLocalPath),
                                   QMessageBox::NoButton,
                                   this);
            QPushButton* yesButton =
                    messageBox.addButton(tr("Remove Folder Sync Connection"), QMessageBox::YesRole);
            messageBox.addButton(tr("Cancel"), QMessageBox::NoRole);

            messageBox.exec();
            if (messageBox.clickedButton() != yesButton) {
                return;
            }

            folderMan->slotRemoveFolder( folderMan->folder(alias) );
            _model->removeRow(row);

            // single folder fix to show add-button and hide remove-button

            emit folderChanged();
        }
    }
}

void AccountSettings::slotOpenCurrentFolder()
{
    QModelIndex selected = ui->_folderList->selectionModel()->currentIndex();

    if( selected.isValid() ) {
        QString alias = _model->data( selected, FolderStatusDelegate::FolderAliasRole ).toString();
        emit openFolderAlias(alias);
    }
}

void AccountSettings::showConnectionLabel( const QString& message, QStringList errors )
{
    const QString errStyle = QLatin1String("color:#ffffff; background-color:#bb4d4d;padding:5px;"
                                           "border-width: 1px; border-style: solid; border-color: #aaaaaa;"
                                           "border-radius:5px;");
    if( errors.isEmpty() ) {
        ui->connectLabel->setText( message );
        ui->connectLabel->setToolTip(QString());
        ui->connectLabel->setStyleSheet(QString());
    } else {
        errors.prepend(message);
        const QString msg = errors.join(QLatin1String("\n"));
        qDebug() << msg;
        ui->connectLabel->setText( msg );
        ui->connectLabel->setToolTip(QString());
        ui->connectLabel->setStyleSheet(errStyle);
    }
    ui->accountStatus->setVisible(!message.isEmpty());
}

void AccountSettings::slotEnableCurrentFolder()
{
    QModelIndex selected = ui->_folderList->selectionModel()->currentIndex();

    if( selected.isValid() ) {
        QString alias = _model->data( selected, FolderStatusDelegate::FolderAliasRole ).toString();

        if( alias.isEmpty() ) {
            qDebug() << "Empty alias to enable.";
            return;
        }

        FolderMan *folderMan = FolderMan::instance();

        qDebug() << "Application: enable folder with alias " << alias;
        bool terminate = false;
        bool currentlyPaused = false;

        // this sets the folder status to disabled but does not interrupt it.
        Folder *f = folderMan->folder( alias );
        if (!f) {
            return;
        }
        currentlyPaused = f->syncPaused();
        if( ! currentlyPaused ) {
            // check if a sync is still running and if so, ask if we should terminate.
            if( f->isBusy() ) { // its still running
#if defined(Q_OS_MAC)
                QWidget *parent = this;
                Qt::WindowFlags flags = Qt::Sheet;
#else
                QWidget *parent = 0;
                Qt::WindowFlags flags = Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint; // default flags
#endif
                QMessageBox msgbox(QMessageBox::Question, tr("Sync Running"),
                                   tr("The syncing operation is running.<br/>Do you want to terminate it?"),
                                   QMessageBox::Yes | QMessageBox::No, parent, flags);
                msgbox.setDefaultButton(QMessageBox::Yes);
                int reply = msgbox.exec();
                if ( reply == QMessageBox::Yes )
                    terminate = true;
                else
                    return; // do nothing
            }
        }

        // message box can return at any time while the thread keeps running,
        // so better check again after the user has responded.
        if ( f->isBusy() && terminate ) {
            f->slotTerminateSync();
        }
        f->setSyncPaused(!currentlyPaused);

        // keep state for the icon setting.
        if( currentlyPaused ) _wasDisabledBefore = true;

        _model->slotUpdateFolderState (f);
    }
}

void AccountSettings::slotSyncCurrentFolderNow()
{
    QModelIndex selected = ui->_folderList->selectionModel()->currentIndex();
    if( !selected.isValid() )
        return;
    QString alias = _model->data( selected, FolderStatusDelegate::FolderAliasRole ).toString();
    FolderMan *folderMan = FolderMan::instance();

    folderMan->slotScheduleSync(folderMan->folder(alias));
}

void AccountSettings::slotOpenOC()
{
  if( _OCUrl.isValid() )
    QDesktopServices::openUrl( _OCUrl );
}

void AccountSettings::slotUpdateQuota(qint64 total, qint64 used)
{
    if( total > 0 ) {
        ui->quotaProgressBar->setVisible(true);
        ui->quotaProgressBar->setEnabled(true);
        // workaround the label only accepting ints (which may be only 32 bit wide)
        const double percent = used/(double)total*100;
        const int percentInt = qMin(qRound(percent), 100);
        ui->quotaProgressBar->setValue(percentInt);
        QString usedStr = Utility::octetsToString(used);
        QString totalStr = Utility::octetsToString(total);
        QString percentStr = Utility::compactFormatDouble(percent, 1);
        QString toolTip = tr("%1 (%3%) of %2 in use. Some folders, including network mounted or shared folders, might have different limits.").arg(usedStr, totalStr, percentStr);
        ui->quotaInfoLabel->setText(tr("%1 of %2 in use").arg(usedStr, totalStr));
        ui->quotaInfoLabel->setToolTip(toolTip);
        ui->quotaProgressBar->setToolTip(toolTip);
    } else {
        ui->quotaProgressBar->setVisible(false);
        ui->quotaInfoLabel->setToolTip(QString());

        /* -1 means not computed; -2 means unknown; -3 means unlimited  (#3940)*/
        if (total == 0 || total == -1) {
            ui->quotaInfoLabel->setText(tr("Currently there is no storage usage information available."));
        } else {
            QString usedStr = Utility::octetsToString(used);
            ui->quotaInfoLabel->setText(tr("%1 in use").arg(usedStr));
        }
    }
}

void AccountSettings::slotAccountStateChanged(int state)
{
    if (_accountState) {
        ui->sslButton->updateAccountState(_accountState);
        AccountPtr account = _accountState->account();
        QUrl safeUrl(account->url());
        safeUrl.setPassword(QString()); // Remove the password from the URL to avoid showing it in the UI
        FolderMan *folderMan = FolderMan::instance();
        foreach (Folder *folder, folderMan->map().values()) {
            _model->slotUpdateFolderState(folder);
        }

        QString server = QString::fromLatin1("<a href=\"%1\">%2</a>").arg(account->url().toString(), safeUrl.toString());
        QString serverWithUser = server;
        if (AbstractCredentials *cred = account->credentials()) {
           serverWithUser = tr("%1 as <i>%2</i>").arg(server, cred->user());
        }

        if (state == AccountState::Connected) {
            QStringList errors;
            if (account->serverVersionUnsupported()) {
                errors << tr("The server version %1 is old and unsupported! Proceed at your own risk.").arg(account->serverVersion());
            }
            showConnectionLabel( tr("Connected to %1.").arg(serverWithUser), errors );
        } else if (state == AccountState::ServiceUnavailable) {
            showConnectionLabel( tr("Server %1 is temporarily unavailable.").arg(server) );
        } else if (state == AccountState::SignedOut) {
            showConnectionLabel( tr("Signed out from %1.").arg(serverWithUser) );
        } else {
            showConnectionLabel( tr("No connection to %1 at %2.")
                                 .arg(Theme::instance()->appNameGUI(),
                                      server), _accountState->connectionErrors() );
        }
    } else {
        // ownCloud is not yet configured.
        showConnectionLabel( tr("No %1 connection configured.").arg(Theme::instance()->appNameGUI()) );
    }

    /* Allow to expand the item if the account is connected. */
    ui->_folderList->setItemsExpandable( state == AccountState::Connected );

    /* check if there are expanded root items, if so, close them, if the state is different from being Connected. */
    if( state != AccountState::Connected ) {
        int i;
        for (i = 0; i < _model->rowCount(); ++i) {
            if (ui->_folderList->isExpanded(_model->index(i)))
                ui->_folderList->setExpanded(_model->index(i), false);
        }
    }
    /* set the correct label for the Account toolbox button */
    if( _accountState ) {
        if( _accountState->isSignedOut() ) {
            _toggleSignInOutAction->setText(tr("Log in"));
        } else {
            _toggleSignInOutAction->setText(tr("Log out"));
        }
    }
}

void AccountSettings::slotLinkActivated(const QString& link)
{
    // Parse folder alias and filename from the link, calculate the index
    // and select it if it exists.
    const QStringList li = link.split(QLatin1String("?folder="));
    if( li.count() > 1) {
        QString myFolder = li[0];
        const QString alias = li[1];
        if(myFolder.endsWith(QLatin1Char('/'))) myFolder.chop(1);

        // Make sure the folder itself is expanded
        Folder *f = FolderMan::instance()->folder(alias);
        QModelIndex folderIndx = _model->indexForPath(f, QString());
        if( !ui->_folderList->isExpanded(folderIndx)) {
            ui->_folderList->setExpanded(folderIndx, true);
        }

        QModelIndex indx = _model->indexForPath(f, myFolder);
        if( indx.isValid() ) {
            // make sure all the parents are expanded
            for (auto i = indx.parent(); i.isValid(); i = i.parent()) {
                if( !ui->_folderList->isExpanded(i)) {
                    ui->_folderList->setExpanded(i, true);
                }
            }
            ui->_folderList->setSelectionMode(QAbstractItemView::SingleSelection);
            ui->_folderList->setCurrentIndex(indx);
            ui->_folderList->scrollTo(indx);
        } else {
            qDebug() << "Unable to find a valid index for " << myFolder;
        }
    }
}

AccountSettings::~AccountSettings()
{
    delete ui;
}

void AccountSettings::refreshSelectiveSyncStatus()
{
    bool shouldBeVisible = _model->isDirty();

    QString msg;
    int cnt = 0;
    foreach (Folder *folder, FolderMan::instance()->map().values()) {
        if (folder->accountState() != _accountState) {
            continue;
        }

        bool ok;
        auto undecidedList =  folder->journalDb()->getSelectiveSyncList(SyncJournalDb::SelectiveSyncUndecidedList, &ok);
        QString p;
        foreach(const auto &it, undecidedList) {
            // FIXME: add the folder alias in a hoover hint.
            // folder->alias() + QLatin1String("/")
            if( cnt++ ) {
                msg += QLatin1String(", ");
            }
            QString myFolder = (it);
            if( myFolder.endsWith('/')) {
                myFolder.chop(1);
            }
            QModelIndex theIndx = _model->indexForPath(folder, myFolder);
            if(theIndx.isValid()) {
                msg += QString::fromLatin1("<a href=\"%1?folder=%2\">%1</a>").arg(myFolder).arg(folder->alias());
            } else {
                msg += myFolder; // no link because we do not know the index yet.
            }
        }
    }

    if (msg.isEmpty()) {
        ui->selectiveSyncNotification->setVisible(false);
        ui->selectiveSyncNotification->setText(QString());
    } else {
        ui->selectiveSyncNotification->setVisible(true);
        QString wholeMsg = tr("There are new folders that were not synchronized because they are too big: ") + msg;
        ui->selectiveSyncNotification->setText(wholeMsg);
        shouldBeVisible = true;
    }

    ui->selectiveSyncApply->setEnabled(_model->isDirty() || !msg.isEmpty());
    bool wasVisible = !ui->selectiveSyncStatus->isHidden();
    if (wasVisible != shouldBeVisible) {
        QSize hint = ui->selectiveSyncStatus->sizeHint();
        if (shouldBeVisible) {
            ui->selectiveSyncStatus->setMaximumHeight(0);
            ui->selectiveSyncStatus->setVisible(true);
        }
        auto anim = new QPropertyAnimation(ui->selectiveSyncStatus, "maximumHeight", ui->selectiveSyncStatus);
        anim->setEndValue(shouldBeVisible ? hint.height() : 0);
        anim->start(QAbstractAnimation::DeleteWhenStopped);
        if (!shouldBeVisible) {
            connect(anim, SIGNAL(finished()), ui->selectiveSyncStatus, SLOT(hide()));
        }
    }
}

void AccountSettings::slotAccountAdded(AccountState*)
{
    // if the theme is limited to single account, the button must hide if
    // there is already one account.
    int s = AccountManager::instance()->accounts().size();
    if( s > 0 && !Theme::instance()->multiAccount() ) {
        _addAccountAction->setVisible(false);
    } else {
        _addAccountAction->setVisible(true);
    }
}

void AccountSettings::slotDeleteAccount()
{
    // Deleting the account potentially deletes 'this', so
    // the QMessageBox should be destroyed before that happens.
    {
        QMessageBox messageBox(QMessageBox::Question,
                               tr("Confirm Account Removal"),
                               tr("<p>Do you really want to remove the connection to the account <i>%1</i>?</p>"
                                  "<p><b>Note:</b> This will <b>not</b> delete any files.</p>")
                                 .arg(_accountState->account()->displayName()),
                               QMessageBox::NoButton,
                               this);
        QPushButton* yesButton =
                messageBox.addButton(tr("Remove connection"), QMessageBox::YesRole);
        messageBox.addButton(tr("Cancel"), QMessageBox::NoRole);

        messageBox.exec();
        if (messageBox.clickedButton() != yesButton) {
            return;
        }
    }

    _model->setAccountState(0); // Else it might access during destruction. This should be better handled by it having a QSharedPointer
    auto manager = AccountManager::instance();
    manager->deleteAccount(_accountState);
    manager->save();

    // IMPORTANT: "this" is deleted from this point on. We should probably remove this synchronous
    // .exec() QMessageBox magic above as it recurses into the event loop.
}

bool AccountSettings::event(QEvent* e)
{
    if (e->type() == QEvent::Hide || e->type() == QEvent::Show) {
        _quotaInfo.setActive(isVisible());
    }
    if (e->type() == QEvent::Show) {
        // Expand the folder automatically only if there's only one, see #4283
        // The 2 is 1 folder + 1 'add folder' button
        if (_model->rowCount() <= 2) {
            ui->_folderList->setExpanded(_model->index(0, 0), true);
        }
    }
    return QWidget::event(e);
}

} // namespace OCC
