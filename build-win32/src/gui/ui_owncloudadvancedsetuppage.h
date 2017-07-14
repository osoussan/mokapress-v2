/********************************************************************************
** Form generated from reading UI file 'owncloudadvancedsetuppage.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OWNCLOUDADVANCEDSETUPPAGE_H
#define UI_OWNCLOUDADVANCEDSETUPPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OwncloudAdvancedSetupPage
{
public:
    QVBoxLayout *verticalLayout_4;
    QLabel *topLabel;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *lServerIcon;
    QLabel *lServer;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QLabel *lLocalIcon;
    QLabel *lLocal;
    QSpacerItem *verticalSpacer_4;
    QWidget *resolutionWidget;
    QFormLayout *formLayout_2;
    QRadioButton *radioButton;
    QRadioButton *cbSyncFromScratch;
    QPushButton *pbSelectLocalFolder;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rSyncEverything;
    QLabel *lSyncEverythingSizeLabel;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rSelectiveSync;
    QPushButton *bSelectiveSync;
    QLabel *lSelectiveSyncSizeLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *errorLabel;
    QLabel *syncModeLabel;
    QHBoxLayout *resultLayout;
    QLabel *bottomLabel;

    void setupUi(QWidget *OwncloudAdvancedSetupPage)
    {
        if (OwncloudAdvancedSetupPage->objectName().isEmpty())
            OwncloudAdvancedSetupPage->setObjectName(QStringLiteral("OwncloudAdvancedSetupPage"));
        OwncloudAdvancedSetupPage->resize(917, 493);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OwncloudAdvancedSetupPage->sizePolicy().hasHeightForWidth());
        OwncloudAdvancedSetupPage->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(OwncloudAdvancedSetupPage);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        topLabel = new QLabel(OwncloudAdvancedSetupPage);
        topLabel->setObjectName(QStringLiteral("topLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(topLabel->sizePolicy().hasHeightForWidth());
        topLabel->setSizePolicy(sizePolicy1);
        topLabel->setAlignment(Qt::AlignCenter);
        topLabel->setWordWrap(true);

        verticalLayout_4->addWidget(topLabel);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lServerIcon = new QLabel(OwncloudAdvancedSetupPage);
        lServerIcon->setObjectName(QStringLiteral("lServerIcon"));
        lServerIcon->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lServerIcon);

        lServer = new QLabel(OwncloudAdvancedSetupPage);
        lServer->setObjectName(QStringLiteral("lServer"));
        lServer->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lServer);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        lLocalIcon = new QLabel(OwncloudAdvancedSetupPage);
        lLocalIcon->setObjectName(QStringLiteral("lLocalIcon"));
        lLocalIcon->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lLocalIcon);

        lLocal = new QLabel(OwncloudAdvancedSetupPage);
        lLocal->setObjectName(QStringLiteral("lLocal"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lLocal->sizePolicy().hasHeightForWidth());
        lLocal->setSizePolicy(sizePolicy2);
        lLocal->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lLocal);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);


        gridLayout->addLayout(verticalLayout_3, 2, 0, 3, 1);

        resolutionWidget = new QWidget(OwncloudAdvancedSetupPage);
        resolutionWidget->setObjectName(QStringLiteral("resolutionWidget"));
        sizePolicy1.setHeightForWidth(resolutionWidget->sizePolicy().hasHeightForWidth());
        resolutionWidget->setSizePolicy(sizePolicy1);
        formLayout_2 = new QFormLayout(resolutionWidget);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        formLayout_2->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        radioButton = new QRadioButton(resolutionWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setChecked(true);

        formLayout_2->setWidget(1, QFormLayout::SpanningRole, radioButton);

        cbSyncFromScratch = new QRadioButton(resolutionWidget);
        cbSyncFromScratch->setObjectName(QStringLiteral("cbSyncFromScratch"));
        cbSyncFromScratch->setCheckable(true);

        formLayout_2->setWidget(2, QFormLayout::SpanningRole, cbSyncFromScratch);


        gridLayout->addWidget(resolutionWidget, 4, 1, 1, 2);

        pbSelectLocalFolder = new QPushButton(OwncloudAdvancedSetupPage);
        pbSelectLocalFolder->setObjectName(QStringLiteral("pbSelectLocalFolder"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pbSelectLocalFolder->sizePolicy().hasHeightForWidth());
        pbSelectLocalFolder->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(pbSelectLocalFolder, 2, 1, 2, 1);

        widget = new QWidget(OwncloudAdvancedSetupPage);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        rSyncEverything = new QRadioButton(widget);
        rSyncEverything->setObjectName(QStringLiteral("rSyncEverything"));
        rSyncEverything->setChecked(true);

        horizontalLayout_2->addWidget(rSyncEverything);

        lSyncEverythingSizeLabel = new QLabel(widget);
        lSyncEverythingSizeLabel->setObjectName(QStringLiteral("lSyncEverythingSizeLabel"));

        horizontalLayout_2->addWidget(lSyncEverythingSizeLabel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        rSelectiveSync = new QRadioButton(widget);
        rSelectiveSync->setObjectName(QStringLiteral("rSelectiveSync"));

        horizontalLayout->addWidget(rSelectiveSync);

        bSelectiveSync = new QPushButton(widget);
        bSelectiveSync->setObjectName(QStringLiteral("bSelectiveSync"));

        horizontalLayout->addWidget(bSelectiveSync);

        lSelectiveSyncSizeLabel = new QLabel(widget);
        lSelectiveSyncSizeLabel->setObjectName(QStringLiteral("lSelectiveSyncSizeLabel"));

        horizontalLayout->addWidget(lSelectiveSyncSizeLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addWidget(widget, 0, 1, 1, 2);


        verticalLayout_4->addLayout(gridLayout);

        errorLabel = new QLabel(OwncloudAdvancedSetupPage);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));

        verticalLayout_4->addWidget(errorLabel);

        syncModeLabel = new QLabel(OwncloudAdvancedSetupPage);
        syncModeLabel->setObjectName(QStringLiteral("syncModeLabel"));
        syncModeLabel->setAlignment(Qt::AlignCenter);
        syncModeLabel->setWordWrap(true);

        verticalLayout_4->addWidget(syncModeLabel);

        resultLayout = new QHBoxLayout();
        resultLayout->setObjectName(QStringLiteral("resultLayout"));

        verticalLayout_4->addLayout(resultLayout);

        bottomLabel = new QLabel(OwncloudAdvancedSetupPage);
        bottomLabel->setObjectName(QStringLiteral("bottomLabel"));

        verticalLayout_4->addWidget(bottomLabel);

#ifndef QT_NO_SHORTCUT
        lLocal->setBuddy(pbSelectLocalFolder);
#endif // QT_NO_SHORTCUT

        retranslateUi(OwncloudAdvancedSetupPage);

        QMetaObject::connectSlotsByName(OwncloudAdvancedSetupPage);
    } // setupUi

    void retranslateUi(QWidget *OwncloudAdvancedSetupPage)
    {
        OwncloudAdvancedSetupPage->setWindowTitle(QApplication::translate("OwncloudAdvancedSetupPage", "Form", 0));
        topLabel->setText(QApplication::translate("OwncloudAdvancedSetupPage", "TextLabel", 0));
        lServerIcon->setText(QApplication::translate("OwncloudAdvancedSetupPage", "TextLabel", 0));
        lServer->setText(QApplication::translate("OwncloudAdvancedSetupPage", "Server", 0));
        lLocalIcon->setText(QApplication::translate("OwncloudAdvancedSetupPage", "TextLabel", 0));
        lLocal->setText(QApplication::translate("OwncloudAdvancedSetupPage", "&Local Folder", 0));
        radioButton->setText(QApplication::translate("OwncloudAdvancedSetupPage", "&Keep local data", 0));
#ifndef QT_NO_TOOLTIP
        cbSyncFromScratch->setToolTip(QApplication::translate("OwncloudAdvancedSetupPage", "<html><head/><body><p>If this box is checked, existing content in the local folder will be erased to start a clean sync from the server.</p><p>Do not check this if the local content should be uploaded to the servers folder.</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        cbSyncFromScratch->setText(QApplication::translate("OwncloudAdvancedSetupPage", "Start a &clean sync (Erases the local folder!)", 0));
        pbSelectLocalFolder->setText(QApplication::translate("OwncloudAdvancedSetupPage", "pbSelectLocalFolder", 0));
        rSyncEverything->setText(QApplication::translate("OwncloudAdvancedSetupPage", "S&ync everything from server", 0));
        lSyncEverythingSizeLabel->setText(QApplication::translate("OwncloudAdvancedSetupPage", "TextLabel", 0));
        rSelectiveSync->setText(QString());
        bSelectiveSync->setText(QApplication::translate("OwncloudAdvancedSetupPage", "Choose what to sync", 0));
        lSelectiveSyncSizeLabel->setText(QApplication::translate("OwncloudAdvancedSetupPage", "TextLabel", 0));
        errorLabel->setText(QApplication::translate("OwncloudAdvancedSetupPage", "TextLabel", 0));
        syncModeLabel->setText(QApplication::translate("OwncloudAdvancedSetupPage", "Status message", 0));
        bottomLabel->setText(QApplication::translate("OwncloudAdvancedSetupPage", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class OwncloudAdvancedSetupPage: public Ui_OwncloudAdvancedSetupPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OWNCLOUDADVANCEDSETUPPAGE_H
