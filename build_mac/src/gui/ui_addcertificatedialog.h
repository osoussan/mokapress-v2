/********************************************************************************
** Form generated from reading UI file 'addcertificatedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCERTIFICATEDIALOG_H
#define UI_ADDCERTIFICATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

namespace OCC {

class Ui_AddCertificateDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelErrorMessage;
    QFormLayout *formLayout;
    QLabel *labelCertificateFile;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditCertificatePath;
    QPushButton *pushButtonBrowseCertificate;
    QLabel *labelPWDCertificate;
    QLineEdit *lineEditPWDCertificate;
    QLabel *labelErrorCertif;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OCC__AddCertificateDialog)
    {
        if (OCC__AddCertificateDialog->objectName().isEmpty())
            OCC__AddCertificateDialog->setObjectName(QStringLiteral("OCC__AddCertificateDialog"));
        OCC__AddCertificateDialog->setWindowModality(Qt::ApplicationModal);
        OCC__AddCertificateDialog->resize(462, 186);
        verticalLayout = new QVBoxLayout(OCC__AddCertificateDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelErrorMessage = new QLabel(OCC__AddCertificateDialog);
        labelErrorMessage->setObjectName(QStringLiteral("labelErrorMessage"));
        labelErrorMessage->setWordWrap(true);

        verticalLayout->addWidget(labelErrorMessage);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        labelCertificateFile = new QLabel(OCC__AddCertificateDialog);
        labelCertificateFile->setObjectName(QStringLiteral("labelCertificateFile"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelCertificateFile);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEditCertificatePath = new QLineEdit(OCC__AddCertificateDialog);
        lineEditCertificatePath->setObjectName(QStringLiteral("lineEditCertificatePath"));

        horizontalLayout->addWidget(lineEditCertificatePath);

        pushButtonBrowseCertificate = new QPushButton(OCC__AddCertificateDialog);
        pushButtonBrowseCertificate->setObjectName(QStringLiteral("pushButtonBrowseCertificate"));

        horizontalLayout->addWidget(pushButtonBrowseCertificate);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout);

        labelPWDCertificate = new QLabel(OCC__AddCertificateDialog);
        labelPWDCertificate->setObjectName(QStringLiteral("labelPWDCertificate"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelPWDCertificate);

        lineEditPWDCertificate = new QLineEdit(OCC__AddCertificateDialog);
        lineEditPWDCertificate->setObjectName(QStringLiteral("lineEditPWDCertificate"));
        lineEditPWDCertificate->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditPWDCertificate);


        verticalLayout->addLayout(formLayout);

        labelErrorCertif = new QLabel(OCC__AddCertificateDialog);
        labelErrorCertif->setObjectName(QStringLiteral("labelErrorCertif"));
        QPalette palette;
        QBrush brush(QColor(231, 23, 12, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush1(QColor(127, 127, 127, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        labelErrorCertif->setPalette(palette);
        labelErrorCertif->setWordWrap(true);

        verticalLayout->addWidget(labelErrorCertif);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(OCC__AddCertificateDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(OCC__AddCertificateDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), OCC__AddCertificateDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OCC__AddCertificateDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(OCC__AddCertificateDialog);
    } // setupUi

    void retranslateUi(QDialog *OCC__AddCertificateDialog)
    {
        OCC__AddCertificateDialog->setWindowTitle(QApplication::translate("OCC::AddCertificateDialog", "SSL client certificate authentication", 0));
        labelErrorMessage->setText(QApplication::translate("OCC::AddCertificateDialog", "This server probably requires a SSL client certificate.", 0));
        labelCertificateFile->setText(QApplication::translate("OCC::AddCertificateDialog", "Certificate :", 0));
        lineEditCertificatePath->setText(QString());
        pushButtonBrowseCertificate->setText(QApplication::translate("OCC::AddCertificateDialog", "Browse...", 0));
        labelPWDCertificate->setText(QApplication::translate("OCC::AddCertificateDialog", "Certificate password :", 0));
        lineEditPWDCertificate->setText(QString());
        labelErrorCertif->setText(QString());
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class AddCertificateDialog: public Ui_AddCertificateDialog {};
} // namespace Ui
} // namespace OCC

#endif // UI_ADDCERTIFICATEDIALOG_H
