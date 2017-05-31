/********************************************************************************
** Form generated from reading UI file 'folderwizardtargetpage.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOLDERWIZARDTARGETPAGE_H
#define UI_FOLDERWIZARDTARGETPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FolderWizardTargetPage
{
public:
    QGridLayout *gridLayout_6;
    QLineEdit *folderEntry;
    QFrame *warnFrame;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *warnLabel;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *addFolderButton;
    QSpacerItem *verticalSpacer_2;
    QPushButton *refreshButton;
    QTreeWidget *folderTreeWidget;

    void setupUi(QWidget *FolderWizardTargetPage)
    {
        if (FolderWizardTargetPage->objectName().isEmpty())
            FolderWizardTargetPage->setObjectName(QStringLiteral("FolderWizardTargetPage"));
        FolderWizardTargetPage->resize(520, 350);
        gridLayout_6 = new QGridLayout(FolderWizardTargetPage);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        folderEntry = new QLineEdit(FolderWizardTargetPage);
        folderEntry->setObjectName(QStringLiteral("folderEntry"));

        gridLayout_6->addWidget(folderEntry, 1, 0, 1, 1);

        warnFrame = new QFrame(FolderWizardTargetPage);
        warnFrame->setObjectName(QStringLiteral("warnFrame"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(255, 255, 153, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        warnFrame->setPalette(palette);
        warnFrame->setAutoFillBackground(true);
        warnFrame->setFrameShape(QFrame::NoFrame);
        warnFrame->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(warnFrame);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        warnLabel = new QLabel(warnFrame);
        warnLabel->setObjectName(QStringLiteral("warnLabel"));
        warnLabel->setAutoFillBackground(true);
        warnLabel->setFrameShape(QFrame::NoFrame);
        warnLabel->setFrameShadow(QFrame::Plain);
        warnLabel->setTextFormat(Qt::AutoText);
        warnLabel->setWordWrap(true);
        warnLabel->setMargin(3);

        horizontalLayout->addWidget(warnLabel);


        gridLayout_5->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout_6->addWidget(warnFrame, 2, 0, 1, 1);

        groupBox = new QGroupBox(FolderWizardTargetPage);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFlat(true);
        groupBox->setCheckable(false);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        addFolderButton = new QPushButton(groupBox);
        addFolderButton->setObjectName(QStringLiteral("addFolderButton"));

        gridLayout->addWidget(addFolderButton, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 1, 1, 1);

        refreshButton = new QPushButton(groupBox);
        refreshButton->setObjectName(QStringLiteral("refreshButton"));

        gridLayout->addWidget(refreshButton, 2, 1, 1, 1);

        folderTreeWidget = new QTreeWidget(groupBox);
        folderTreeWidget->setObjectName(QStringLiteral("folderTreeWidget"));
        folderTreeWidget->setSortingEnabled(true);
        folderTreeWidget->setHeaderHidden(true);

        gridLayout->addWidget(folderTreeWidget, 0, 0, 4, 1);


        gridLayout_6->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(FolderWizardTargetPage);

        QMetaObject::connectSlotsByName(FolderWizardTargetPage);
    } // setupUi

    void retranslateUi(QWidget *FolderWizardTargetPage)
    {
        FolderWizardTargetPage->setWindowTitle(QApplication::translate("FolderWizardTargetPage", "Form", 0));
        warnLabel->setText(QApplication::translate("FolderWizardTargetPage", "TextLabel", 0));
        groupBox->setTitle(QApplication::translate("FolderWizardTargetPage", "Select a remote destination folder", 0));
        addFolderButton->setText(QApplication::translate("FolderWizardTargetPage", "Create Folder", 0));
        refreshButton->setText(QApplication::translate("FolderWizardTargetPage", "Refresh", 0));
        QTreeWidgetItem *___qtreewidgetitem = folderTreeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("FolderWizardTargetPage", "Folders", 0));
    } // retranslateUi

};

namespace Ui {
    class FolderWizardTargetPage: public Ui_FolderWizardTargetPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOLDERWIZARDTARGETPAGE_H
