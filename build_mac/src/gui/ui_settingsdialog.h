/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace OCC {

class Ui_SettingsDialog
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QDialogButtonBox *buttonBox;
    QStackedWidget *stack;

    void setupUi(QDialog *OCC__SettingsDialog)
    {
        if (OCC__SettingsDialog->objectName().isEmpty())
            OCC__SettingsDialog->setObjectName(QStringLiteral("OCC__SettingsDialog"));
        OCC__SettingsDialog->resize(693, 457);
        gridLayout = new QGridLayout(OCC__SettingsDialog);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(OCC__SettingsDialog);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, -1, -1);
        buttonBox = new QDialogButtonBox(widget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        gridLayout->addWidget(widget, 1, 0, 1, 1);

        stack = new QStackedWidget(OCC__SettingsDialog);
        stack->setObjectName(QStringLiteral("stack"));

        gridLayout->addWidget(stack, 0, 0, 1, 1);


        retranslateUi(OCC__SettingsDialog);

        QMetaObject::connectSlotsByName(OCC__SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *OCC__SettingsDialog)
    {
        OCC__SettingsDialog->setWindowTitle(QApplication::translate("OCC::SettingsDialog", "Settings", 0));
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui
} // namespace OCC

#endif // UI_SETTINGSDIALOG_H
