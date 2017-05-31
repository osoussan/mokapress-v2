/********************************************************************************
** Form generated from reading UI file 'infodirdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFODIRDIALOG_H
#define UI_INFODIRDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace OCC {

class Ui_InfoDirDialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *TitleLineEdit;
    QLabel *descrLabel_2;
    QTextEdit *descrTextEdit;
    QLabel *label_3;
    QLineEdit *keywordLineEdit_2;
    QLabel *label_4;
    QComboBox *selectComboBox;
    QDialogButtonBox *buttonBox2;

    void setupUi(QDialog *OCC__InfoDirDialog)
    {
        if (OCC__InfoDirDialog->objectName().isEmpty())
            OCC__InfoDirDialog->setObjectName(QStringLiteral("OCC__InfoDirDialog"));
        OCC__InfoDirDialog->resize(400, 300);
        verticalLayoutWidget = new QWidget(OCC__InfoDirDialog);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 9, 381, 281));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        TitleLineEdit = new QLineEdit(verticalLayoutWidget);
        TitleLineEdit->setObjectName(QStringLiteral("TitleLineEdit"));

        verticalLayout->addWidget(TitleLineEdit);

        descrLabel_2 = new QLabel(verticalLayoutWidget);
        descrLabel_2->setObjectName(QStringLiteral("descrLabel_2"));

        verticalLayout->addWidget(descrLabel_2);

        descrTextEdit = new QTextEdit(verticalLayoutWidget);
        descrTextEdit->setObjectName(QStringLiteral("descrTextEdit"));

        verticalLayout->addWidget(descrTextEdit);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        keywordLineEdit_2 = new QLineEdit(verticalLayoutWidget);
        keywordLineEdit_2->setObjectName(QStringLiteral("keywordLineEdit_2"));

        verticalLayout->addWidget(keywordLineEdit_2);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        selectComboBox = new QComboBox(verticalLayoutWidget);
        selectComboBox->setObjectName(QStringLiteral("selectComboBox"));

        verticalLayout->addWidget(selectComboBox);

        buttonBox2 = new QDialogButtonBox(verticalLayoutWidget);
        buttonBox2->setObjectName(QStringLiteral("buttonBox2"));
        buttonBox2->setOrientation(Qt::Horizontal);
        buttonBox2->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox2);


        retranslateUi(OCC__InfoDirDialog);
        QObject::connect(buttonBox2, SIGNAL(accepted()), OCC__InfoDirDialog, SLOT(accept()));
        QObject::connect(buttonBox2, SIGNAL(rejected()), OCC__InfoDirDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(OCC__InfoDirDialog);
    } // setupUi

    void retranslateUi(QDialog *OCC__InfoDirDialog)
    {
        OCC__InfoDirDialog->setWindowTitle(QApplication::translate("OCC::InfoDirDialog", "Informations Mokapress", 0));
        label->setText(QApplication::translate("OCC::InfoDirDialog", "Title", 0));
        descrLabel_2->setText(QApplication::translate("OCC::InfoDirDialog", "Description", 0));
        label_3->setText(QApplication::translate("OCC::InfoDirDialog", "Keyword", 0));
        label_4->setText(QApplication::translate("OCC::InfoDirDialog", "Select", 0));
        selectComboBox->clear();
        selectComboBox->insertItems(0, QStringList()
         << QApplication::translate("OCC::InfoDirDialog", "diaporama", 0)
         << QApplication::translate("OCC::InfoDirDialog", "slide", 0)
        );
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class InfoDirDialog: public Ui_InfoDirDialog {};
} // namespace Ui
} // namespace OCC

#endif // UI_INFODIRDIALOG_H
