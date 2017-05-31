/********************************************************************************
** Form generated from reading UI file 'infofiledialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOFILEDIALOG_H
#define UI_INFOFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace OCC {

class Ui_InfoFileDialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QLineEdit *titleLineEdit;
    QLabel *description1Label;
    QTextEdit *descriptionTextEdit;
    QLabel *description2Label;
    QTextEdit *description2TextEdit;
    QLabel *description3Label;
    QTextEdit *description3TextEdit;
    QLabel *label;
    QLineEdit *keywordLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OCC__InfoFileDialog)
    {
        if (OCC__InfoFileDialog->objectName().isEmpty())
            OCC__InfoFileDialog->setObjectName(QStringLiteral("OCC__InfoFileDialog"));
        OCC__InfoFileDialog->resize(401, 482);
        verticalLayoutWidget = new QWidget(OCC__InfoFileDialog);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 381, 461));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        titleLabel = new QLabel(verticalLayoutWidget);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));

        verticalLayout->addWidget(titleLabel);

        titleLineEdit = new QLineEdit(verticalLayoutWidget);
        titleLineEdit->setObjectName(QStringLiteral("titleLineEdit"));

        verticalLayout->addWidget(titleLineEdit);

        description1Label = new QLabel(verticalLayoutWidget);
        description1Label->setObjectName(QStringLiteral("description1Label"));

        verticalLayout->addWidget(description1Label);

        descriptionTextEdit = new QTextEdit(verticalLayoutWidget);
        descriptionTextEdit->setObjectName(QStringLiteral("descriptionTextEdit"));

        verticalLayout->addWidget(descriptionTextEdit);

        description2Label = new QLabel(verticalLayoutWidget);
        description2Label->setObjectName(QStringLiteral("description2Label"));

        verticalLayout->addWidget(description2Label);

        description2TextEdit = new QTextEdit(verticalLayoutWidget);
        description2TextEdit->setObjectName(QStringLiteral("description2TextEdit"));

        verticalLayout->addWidget(description2TextEdit);

        description3Label = new QLabel(verticalLayoutWidget);
        description3Label->setObjectName(QStringLiteral("description3Label"));

        verticalLayout->addWidget(description3Label);

        description3TextEdit = new QTextEdit(verticalLayoutWidget);
        description3TextEdit->setObjectName(QStringLiteral("description3TextEdit"));

        verticalLayout->addWidget(description3TextEdit);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        keywordLineEdit = new QLineEdit(verticalLayoutWidget);
        keywordLineEdit->setObjectName(QStringLiteral("keywordLineEdit"));

        verticalLayout->addWidget(keywordLineEdit);

        buttonBox = new QDialogButtonBox(verticalLayoutWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(OCC__InfoFileDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), OCC__InfoFileDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OCC__InfoFileDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(OCC__InfoFileDialog);
    } // setupUi

    void retranslateUi(QDialog *OCC__InfoFileDialog)
    {
        OCC__InfoFileDialog->setWindowTitle(QApplication::translate("OCC::InfoFileDialog", "Informations Mokapress", 0));
        titleLabel->setText(QApplication::translate("OCC::InfoFileDialog", "Title", 0));
        description1Label->setText(QApplication::translate("OCC::InfoFileDialog", "Description1", 0));
        description2Label->setText(QApplication::translate("OCC::InfoFileDialog", "Description2", 0));
        description3Label->setText(QApplication::translate("OCC::InfoFileDialog", "Description3", 0));
        label->setText(QApplication::translate("OCC::InfoFileDialog", "Keyword", 0));
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class InfoFileDialog: public Ui_InfoFileDialog {};
} // namespace Ui
} // namespace OCC

#endif // UI_INFOFILEDIALOG_H
