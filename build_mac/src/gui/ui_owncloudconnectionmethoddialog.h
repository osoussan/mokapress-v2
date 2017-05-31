/********************************************************************************
** Form generated from reading UI file 'owncloudconnectionmethoddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OWNCLOUDCONNECTIONMETHODDIALOG_H
#define UI_OWNCLOUDCONNECTIONMETHODDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

namespace OCC {

class Ui_OwncloudConnectionMethodDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QPushButton *btnBack;
    QPushButton *btnNoTLS;
    QPushButton *btnClientSideTLS;

    void setupUi(QDialog *OCC__OwncloudConnectionMethodDialog)
    {
        if (OCC__OwncloudConnectionMethodDialog->objectName().isEmpty())
            OCC__OwncloudConnectionMethodDialog->setObjectName(QStringLiteral("OCC__OwncloudConnectionMethodDialog"));
        OCC__OwncloudConnectionMethodDialog->resize(367, 208);
        OCC__OwncloudConnectionMethodDialog->setModal(true);
        gridLayout_2 = new QGridLayout(OCC__OwncloudConnectionMethodDialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, 9);
        label = new QLabel(OCC__OwncloudConnectionMethodDialog);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btnBack = new QPushButton(OCC__OwncloudConnectionMethodDialog);
        btnBack->setObjectName(QStringLiteral("btnBack"));

        verticalLayout->addWidget(btnBack);

        btnNoTLS = new QPushButton(OCC__OwncloudConnectionMethodDialog);
        btnNoTLS->setObjectName(QStringLiteral("btnNoTLS"));

        verticalLayout->addWidget(btnNoTLS);

        btnClientSideTLS = new QPushButton(OCC__OwncloudConnectionMethodDialog);
        btnClientSideTLS->setObjectName(QStringLiteral("btnClientSideTLS"));

        verticalLayout->addWidget(btnClientSideTLS);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(OCC__OwncloudConnectionMethodDialog);

        QMetaObject::connectSlotsByName(OCC__OwncloudConnectionMethodDialog);
    } // setupUi

    void retranslateUi(QDialog *OCC__OwncloudConnectionMethodDialog)
    {
        OCC__OwncloudConnectionMethodDialog->setWindowTitle(QApplication::translate("OCC::OwncloudConnectionMethodDialog", "Connection failed", 0));
        label->setText(QApplication::translate("OCC::OwncloudConnectionMethodDialog", "<html><head/><body><p>Failed to connect to the secure server address specified. How do you wish to proceed?</p></body></html>", 0));
        btnBack->setText(QApplication::translate("OCC::OwncloudConnectionMethodDialog", "Select a different URL", 0));
        btnNoTLS->setText(QApplication::translate("OCC::OwncloudConnectionMethodDialog", "Retry unencrypted over HTTP (insecure)", 0));
        btnClientSideTLS->setText(QApplication::translate("OCC::OwncloudConnectionMethodDialog", "Configure client-side TLS certificate", 0));
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class OwncloudConnectionMethodDialog: public Ui_OwncloudConnectionMethodDialog {};
} // namespace Ui
} // namespace OCC

#endif // UI_OWNCLOUDCONNECTIONMETHODDIALOG_H
