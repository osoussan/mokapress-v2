/********************************************************************************
** Form generated from reading UI file 'owncloudhttpcredspage.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OWNCLOUDHTTPCREDSPAGE_H
#define UI_OWNCLOUDHTTPCREDSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OwncloudHttpCredsPage
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QFormLayout *formLayout;
    QLabel *usernameLabel;
    QLabel *label_2;
    QLabel *errorLabel;
    QLineEdit *leUsername;
    QLineEdit *lePassword;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *resultLayout;
    QLabel *topLabel;
    QLabel *bottomLabel;

    void setupUi(QWidget *OwncloudHttpCredsPage)
    {
        if (OwncloudHttpCredsPage->objectName().isEmpty())
            OwncloudHttpCredsPage->setObjectName(QStringLiteral("OwncloudHttpCredsPage"));
        OwncloudHttpCredsPage->resize(350, 196);
        gridLayout = new QGridLayout(OwncloudHttpCredsPage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(48, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        usernameLabel = new QLabel(OwncloudHttpCredsPage);
        usernameLabel->setObjectName(QStringLiteral("usernameLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, usernameLabel);

        label_2 = new QLabel(OwncloudHttpCredsPage);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        errorLabel = new QLabel(OwncloudHttpCredsPage);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));
        errorLabel->setOpenExternalLinks(true);

        formLayout->setWidget(2, QFormLayout::SpanningRole, errorLabel);

        leUsername = new QLineEdit(OwncloudHttpCredsPage);
        leUsername->setObjectName(QStringLiteral("leUsername"));

        formLayout->setWidget(0, QFormLayout::FieldRole, leUsername);

        lePassword = new QLineEdit(OwncloudHttpCredsPage);
        lePassword->setObjectName(QStringLiteral("lePassword"));
        lePassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, lePassword);


        gridLayout->addLayout(formLayout, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 68, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(48, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        resultLayout = new QHBoxLayout();
        resultLayout->setObjectName(QStringLiteral("resultLayout"));

        gridLayout->addLayout(resultLayout, 3, 1, 1, 1);

        topLabel = new QLabel(OwncloudHttpCredsPage);
        topLabel->setObjectName(QStringLiteral("topLabel"));
        topLabel->setAlignment(Qt::AlignCenter);
        topLabel->setWordWrap(true);

        gridLayout->addWidget(topLabel, 0, 0, 1, 3);

        bottomLabel = new QLabel(OwncloudHttpCredsPage);
        bottomLabel->setObjectName(QStringLiteral("bottomLabel"));

        gridLayout->addWidget(bottomLabel, 4, 0, 1, 3);

#ifndef QT_NO_SHORTCUT
        usernameLabel->setBuddy(leUsername);
        label_2->setBuddy(lePassword);
#endif // QT_NO_SHORTCUT

        retranslateUi(OwncloudHttpCredsPage);

        QMetaObject::connectSlotsByName(OwncloudHttpCredsPage);
    } // setupUi

    void retranslateUi(QWidget *OwncloudHttpCredsPage)
    {
        OwncloudHttpCredsPage->setWindowTitle(QApplication::translate("OwncloudHttpCredsPage", "Form", 0));
        usernameLabel->setText(QApplication::translate("OwncloudHttpCredsPage", "&Username", 0));
        label_2->setText(QApplication::translate("OwncloudHttpCredsPage", "&Password", 0));
        errorLabel->setText(QApplication::translate("OwncloudHttpCredsPage", "Error Label", 0));
        topLabel->setText(QApplication::translate("OwncloudHttpCredsPage", "TextLabel", 0));
        bottomLabel->setText(QApplication::translate("OwncloudHttpCredsPage", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class OwncloudHttpCredsPage: public Ui_OwncloudHttpCredsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OWNCLOUDHTTPCREDSPAGE_H
