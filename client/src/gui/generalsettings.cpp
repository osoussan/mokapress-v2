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

#include "generalsettings.h"
#include "ui_generalsettings.h"

#include "theme.h"
#include "configfile.h"
#include "application.h"
#include "utility.h"
#include "configfile.h"
#include "owncloudsetupwizard.h"
#include "accountmanager.h"
#include "synclogdialog.h"

#include "updater/updater.h"
#include "updater/ocupdater.h"
#include "ignorelisteditor.h"
#include "languagesettings.h"

#include "config.h"

#include <QNetworkProxy>
#include <QDir>

namespace OCC {

GeneralSettings::GeneralSettings(QWidget *parent) :
    QWidget(parent),
    _ui(new Ui::GeneralSettings)
{
    _ui->setupUi(this);

    connect(_ui->desktopNotificationsCheckBox, SIGNAL(toggled(bool)),
            SLOT(slotToggleOptionalDesktopNotifications(bool)));

    _ui->autostartCheckBox->setChecked(Utility::hasLaunchOnStartup(Theme::instance()->appName()));
    connect(_ui->autostartCheckBox, SIGNAL(toggled(bool)), SLOT(slotToggleLaunchOnStartup(bool)));

    // setup about section
    QString about = Theme::instance()->about();
    if (about.isEmpty()) {
        _ui->aboutGroupBox->hide();
    } else {
        _ui->aboutLabel->setTextInteractionFlags(Qt::TextSelectableByMouse | Qt::TextBrowserInteraction);
        _ui->aboutLabel->setText(about);
        _ui->aboutLabel->setWordWrap(true);
        _ui->aboutLabel->setOpenExternalLinks(true);
    }

    loadMiscSettings();
    slotUpdateInfo();

    // misc
    connect(_ui->monoIconsCheckBox, SIGNAL(toggled(bool)), SLOT(saveMiscSettings()));
    connect(_ui->crashreporterCheckBox, SIGNAL(toggled(bool)), SLOT(saveMiscSettings()));
    connect(_ui->newFolderLimitCheckBox, SIGNAL(toggled(bool)), SLOT(saveMiscSettings()));
    connect(_ui->newFolderLimitSpinBox, SIGNAL(valueChanged(int)), SLOT(saveMiscSettings()));

#ifndef WITH_CRASHREPORTER
    _ui->crashreporterCheckBox->setVisible(false);
#endif

    /* Set the left contents margin of the layout to zero to make the checkboxes
     * align properly vertically , fixes bug #3758
     */
    int m0, m1, m2, m3;
    _ui->horizontalLayout_3->getContentsMargins( &m0, &m1, &m2, &m3 );
    _ui->horizontalLayout_3->setContentsMargins(0, m1, m2, m3 );

    // OEM themes are not obliged to ship mono icons, so there
    // is no point in offering an option
    QString themeDir = QString::fromLatin1(":/client/theme/%1/")
            .arg(Theme::instance()->systrayIconFlavor(true));
    _ui->monoIconsCheckBox->setVisible(QDir(themeDir).exists());

    connect(_ui->languageFilesButton, SIGNAL(clicked()), SLOT(slotLanguageFilesEditor()));
}

GeneralSettings::~GeneralSettings()
{
    delete _ui;
    delete _syncLogDialog;
}

QSize GeneralSettings::sizeHint() const {
    return QSize(ownCloudGui::settingsDialogSize().width(), QWidget::sizeHint().height());
}

void GeneralSettings::loadMiscSettings()
{
    ConfigFile cfgFile;
    _ui->monoIconsCheckBox->setChecked(cfgFile.monoIcons());
    _ui->desktopNotificationsCheckBox->setChecked(cfgFile.optionalDesktopNotifications());
    _ui->crashreporterCheckBox->setChecked(cfgFile.crashReporter());
    auto newFolderLimit = cfgFile.newBigFolderSizeLimit();
    _ui->newFolderLimitCheckBox->setChecked(newFolderLimit.first);
    _ui->newFolderLimitSpinBox->setValue(newFolderLimit.second);
}

void GeneralSettings::slotUpdateInfo()
{
    OCUpdater *updater = dynamic_cast<OCUpdater*>(Updater::instance());
    if (ConfigFile().skipUpdateCheck()) {
        updater = 0; // don't show update info if updates are disabled
    }

    if (updater) {
        connect(updater, SIGNAL(downloadStateChanged()), SLOT(slotUpdateInfo()), Qt::UniqueConnection);
        connect(_ui->restartButton, SIGNAL(clicked()), updater, SLOT(slotStartInstaller()), Qt::UniqueConnection);
        connect(_ui->restartButton, SIGNAL(clicked()), qApp, SLOT(quit()), Qt::UniqueConnection);
        _ui->updateStateLabel->setText(updater->statusString());
        _ui->restartButton->setVisible(updater->downloadState() == OCUpdater::DownloadComplete);
    } else {
        // can't have those infos from sparkle currently
        _ui->updatesGroupBox->setVisible(false);
    }
}

void GeneralSettings::saveMiscSettings()
{
    ConfigFile cfgFile;
    bool isChecked = _ui->monoIconsCheckBox->isChecked();
    cfgFile.setMonoIcons(isChecked);
    Theme::instance()->setSystrayUseMonoIcons(isChecked);
    cfgFile.setCrashReporter(_ui->crashreporterCheckBox->isChecked());

    cfgFile.setNewBigFolderSizeLimit(_ui->newFolderLimitCheckBox->isChecked(),
                                        _ui->newFolderLimitSpinBox->value());
}

void GeneralSettings::slotToggleLaunchOnStartup(bool enable)
{
    Theme *theme = Theme::instance();
    Utility::setLaunchOnStartup(theme->appName(), theme->appNameGUI(), enable);
}

void GeneralSettings::slotToggleOptionalDesktopNotifications(bool enable)
{
    ConfigFile cfgFile;
    cfgFile.setOptionalDesktopNotifications(enable);
}

void GeneralSettings::slotLanguageFilesEditor()
{
    /*
    if (_ignoreEditor.isNull()) {
        _ignoreEditor = new IgnoreListEditor(this);
        _ignoreEditor->setAttribute( Qt::WA_DeleteOnClose, true );
        _ignoreEditor->open();
    } else {
        ownCloudGui::raiseDialog(_ignoreEditor);
    } */
    if (_languageEditor.isNull()) {
        _languageEditor = new LanguageSettings(this);
        _languageEditor->setAttribute(Qt::WA_DeleteOnClose, true);
        _languageEditor->open();
    } else {
        ownCloudGui::raiseDialog(_languageEditor);
    }
}


} // namespace OCC
