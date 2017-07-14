/********************************************************************************
** Form generated from reading UI file 'languagesettings.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LANGUAGESETTINGS_H
#define UI_LANGUAGESETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

namespace OCC {

class Ui_LanguageSettings
{
public:
    QGridLayout *gridLayout_3;
    QComboBox *comboBox;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox_1;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidget;
    QLabel *label;

    void setupUi(QDialog *OCC__LanguageSettings)
    {
        if (OCC__LanguageSettings->objectName().isEmpty())
            OCC__LanguageSettings->setObjectName(QStringLiteral("OCC__LanguageSettings"));
        OCC__LanguageSettings->resize(438, 463);
        gridLayout_3 = new QGridLayout(OCC__LanguageSettings);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        comboBox = new QComboBox(OCC__LanguageSettings);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout_3->addWidget(comboBox, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(OCC__LanguageSettings);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_3->addWidget(buttonBox, 3, 0, 2, 1);

        groupBox_1 = new QGroupBox(OCC__LanguageSettings);
        groupBox_1->setObjectName(QStringLiteral("groupBox_1"));
        gridLayout = new QGridLayout(groupBox_1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tableWidget = new QTableWidget(groupBox_1);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout_2->addWidget(tableWidget, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 2);


        gridLayout_3->addWidget(groupBox_1, 0, 0, 1, 1);

        label = new QLabel(OCC__LanguageSettings);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 1, 0, 1, 1);


        retranslateUi(OCC__LanguageSettings);
        QObject::connect(buttonBox, SIGNAL(accepted()), OCC__LanguageSettings, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OCC__LanguageSettings, SLOT(reject()));

        QMetaObject::connectSlotsByName(OCC__LanguageSettings);
    } // setupUi

    void retranslateUi(QDialog *OCC__LanguageSettings)
    {
        OCC__LanguageSettings->setWindowTitle(QApplication::translate("OCC::LanguageSettings", "Language Settings", 0));
        comboBox->setCurrentText(QString());
        groupBox_1->setTitle(QApplication::translate("OCC::LanguageSettings", "Language settings", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("OCC::LanguageSettings", "Language", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("OCC::LanguageSettings", "Activate", 0));
        label->setText(QApplication::translate("OCC::LanguageSettings", "Default", 0));
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class LanguageSettings: public Ui_LanguageSettings {};
} // namespace Ui
} // namespace OCC

#endif // UI_LANGUAGESETTINGS_H
