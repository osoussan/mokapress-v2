/********************************************************************************
** Form generated from reading UI file 'folderwizardsourcepage.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOLDERWIZARDSOURCEPAGE_H
#define UI_FOLDERWIZARDSOURCEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FolderWizardSourcePage
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *localFolderLineEdit;
    QPushButton *localFolderChooseBtn;
    QLabel *warnLabel;

    void setupUi(QWidget *FolderWizardSourcePage)
    {
        if (FolderWizardSourcePage->objectName().isEmpty())
            FolderWizardSourcePage->setObjectName(QStringLiteral("FolderWizardSourcePage"));
        FolderWizardSourcePage->resize(423, 174);
        gridLayout_2 = new QGridLayout(FolderWizardSourcePage);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalSpacer = new QSpacerItem(349, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 0, 1, 1);

        groupBox = new QGroupBox(FolderWizardSourcePage);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        localFolderLineEdit = new QLineEdit(groupBox);
        localFolderLineEdit->setObjectName(QStringLiteral("localFolderLineEdit"));

        horizontalLayout_2->addWidget(localFolderLineEdit);

        localFolderChooseBtn = new QPushButton(groupBox);
        localFolderChooseBtn->setObjectName(QStringLiteral("localFolderChooseBtn"));

        horizontalLayout_2->addWidget(localFolderChooseBtn);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        warnLabel = new QLabel(FolderWizardSourcePage);
        warnLabel->setObjectName(QStringLiteral("warnLabel"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(255, 255, 192, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        warnLabel->setPalette(palette);
        warnLabel->setAutoFillBackground(true);
        warnLabel->setFrameShape(QFrame::StyledPanel);
        warnLabel->setTextFormat(Qt::AutoText);
        warnLabel->setMargin(3);

        gridLayout_2->addWidget(warnLabel, 1, 0, 1, 1);


        retranslateUi(FolderWizardSourcePage);

        QMetaObject::connectSlotsByName(FolderWizardSourcePage);
    } // setupUi

    void retranslateUi(QWidget *FolderWizardSourcePage)
    {
        FolderWizardSourcePage->setWindowTitle(QApplication::translate("FolderWizardSourcePage", "Form", 0));
        groupBox->setTitle(QApplication::translate("FolderWizardSourcePage", "Pick a local folder on your computer to sync", 0));
        localFolderChooseBtn->setText(QApplication::translate("FolderWizardSourcePage", "&Choose...", 0));
        warnLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FolderWizardSourcePage: public Ui_FolderWizardSourcePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOLDERWIZARDSOURCEPAGE_H
