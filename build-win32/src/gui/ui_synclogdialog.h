/********************************************************************************
** Form generated from reading UI file 'synclogdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYNCLOGDIALOG_H
#define UI_SYNCLOGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>

namespace OCC {

class Ui_SyncLogDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *logWidgetLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OCC__SyncLogDialog)
    {
        if (OCC__SyncLogDialog->objectName().isEmpty())
            OCC__SyncLogDialog->setObjectName(QStringLiteral("OCC__SyncLogDialog"));
        OCC__SyncLogDialog->resize(372, 247);
        gridLayout = new QGridLayout(OCC__SyncLogDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        logWidgetLayout = new QVBoxLayout();
        logWidgetLayout->setSpacing(6);
        logWidgetLayout->setObjectName(QStringLiteral("logWidgetLayout"));

        gridLayout->addLayout(logWidgetLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(OCC__SyncLogDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(OCC__SyncLogDialog);

        QMetaObject::connectSlotsByName(OCC__SyncLogDialog);
    } // setupUi

    void retranslateUi(QDialog *OCC__SyncLogDialog)
    {
        OCC__SyncLogDialog->setWindowTitle(QApplication::translate("OCC::SyncLogDialog", "Synchronisation Log", 0));
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class SyncLogDialog: public Ui_SyncLogDialog {};
} // namespace Ui
} // namespace OCC

#endif // UI_SYNCLOGDIALOG_H
