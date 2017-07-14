/********************************************************************************
** Form generated from reading UI file 'owncloudwizardresultpage.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OWNCLOUDWIZARDRESULTPAGE_H
#define UI_OWNCLOUDWIZARDRESULTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OwncloudWizardResultPage
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *topLabel;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QToolButton *pbOpenServer;
    QToolButton *pbOpenLocal;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QLabel *localFolderLabel;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *OwncloudWizardResultPage)
    {
        if (OwncloudWizardResultPage->objectName().isEmpty())
            OwncloudWizardResultPage->setObjectName(QStringLiteral("OwncloudWizardResultPage"));
        OwncloudWizardResultPage->resize(473, 366);
        verticalLayout_3 = new QVBoxLayout(OwncloudWizardResultPage);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        topLabel = new QLabel(OwncloudWizardResultPage);
        topLabel->setObjectName(QStringLiteral("topLabel"));
        topLabel->setWordWrap(true);

        verticalLayout_3->addWidget(topLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(48, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));

        verticalLayout_2->addLayout(horizontalLayout_12);

        verticalSpacer_2 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pbOpenServer = new QToolButton(OwncloudWizardResultPage);
        pbOpenServer->setObjectName(QStringLiteral("pbOpenServer"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pbOpenServer->sizePolicy().hasHeightForWidth());
        pbOpenServer->setSizePolicy(sizePolicy);
        pbOpenServer->setMinimumSize(QSize(200, 80));
        pbOpenServer->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        verticalLayout->addWidget(pbOpenServer);

        pbOpenLocal = new QToolButton(OwncloudWizardResultPage);
        pbOpenLocal->setObjectName(QStringLiteral("pbOpenLocal"));
        sizePolicy.setHeightForWidth(pbOpenLocal->sizePolicy().hasHeightForWidth());
        pbOpenLocal->setSizePolicy(sizePolicy);
        pbOpenLocal->setMinimumSize(QSize(200, 80));
        pbOpenLocal->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        verticalLayout->addWidget(pbOpenLocal);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_3);

        localFolderLabel = new QLabel(OwncloudWizardResultPage);
        localFolderLabel->setObjectName(QStringLiteral("localFolderLabel"));
        localFolderLabel->setWordWrap(true);

        verticalLayout_2->addWidget(localFolderLabel);

        verticalSpacer = new QSpacerItem(336, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(48, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(OwncloudWizardResultPage);

        QMetaObject::connectSlotsByName(OwncloudWizardResultPage);
    } // setupUi

    void retranslateUi(QWidget *OwncloudWizardResultPage)
    {
        OwncloudWizardResultPage->setWindowTitle(QApplication::translate("OwncloudWizardResultPage", "Form", 0));
        topLabel->setText(QApplication::translate("OwncloudWizardResultPage", "TextLabel", 0));
        pbOpenServer->setText(QApplication::translate("OwncloudWizardResultPage", "PushButton", 0));
        pbOpenLocal->setText(QApplication::translate("OwncloudWizardResultPage", "PushButton", 0));
        localFolderLabel->setText(QApplication::translate("OwncloudWizardResultPage", "Your entire account is synced to the local folder ", 0));
    } // retranslateUi

};

namespace Ui {
    class OwncloudWizardResultPage: public Ui_OwncloudWizardResultPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OWNCLOUDWIZARDRESULTPAGE_H
