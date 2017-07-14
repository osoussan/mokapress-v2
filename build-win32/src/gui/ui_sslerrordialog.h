/********************************************************************************
** Form generated from reading UI file 'sslerrordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SSLERRORDIALOG_H
#define UI_SSLERRORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

namespace OCC {

class Ui_SslErrorDialog
{
public:
    QGridLayout *gridLayout;
    QCheckBox *_cbTrustConnect;
    QDialogButtonBox *_dialogButtonBox;
    QTextBrowser *_tbErrors;

    void setupUi(QWidget *OCC__SslErrorDialog)
    {
        if (OCC__SslErrorDialog->objectName().isEmpty())
            OCC__SslErrorDialog->setObjectName(QStringLiteral("OCC__SslErrorDialog"));
        OCC__SslErrorDialog->resize(640, 560);
        gridLayout = new QGridLayout(OCC__SslErrorDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        _cbTrustConnect = new QCheckBox(OCC__SslErrorDialog);
        _cbTrustConnect->setObjectName(QStringLiteral("_cbTrustConnect"));
        QFont font;
        font.setPointSize(11);
        _cbTrustConnect->setFont(font);

        gridLayout->addWidget(_cbTrustConnect, 1, 0, 1, 1);

        _dialogButtonBox = new QDialogButtonBox(OCC__SslErrorDialog);
        _dialogButtonBox->setObjectName(QStringLiteral("_dialogButtonBox"));
        _dialogButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(_dialogButtonBox, 2, 0, 1, 1);

        _tbErrors = new QTextBrowser(OCC__SslErrorDialog);
        _tbErrors->setObjectName(QStringLiteral("_tbErrors"));
        _tbErrors->setOpenExternalLinks(true);

        gridLayout->addWidget(_tbErrors, 0, 0, 1, 1);


        retranslateUi(OCC__SslErrorDialog);

        QMetaObject::connectSlotsByName(OCC__SslErrorDialog);
    } // setupUi

    void retranslateUi(QWidget *OCC__SslErrorDialog)
    {
        OCC__SslErrorDialog->setWindowTitle(QApplication::translate("OCC::SslErrorDialog", "Form", 0));
        _cbTrustConnect->setText(QApplication::translate("OCC::SslErrorDialog", "Trust this certificate anyway", 0));
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class SslErrorDialog: public Ui_SslErrorDialog {};
} // namespace Ui
} // namespace OCC

#endif // UI_SSLERRORDIALOG_H
