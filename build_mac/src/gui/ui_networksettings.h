/********************************************************************************
** Form generated from reading UI file 'networksettings.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWORKSETTINGS_H
#define UI_NETWORKSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace OCC {

class Ui_NetworkSettings
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *proxyGroupBox;
    QGridLayout *gridLayout;
    QRadioButton *noProxyRadioButton;
    QRadioButton *systemProxyRadioButton;
    QRadioButton *manualProxyRadioButton;
    QComboBox *typeComboBox;
    QWidget *manualSettings;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *hostLabel;
    QLineEdit *hostLineEdit;
    QLabel *label;
    QSpinBox *portSpinBox;
    QCheckBox *authRequiredcheckBox;
    QWidget *authWidgets;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *userLineEdit;
    QLineEdit *passwordLineEdit;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *downloadBox;
    QGridLayout *gridLayout_2;
    QRadioButton *downloadLimitRadioButton;
    QRadioButton *noDownloadLimitRadioButton;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *downloadSpinBox;
    QLabel *label_3;
    QRadioButton *autoDownloadLimitRadioButton;
    QGroupBox *uploadBox;
    QGridLayout *gridLayout_4;
    QRadioButton *uploadLimitRadioButton;
    QRadioButton *autoUploadLimitRadioButton;
    QRadioButton *noUploadLimitRadioButton;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *uploadSpinBox;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QButtonGroup *proxyButtonGroup;

    void setupUi(QWidget *OCC__NetworkSettings)
    {
        if (OCC__NetworkSettings->objectName().isEmpty())
            OCC__NetworkSettings->setObjectName(QStringLiteral("OCC__NetworkSettings"));
        OCC__NetworkSettings->resize(542, 396);
        gridLayout_3 = new QGridLayout(OCC__NetworkSettings);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        proxyGroupBox = new QGroupBox(OCC__NetworkSettings);
        proxyGroupBox->setObjectName(QStringLiteral("proxyGroupBox"));
        proxyGroupBox->setEnabled(true);
        gridLayout = new QGridLayout(proxyGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        noProxyRadioButton = new QRadioButton(proxyGroupBox);
        proxyButtonGroup = new QButtonGroup(OCC__NetworkSettings);
        proxyButtonGroup->setObjectName(QStringLiteral("proxyButtonGroup"));
        proxyButtonGroup->addButton(noProxyRadioButton);
        noProxyRadioButton->setObjectName(QStringLiteral("noProxyRadioButton"));
        noProxyRadioButton->setChecked(true);

        gridLayout->addWidget(noProxyRadioButton, 0, 0, 1, 1);

        systemProxyRadioButton = new QRadioButton(proxyGroupBox);
        proxyButtonGroup->addButton(systemProxyRadioButton);
        systemProxyRadioButton->setObjectName(QStringLiteral("systemProxyRadioButton"));

        gridLayout->addWidget(systemProxyRadioButton, 1, 0, 1, 1);

        manualProxyRadioButton = new QRadioButton(proxyGroupBox);
        proxyButtonGroup->addButton(manualProxyRadioButton);
        manualProxyRadioButton->setObjectName(QStringLiteral("manualProxyRadioButton"));

        gridLayout->addWidget(manualProxyRadioButton, 2, 0, 1, 1);

        typeComboBox = new QComboBox(proxyGroupBox);
        typeComboBox->setObjectName(QStringLiteral("typeComboBox"));
        typeComboBox->setEnabled(false);

        gridLayout->addWidget(typeComboBox, 2, 1, 1, 1);

        manualSettings = new QWidget(proxyGroupBox);
        manualSettings->setObjectName(QStringLiteral("manualSettings"));
        manualSettings->setEnabled(false);
        verticalLayout = new QVBoxLayout(manualSettings);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, 0, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        hostLabel = new QLabel(manualSettings);
        hostLabel->setObjectName(QStringLiteral("hostLabel"));

        horizontalLayout->addWidget(hostLabel);

        hostLineEdit = new QLineEdit(manualSettings);
        hostLineEdit->setObjectName(QStringLiteral("hostLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(hostLineEdit->sizePolicy().hasHeightForWidth());
        hostLineEdit->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(hostLineEdit);

        label = new QLabel(manualSettings);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        portSpinBox = new QSpinBox(manualSettings);
        portSpinBox->setObjectName(QStringLiteral("portSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(portSpinBox->sizePolicy().hasHeightForWidth());
        portSpinBox->setSizePolicy(sizePolicy1);
        portSpinBox->setMinimum(1);
        portSpinBox->setMaximum(65535);
        portSpinBox->setValue(8080);

        horizontalLayout->addWidget(portSpinBox);


        verticalLayout->addLayout(horizontalLayout);

        authRequiredcheckBox = new QCheckBox(manualSettings);
        authRequiredcheckBox->setObjectName(QStringLiteral("authRequiredcheckBox"));
        authRequiredcheckBox->setEnabled(false);

        verticalLayout->addWidget(authRequiredcheckBox);

        authWidgets = new QWidget(manualSettings);
        authWidgets->setObjectName(QStringLiteral("authWidgets"));
        authWidgets->setEnabled(false);
        horizontalLayout_2 = new QHBoxLayout(authWidgets);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        userLineEdit = new QLineEdit(authWidgets);
        userLineEdit->setObjectName(QStringLiteral("userLineEdit"));

        horizontalLayout_2->addWidget(userLineEdit);

        passwordLineEdit = new QLineEdit(authWidgets);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(passwordLineEdit);


        verticalLayout->addWidget(authWidgets);


        gridLayout->addWidget(manualSettings, 3, 0, 1, 2);


        gridLayout_3->addWidget(proxyGroupBox, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        downloadBox = new QGroupBox(OCC__NetworkSettings);
        downloadBox->setObjectName(QStringLiteral("downloadBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(downloadBox->sizePolicy().hasHeightForWidth());
        downloadBox->setSizePolicy(sizePolicy2);
        gridLayout_2 = new QGridLayout(downloadBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        downloadLimitRadioButton = new QRadioButton(downloadBox);
        downloadLimitRadioButton->setObjectName(QStringLiteral("downloadLimitRadioButton"));

        gridLayout_2->addWidget(downloadLimitRadioButton, 3, 0, 1, 1);

        noDownloadLimitRadioButton = new QRadioButton(downloadBox);
        noDownloadLimitRadioButton->setObjectName(QStringLiteral("noDownloadLimitRadioButton"));
        noDownloadLimitRadioButton->setChecked(true);

        gridLayout_2->addWidget(noDownloadLimitRadioButton, 0, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(147, 25, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 4, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        downloadSpinBox = new QSpinBox(downloadBox);
        downloadSpinBox->setObjectName(QStringLiteral("downloadSpinBox"));
        downloadSpinBox->setEnabled(false);
        downloadSpinBox->setMaximum(9999);
        downloadSpinBox->setValue(80);

        horizontalLayout_3->addWidget(downloadSpinBox);

        label_3 = new QLabel(downloadBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);


        gridLayout_2->addLayout(horizontalLayout_3, 3, 1, 1, 1);

        autoDownloadLimitRadioButton = new QRadioButton(downloadBox);
        autoDownloadLimitRadioButton->setObjectName(QStringLiteral("autoDownloadLimitRadioButton"));

        gridLayout_2->addWidget(autoDownloadLimitRadioButton, 1, 0, 1, 2);


        horizontalLayout_5->addWidget(downloadBox);

        uploadBox = new QGroupBox(OCC__NetworkSettings);
        uploadBox->setObjectName(QStringLiteral("uploadBox"));
        sizePolicy2.setHeightForWidth(uploadBox->sizePolicy().hasHeightForWidth());
        uploadBox->setSizePolicy(sizePolicy2);
        gridLayout_4 = new QGridLayout(uploadBox);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        uploadLimitRadioButton = new QRadioButton(uploadBox);
        uploadLimitRadioButton->setObjectName(QStringLiteral("uploadLimitRadioButton"));

        gridLayout_4->addWidget(uploadLimitRadioButton, 2, 0, 1, 1);

        autoUploadLimitRadioButton = new QRadioButton(uploadBox);
        autoUploadLimitRadioButton->setObjectName(QStringLiteral("autoUploadLimitRadioButton"));

        gridLayout_4->addWidget(autoUploadLimitRadioButton, 1, 0, 1, 2);

        noUploadLimitRadioButton = new QRadioButton(uploadBox);
        noUploadLimitRadioButton->setObjectName(QStringLiteral("noUploadLimitRadioButton"));
        noUploadLimitRadioButton->setChecked(true);

        gridLayout_4->addWidget(noUploadLimitRadioButton, 0, 0, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        uploadSpinBox = new QSpinBox(uploadBox);
        uploadSpinBox->setObjectName(QStringLiteral("uploadSpinBox"));
        uploadSpinBox->setEnabled(false);
        uploadSpinBox->setMinimum(1);
        uploadSpinBox->setMaximum(9999);
        uploadSpinBox->setValue(10);

        horizontalLayout_4->addWidget(uploadSpinBox);

        label_4 = new QLabel(uploadBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);


        gridLayout_4->addLayout(horizontalLayout_4, 2, 1, 1, 1);

        autoUploadLimitRadioButton->raise();
        uploadLimitRadioButton->raise();
        noUploadLimitRadioButton->raise();

        horizontalLayout_5->addWidget(uploadBox);


        gridLayout_3->addLayout(horizontalLayout_5, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 2, 0, 1, 1);


        retranslateUi(OCC__NetworkSettings);
        QObject::connect(downloadLimitRadioButton, SIGNAL(toggled(bool)), downloadSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(uploadLimitRadioButton, SIGNAL(toggled(bool)), uploadSpinBox, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(OCC__NetworkSettings);
    } // setupUi

    void retranslateUi(QWidget *OCC__NetworkSettings)
    {
        OCC__NetworkSettings->setWindowTitle(QApplication::translate("OCC::NetworkSettings", "Form", 0));
        proxyGroupBox->setTitle(QApplication::translate("OCC::NetworkSettings", "Proxy Settings", 0));
        noProxyRadioButton->setText(QApplication::translate("OCC::NetworkSettings", "No Proxy", 0));
        systemProxyRadioButton->setText(QApplication::translate("OCC::NetworkSettings", "Use system proxy", 0));
        manualProxyRadioButton->setText(QApplication::translate("OCC::NetworkSettings", "Specify proxy manually as", 0));
        hostLabel->setText(QApplication::translate("OCC::NetworkSettings", "Host", 0));
        hostLineEdit->setText(QString());
        label->setText(QApplication::translate("OCC::NetworkSettings", ":", 0));
        authRequiredcheckBox->setText(QApplication::translate("OCC::NetworkSettings", "Proxy server requires authentication", 0));
        userLineEdit->setText(QString());
        passwordLineEdit->setText(QString());
        downloadBox->setTitle(QApplication::translate("OCC::NetworkSettings", "Download Bandwidth", 0));
        downloadLimitRadioButton->setText(QApplication::translate("OCC::NetworkSettings", "Limit to", 0));
        noDownloadLimitRadioButton->setText(QApplication::translate("OCC::NetworkSettings", "No limit", 0));
        label_3->setText(QApplication::translate("OCC::NetworkSettings", "KBytes/s", 0));
#ifndef QT_NO_TOOLTIP
        autoDownloadLimitRadioButton->setToolTip(QApplication::translate("OCC::NetworkSettings", "Limit to 3/4 of estimated bandwidth", 0));
#endif // QT_NO_TOOLTIP
        autoDownloadLimitRadioButton->setText(QApplication::translate("OCC::NetworkSettings", "Limit automatically", 0));
        uploadBox->setTitle(QApplication::translate("OCC::NetworkSettings", "Upload Bandwidth", 0));
        uploadLimitRadioButton->setText(QApplication::translate("OCC::NetworkSettings", "Limit to", 0));
#ifndef QT_NO_TOOLTIP
        autoUploadLimitRadioButton->setToolTip(QApplication::translate("OCC::NetworkSettings", "Limit to 3/4 of estimated bandwidth", 0));
#endif // QT_NO_TOOLTIP
        autoUploadLimitRadioButton->setText(QApplication::translate("OCC::NetworkSettings", "Limit automatically", 0));
        noUploadLimitRadioButton->setText(QApplication::translate("OCC::NetworkSettings", "No limit", 0));
        label_4->setText(QApplication::translate("OCC::NetworkSettings", "KBytes/s", 0));
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class NetworkSettings: public Ui_NetworkSettings {};
} // namespace Ui
} // namespace OCC

#endif // UI_NETWORKSETTINGS_H
