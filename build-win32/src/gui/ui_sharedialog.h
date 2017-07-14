/********************************************************************************
** Form generated from reading UI file 'sharedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHAREDIALOG_H
#define UI_SHAREDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

namespace OCC {

class Ui_ShareDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_name;
    QLabel *label_sharePath;
    QLabel *label_icon;
    QVBoxLayout *shareWidgetsLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OCC__ShareDialog)
    {
        if (OCC__ShareDialog->objectName().isEmpty())
            OCC__ShareDialog->setObjectName(QStringLiteral("OCC__ShareDialog"));
        OCC__ShareDialog->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(OCC__ShareDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_name = new QLabel(OCC__ShareDialog);
        label_name->setObjectName(QStringLiteral("label_name"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_name->sizePolicy().hasHeightForWidth());
        label_name->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_name, 0, 1, 1, 1);

        label_sharePath = new QLabel(OCC__ShareDialog);
        label_sharePath->setObjectName(QStringLiteral("label_sharePath"));
        sizePolicy.setHeightForWidth(label_sharePath->sizePolicy().hasHeightForWidth());
        label_sharePath->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        label_sharePath->setFont(font);

        gridLayout->addWidget(label_sharePath, 1, 1, 1, 1);

        label_icon = new QLabel(OCC__ShareDialog);
        label_icon->setObjectName(QStringLiteral("label_icon"));

        gridLayout->addWidget(label_icon, 0, 0, 2, 1);


        verticalLayout_2->addLayout(gridLayout);

        shareWidgetsLayout = new QVBoxLayout();
        shareWidgetsLayout->setObjectName(QStringLiteral("shareWidgetsLayout"));

        verticalLayout_2->addLayout(shareWidgetsLayout);

        buttonBox = new QDialogButtonBox(OCC__ShareDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(OCC__ShareDialog);

        QMetaObject::connectSlotsByName(OCC__ShareDialog);
    } // setupUi

    void retranslateUi(QDialog *OCC__ShareDialog)
    {
        OCC__ShareDialog->setWindowTitle(QApplication::translate("OCC::ShareDialog", "Dialog", 0));
        label_name->setText(QApplication::translate("OCC::ShareDialog", "share label", 0));
        label_sharePath->setText(QApplication::translate("OCC::ShareDialog", "ownCloud Path:", 0));
        label_icon->setText(QApplication::translate("OCC::ShareDialog", "TextLabel", 0));
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class ShareDialog: public Ui_ShareDialog {};
} // namespace Ui
} // namespace OCC

#endif // UI_SHAREDIALOG_H
