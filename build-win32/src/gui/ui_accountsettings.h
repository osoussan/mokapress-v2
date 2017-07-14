/********************************************************************************
** Form generated from reading UI file 'accountsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTSETTINGS_H
#define UI_ACCOUNTSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "sslbutton.h"

namespace OCC {

class Ui_AccountSettings
{
public:
    QGridLayout *gridLayout;
    QWidget *accountStatus;
    QGridLayout *gridLayout_2;
    SslButton *sslButton;
    QLabel *connectLabel;
    QToolButton *_accountToolbox;
    QHBoxLayout *storageGroupBox;
    QLabel *quotaInfoLabel;
    QProgressBar *quotaProgressBar;
    QTreeView *_folderList;
    QWidget *selectiveSyncStatus;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *selectiveSyncLabel;
    QLabel *selectiveSyncNotification;
    QPushButton *selectiveSyncCancel;
    QPushButton *selectiveSyncApply;

    void setupUi(QWidget *OCC__AccountSettings)
    {
        if (OCC__AccountSettings->objectName().isEmpty())
            OCC__AccountSettings->setObjectName(QStringLiteral("OCC__AccountSettings"));
        OCC__AccountSettings->resize(575, 557);
        gridLayout = new QGridLayout(OCC__AccountSettings);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        accountStatus = new QWidget(OCC__AccountSettings);
        accountStatus->setObjectName(QStringLiteral("accountStatus"));
        gridLayout_2 = new QGridLayout(accountStatus);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        sslButton = new SslButton(accountStatus);
        sslButton->setObjectName(QStringLiteral("sslButton"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sslButton->sizePolicy().hasHeightForWidth());
        sslButton->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(sslButton, 0, 0, 1, 1);

        connectLabel = new QLabel(accountStatus);
        connectLabel->setObjectName(QStringLiteral("connectLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(connectLabel->sizePolicy().hasHeightForWidth());
        connectLabel->setSizePolicy(sizePolicy1);
        connectLabel->setWordWrap(true);
        connectLabel->setOpenExternalLinks(true);

        gridLayout_2->addWidget(connectLabel, 0, 1, 1, 1);

        _accountToolbox = new QToolButton(accountStatus);
        _accountToolbox->setObjectName(QStringLiteral("_accountToolbox"));

        gridLayout_2->addWidget(_accountToolbox, 0, 2, 1, 1);


        gridLayout->addWidget(accountStatus, 0, 0, 1, 1);

        storageGroupBox = new QHBoxLayout();
        storageGroupBox->setObjectName(QStringLiteral("storageGroupBox"));
        quotaInfoLabel = new QLabel(OCC__AccountSettings);
        quotaInfoLabel->setObjectName(QStringLiteral("quotaInfoLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(quotaInfoLabel->sizePolicy().hasHeightForWidth());
        quotaInfoLabel->setSizePolicy(sizePolicy2);
        quotaInfoLabel->setWordWrap(false);

        storageGroupBox->addWidget(quotaInfoLabel);

        quotaProgressBar = new QProgressBar(OCC__AccountSettings);
        quotaProgressBar->setObjectName(QStringLiteral("quotaProgressBar"));
        quotaProgressBar->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(quotaProgressBar->sizePolicy().hasHeightForWidth());
        quotaProgressBar->setSizePolicy(sizePolicy3);
        quotaProgressBar->setMaximumSize(QSize(16777215, 7));
        quotaProgressBar->setMaximum(100);
        quotaProgressBar->setValue(-1);
        quotaProgressBar->setTextVisible(false);

        storageGroupBox->addWidget(quotaProgressBar);


        gridLayout->addLayout(storageGroupBox, 1, 0, 1, 1);

        _folderList = new QTreeView(OCC__AccountSettings);
        _folderList->setObjectName(QStringLiteral("_folderList"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(5);
        sizePolicy4.setHeightForWidth(_folderList->sizePolicy().hasHeightForWidth());
        _folderList->setSizePolicy(sizePolicy4);
        _folderList->setContextMenuPolicy(Qt::CustomContextMenu);
        _folderList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        _folderList->setAnimated(true);

        gridLayout->addWidget(_folderList, 2, 0, 1, 1);

        selectiveSyncStatus = new QWidget(OCC__AccountSettings);
        selectiveSyncStatus->setObjectName(QStringLiteral("selectiveSyncStatus"));
        horizontalLayout_3 = new QHBoxLayout(selectiveSyncStatus);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        selectiveSyncLabel = new QLabel(selectiveSyncStatus);
        selectiveSyncLabel->setObjectName(QStringLiteral("selectiveSyncLabel"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(selectiveSyncLabel->sizePolicy().hasHeightForWidth());
        selectiveSyncLabel->setSizePolicy(sizePolicy5);
        selectiveSyncLabel->setWordWrap(true);
        selectiveSyncLabel->setOpenExternalLinks(true);

        verticalLayout_3->addWidget(selectiveSyncLabel);

        selectiveSyncNotification = new QLabel(selectiveSyncStatus);
        selectiveSyncNotification->setObjectName(QStringLiteral("selectiveSyncNotification"));
        selectiveSyncNotification->setStyleSheet(QStringLiteral("color: red"));
        selectiveSyncNotification->setWordWrap(true);

        verticalLayout_3->addWidget(selectiveSyncNotification);


        horizontalLayout_3->addLayout(verticalLayout_3);

        selectiveSyncCancel = new QPushButton(selectiveSyncStatus);
        selectiveSyncCancel->setObjectName(QStringLiteral("selectiveSyncCancel"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(selectiveSyncCancel->sizePolicy().hasHeightForWidth());
        selectiveSyncCancel->setSizePolicy(sizePolicy6);

        horizontalLayout_3->addWidget(selectiveSyncCancel);

        selectiveSyncApply = new QPushButton(selectiveSyncStatus);
        selectiveSyncApply->setObjectName(QStringLiteral("selectiveSyncApply"));
        sizePolicy6.setHeightForWidth(selectiveSyncApply->sizePolicy().hasHeightForWidth());
        selectiveSyncApply->setSizePolicy(sizePolicy6);

        horizontalLayout_3->addWidget(selectiveSyncApply);


        gridLayout->addWidget(selectiveSyncStatus, 3, 0, 1, 1);


        retranslateUi(OCC__AccountSettings);

        QMetaObject::connectSlotsByName(OCC__AccountSettings);
    } // setupUi

    void retranslateUi(QWidget *OCC__AccountSettings)
    {
        OCC__AccountSettings->setWindowTitle(QApplication::translate("OCC::AccountSettings", "Form", 0));
        sslButton->setText(QString());
        connectLabel->setText(QApplication::translate("OCC::AccountSettings", "Connected with <server> as <user>", 0));
        _accountToolbox->setText(QApplication::translate("OCC::AccountSettings", "...", 0));
#ifndef QT_NO_TOOLTIP
        quotaInfoLabel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        quotaInfoLabel->setText(QApplication::translate("OCC::AccountSettings", "Storage space: ...", 0));
        selectiveSyncLabel->setText(QApplication::translate("OCC::AccountSettings", "Unchecked folders will be <b>removed</b> from your local file system and will not be synchronized to this computer anymore", 0));
        selectiveSyncNotification->setText(QString());
        selectiveSyncCancel->setText(QApplication::translate("OCC::AccountSettings", "Cancel", 0));
        selectiveSyncApply->setText(QApplication::translate("OCC::AccountSettings", "Apply", 0));
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class AccountSettings: public Ui_AccountSettings {};
} // namespace Ui
} // namespace OCC

#endif // UI_ACCOUNTSETTINGS_H
