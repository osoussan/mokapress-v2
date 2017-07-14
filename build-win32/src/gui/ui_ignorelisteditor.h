/********************************************************************************
** Form generated from reading UI file 'ignorelisteditor.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IGNORELISTEDITOR_H
#define UI_IGNORELISTEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

namespace OCC {

class Ui_IgnoreListEditor
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QCheckBox *syncHiddenFilesCheckBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QPushButton *removePushButton;
    QPushButton *addPushButton;
    QTableWidget *tableWidget;
    QSpacerItem *verticalSpacer;
    QLabel *descriptionLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OCC__IgnoreListEditor)
    {
        if (OCC__IgnoreListEditor->objectName().isEmpty())
            OCC__IgnoreListEditor->setObjectName(QStringLiteral("OCC__IgnoreListEditor"));
        OCC__IgnoreListEditor->resize(438, 463);
        gridLayout_3 = new QGridLayout(OCC__IgnoreListEditor);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox = new QGroupBox(OCC__IgnoreListEditor);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        syncHiddenFilesCheckBox = new QCheckBox(groupBox);
        syncHiddenFilesCheckBox->setObjectName(QStringLiteral("syncHiddenFilesCheckBox"));

        gridLayout_2->addWidget(syncHiddenFilesCheckBox, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(OCC__IgnoreListEditor);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        removePushButton = new QPushButton(groupBox_2);
        removePushButton->setObjectName(QStringLiteral("removePushButton"));
        removePushButton->setEnabled(true);

        gridLayout->addWidget(removePushButton, 1, 1, 1, 1);

        addPushButton = new QPushButton(groupBox_2);
        addPushButton->setObjectName(QStringLiteral("addPushButton"));
        addPushButton->setEnabled(true);

        gridLayout->addWidget(addPushButton, 0, 1, 1, 1);

        tableWidget = new QTableWidget(groupBox_2);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setEnabled(true);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setColumnCount(2);

        gridLayout->addWidget(tableWidget, 0, 0, 3, 1);

        verticalSpacer = new QSpacerItem(20, 213, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        descriptionLabel = new QLabel(groupBox_2);
        descriptionLabel->setObjectName(QStringLiteral("descriptionLabel"));
        descriptionLabel->setEnabled(true);
        descriptionLabel->setWordWrap(true);

        gridLayout->addWidget(descriptionLabel, 3, 0, 1, 2);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(OCC__IgnoreListEditor);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_3->addWidget(buttonBox, 4, 0, 1, 1);


        retranslateUi(OCC__IgnoreListEditor);
        QObject::connect(buttonBox, SIGNAL(accepted()), OCC__IgnoreListEditor, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), OCC__IgnoreListEditor, SLOT(reject()));

        QMetaObject::connectSlotsByName(OCC__IgnoreListEditor);
    } // setupUi

    void retranslateUi(QDialog *OCC__IgnoreListEditor)
    {
        OCC__IgnoreListEditor->setWindowTitle(QApplication::translate("OCC::IgnoreListEditor", "Ignored Files Editor", 0));
        groupBox->setTitle(QApplication::translate("OCC::IgnoreListEditor", "Global Ignore Settings", 0));
        syncHiddenFilesCheckBox->setText(QApplication::translate("OCC::IgnoreListEditor", "Sync hidden files", 0));
        groupBox_2->setTitle(QApplication::translate("OCC::IgnoreListEditor", "Files Ignored by Patterns", 0));
        removePushButton->setText(QApplication::translate("OCC::IgnoreListEditor", "Remove", 0));
        addPushButton->setText(QApplication::translate("OCC::IgnoreListEditor", "Add", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("OCC::IgnoreListEditor", "Pattern", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("OCC::IgnoreListEditor", "Allow Deletion", 0));
        descriptionLabel->setText(QString());
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class IgnoreListEditor: public Ui_IgnoreListEditor {};
} // namespace Ui
} // namespace OCC

#endif // UI_IGNORELISTEDITOR_H
