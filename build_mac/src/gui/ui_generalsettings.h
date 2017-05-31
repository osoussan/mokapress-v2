/********************************************************************************
** Form generated from reading UI file 'generalsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERALSETTINGS_H
#define UI_GENERALSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace OCC {

class Ui_GeneralSettings
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *generalGroupBox;
    QGridLayout *gridLayout_2;
    QCheckBox *autostartCheckBox;
    QCheckBox *desktopNotificationsCheckBox;
    QCheckBox *monoIconsCheckBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *ignoredFilesButton;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *newFolderLimitCheckBox;
    QSpinBox *newFolderLimitSpinBox;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *crashreporterCheckBox;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *aboutGroupBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *aboutLabel;
    QGroupBox *updatesGroupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *updateStateLabel;
    QPushButton *restartButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *OCC__GeneralSettings)
    {
        if (OCC__GeneralSettings->objectName().isEmpty())
            OCC__GeneralSettings->setObjectName(QStringLiteral("OCC__GeneralSettings"));
        OCC__GeneralSettings->resize(706, 523);
        gridLayout_3 = new QGridLayout(OCC__GeneralSettings);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        generalGroupBox = new QGroupBox(OCC__GeneralSettings);
        generalGroupBox->setObjectName(QStringLiteral("generalGroupBox"));
        gridLayout_2 = new QGridLayout(generalGroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        autostartCheckBox = new QCheckBox(generalGroupBox);
        autostartCheckBox->setObjectName(QStringLiteral("autostartCheckBox"));

        gridLayout_2->addWidget(autostartCheckBox, 0, 0, 1, 1);

        desktopNotificationsCheckBox = new QCheckBox(generalGroupBox);
        desktopNotificationsCheckBox->setObjectName(QStringLiteral("desktopNotificationsCheckBox"));

        gridLayout_2->addWidget(desktopNotificationsCheckBox, 0, 1, 1, 1);

        monoIconsCheckBox = new QCheckBox(generalGroupBox);
        monoIconsCheckBox->setObjectName(QStringLiteral("monoIconsCheckBox"));

        gridLayout_2->addWidget(monoIconsCheckBox, 1, 0, 1, 1);


        gridLayout_3->addWidget(generalGroupBox, 0, 0, 1, 1);

        groupBox = new QGroupBox(OCC__GeneralSettings);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        ignoredFilesButton = new QPushButton(groupBox);
        ignoredFilesButton->setObjectName(QStringLiteral("ignoredFilesButton"));

        gridLayout->addWidget(ignoredFilesButton, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(555, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 1, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        newFolderLimitCheckBox = new QCheckBox(groupBox);
        newFolderLimitCheckBox->setObjectName(QStringLiteral("newFolderLimitCheckBox"));
        newFolderLimitCheckBox->setChecked(true);

        horizontalLayout_3->addWidget(newFolderLimitCheckBox);

        newFolderLimitSpinBox = new QSpinBox(groupBox);
        newFolderLimitSpinBox->setObjectName(QStringLiteral("newFolderLimitSpinBox"));
        newFolderLimitSpinBox->setMaximum(999999);
        newFolderLimitSpinBox->setValue(99);

        horizontalLayout_3->addWidget(newFolderLimitSpinBox);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 3);

        crashreporterCheckBox = new QCheckBox(groupBox);
        crashreporterCheckBox->setObjectName(QStringLiteral("crashreporterCheckBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(crashreporterCheckBox->sizePolicy().hasHeightForWidth());
        crashreporterCheckBox->setSizePolicy(sizePolicy);

        gridLayout->addWidget(crashreporterCheckBox, 2, 0, 1, 2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        gridLayout->addLayout(horizontalLayout_5, 2, 2, 1, 1);


        gridLayout_3->addWidget(groupBox, 1, 0, 1, 1);

        aboutGroupBox = new QGroupBox(OCC__GeneralSettings);
        aboutGroupBox->setObjectName(QStringLiteral("aboutGroupBox"));
        verticalLayout_3 = new QVBoxLayout(aboutGroupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        aboutLabel = new QLabel(aboutGroupBox);
        aboutLabel->setObjectName(QStringLiteral("aboutLabel"));

        verticalLayout_3->addWidget(aboutLabel);


        gridLayout_3->addWidget(aboutGroupBox, 2, 0, 1, 1);

        updatesGroupBox = new QGroupBox(OCC__GeneralSettings);
        updatesGroupBox->setObjectName(QStringLiteral("updatesGroupBox"));
        horizontalLayout = new QHBoxLayout(updatesGroupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        updateStateLabel = new QLabel(updatesGroupBox);
        updateStateLabel->setObjectName(QStringLiteral("updateStateLabel"));
        updateStateLabel->setWordWrap(true);
        updateStateLabel->setOpenExternalLinks(true);

        horizontalLayout->addWidget(updateStateLabel);

        restartButton = new QPushButton(updatesGroupBox);
        restartButton->setObjectName(QStringLiteral("restartButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(restartButton->sizePolicy().hasHeightForWidth());
        restartButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(restartButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_3->addWidget(updatesGroupBox, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 4, 0, 1, 1);

        QWidget::setTabOrder(autostartCheckBox, desktopNotificationsCheckBox);
        QWidget::setTabOrder(desktopNotificationsCheckBox, monoIconsCheckBox);
        QWidget::setTabOrder(monoIconsCheckBox, ignoredFilesButton);
        QWidget::setTabOrder(ignoredFilesButton, newFolderLimitCheckBox);
        QWidget::setTabOrder(newFolderLimitCheckBox, newFolderLimitSpinBox);
        QWidget::setTabOrder(newFolderLimitSpinBox, crashreporterCheckBox);
        QWidget::setTabOrder(crashreporterCheckBox, restartButton);

        retranslateUi(OCC__GeneralSettings);
        QObject::connect(newFolderLimitCheckBox, SIGNAL(toggled(bool)), newFolderLimitSpinBox, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(OCC__GeneralSettings);
    } // setupUi

    void retranslateUi(QWidget *OCC__GeneralSettings)
    {
        OCC__GeneralSettings->setWindowTitle(QApplication::translate("OCC::GeneralSettings", "Form", 0));
        generalGroupBox->setTitle(QApplication::translate("OCC::GeneralSettings", "General Settings", 0));
        autostartCheckBox->setText(QApplication::translate("OCC::GeneralSettings", "&Launch on System Startup", 0));
        desktopNotificationsCheckBox->setText(QApplication::translate("OCC::GeneralSettings", "Show &Desktop Notifications", 0));
#ifndef QT_NO_TOOLTIP
        monoIconsCheckBox->setToolTip(QApplication::translate("OCC::GeneralSettings", "For System Tray", 0));
#endif // QT_NO_TOOLTIP
        monoIconsCheckBox->setText(QApplication::translate("OCC::GeneralSettings", "Use &Monochrome Icons", 0));
        groupBox->setTitle(QApplication::translate("OCC::GeneralSettings", "Advanced", 0));
        ignoredFilesButton->setText(QApplication::translate("OCC::GeneralSettings", "Edit &Ignored Files", 0));
        newFolderLimitCheckBox->setText(QApplication::translate("OCC::GeneralSettings", "Ask &confirmation before downloading folders larger than", 0));
        label->setText(QApplication::translate("OCC::GeneralSettings", "MB", 0));
        crashreporterCheckBox->setText(QApplication::translate("OCC::GeneralSettings", "S&how crash reporter", 0));
        aboutGroupBox->setTitle(QApplication::translate("OCC::GeneralSettings", "About", 0));
        aboutLabel->setText(QApplication::translate("OCC::GeneralSettings", "About", 0));
        updatesGroupBox->setTitle(QApplication::translate("OCC::GeneralSettings", "Updates", 0));
        updateStateLabel->setText(QString());
        restartButton->setText(QApplication::translate("OCC::GeneralSettings", "&Restart && Update", 0));
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class GeneralSettings: public Ui_GeneralSettings {};
} // namespace Ui
} // namespace OCC

#endif // UI_GENERALSETTINGS_H
