/********************************************************************************
** Form generated from reading UI file 'owncloudsetupnocredspage.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OWNCLOUDSETUPNOCREDSPAGE_H
#define UI_OWNCLOUDSETUPNOCREDSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "wizard/postfixlineedit.h"

QT_BEGIN_NAMESPACE

class Ui_OwncloudSetupPage
{
public:
    QGridLayout *gridLayout;
    QLabel *topLabel;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    OCC::PostfixLineEdit *leUrl;
    QLabel *urlLabel;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *errorLabel;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *resultLayout;
    QLabel *bottomLabel;

    void setupUi(QWidget *OwncloudSetupPage)
    {
        if (OwncloudSetupPage->objectName().isEmpty())
            OwncloudSetupPage->setObjectName(QStringLiteral("OwncloudSetupPage"));
        OwncloudSetupPage->resize(602, 193);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OwncloudSetupPage->sizePolicy().hasHeightForWidth());
        OwncloudSetupPage->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(OwncloudSetupPage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        topLabel = new QLabel(OwncloudSetupPage);
        topLabel->setObjectName(QStringLiteral("topLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(topLabel->sizePolicy().hasHeightForWidth());
        topLabel->setSizePolicy(sizePolicy1);
        topLabel->setAlignment(Qt::AlignCenter);
        topLabel->setWordWrap(true);

        gridLayout->addWidget(topLabel, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(OwncloudSetupPage);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        leUrl = new OCC::PostfixLineEdit(OwncloudSetupPage);
        leUrl->setObjectName(QStringLiteral("leUrl"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(leUrl->sizePolicy().hasHeightForWidth());
        leUrl->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(leUrl);

        urlLabel = new QLabel(OwncloudSetupPage);
        urlLabel->setObjectName(QStringLiteral("urlLabel"));

        horizontalLayout->addWidget(urlLabel);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_3);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        errorLabel = new QLabel(OwncloudSetupPage);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(errorLabel->sizePolicy().hasHeightForWidth());
        errorLabel->setSizePolicy(sizePolicy3);
        errorLabel->setOpenExternalLinks(true);

        gridLayout->addWidget(errorLabel, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        resultLayout = new QHBoxLayout();
        resultLayout->setSpacing(0);
        resultLayout->setObjectName(QStringLiteral("resultLayout"));

        gridLayout->addLayout(resultLayout, 4, 0, 1, 1);

        bottomLabel = new QLabel(OwncloudSetupPage);
        bottomLabel->setObjectName(QStringLiteral("bottomLabel"));

        gridLayout->addWidget(bottomLabel, 5, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(leUrl);
#endif // QT_NO_SHORTCUT

        retranslateUi(OwncloudSetupPage);

        QMetaObject::connectSlotsByName(OwncloudSetupPage);
    } // setupUi

    void retranslateUi(QWidget *OwncloudSetupPage)
    {
        OwncloudSetupPage->setWindowTitle(QApplication::translate("OwncloudSetupPage", "Form", 0));
        topLabel->setText(QApplication::translate("OwncloudSetupPage", "TextLabel", 0));
        label_2->setText(QApplication::translate("OwncloudSetupPage", "Server &Address", 0));
        leUrl->setPlaceholderText(QApplication::translate("OwncloudSetupPage", "https://...", 0));
        urlLabel->setText(QString());
        errorLabel->setText(QApplication::translate("OwncloudSetupPage", "Error Label", 0));
        bottomLabel->setText(QApplication::translate("OwncloudSetupPage", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class OwncloudSetupPage: public Ui_OwncloudSetupPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OWNCLOUDSETUPNOCREDSPAGE_H
