/********************************************************************************
** Form generated from reading UI file 'createweb.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEWEB_H
#define UI_CREATEWEB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace OCC {

class Ui_CreateWeb
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OCC__CreateWeb)
    {
        if (OCC__CreateWeb->objectName().isEmpty())
            OCC__CreateWeb->setObjectName(QStringLiteral("OCC__CreateWeb"));
        OCC__CreateWeb->resize(461, 115);
        verticalLayoutWidget = new QWidget(OCC__CreateWeb);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 10, 421, 91));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        buttonBox = new QDialogButtonBox(verticalLayoutWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(OCC__CreateWeb);
        QObject::connect(buttonBox, SIGNAL(accepted()), OCC__CreateWeb, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OCC__CreateWeb, SLOT(reject()));

        QMetaObject::connectSlotsByName(OCC__CreateWeb);
    } // setupUi

    void retranslateUi(QDialog *OCC__CreateWeb)
    {
        OCC__CreateWeb->setWindowTitle(QApplication::translate("OCC::CreateWeb", "Creer une page web", 0));
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class CreateWeb: public Ui_CreateWeb {};
} // namespace Ui
} // namespace OCC

#endif // UI_CREATEWEB_H
