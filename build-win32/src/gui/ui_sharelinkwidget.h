/********************************************************************************
** Form generated from reading UI file 'sharelinkwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHARELINKWIDGET_H
#define UI_SHARELINKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

namespace OCC {

class Ui_ShareLinkWidget
{
public:
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_shareLink;
    QCheckBox *checkBox_shareLink;
    QLabel *errorLabel;
    QWidget *widget_shareLink;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_setPassword;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_expire;
    QDateEdit *calendar;
    QHBoxLayout *horizontalLayout_password;
    QCheckBox *checkBox_password;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *_labelShareLink;
    QPushButton *pushButton_copy;
    QWidget *widget_editing;
    QHBoxLayout *horizontalLayout_editing;
    QCheckBox *checkBox_editing;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *OCC__ShareLinkWidget)
    {
        if (OCC__ShareLinkWidget->objectName().isEmpty())
            OCC__ShareLinkWidget->setObjectName(QStringLiteral("OCC__ShareLinkWidget"));
        OCC__ShareLinkWidget->resize(372, 237);
        gridLayout_3 = new QGridLayout(OCC__ShareLinkWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_shareLink = new QHBoxLayout();
        horizontalLayout_shareLink->setSpacing(6);
        horizontalLayout_shareLink->setObjectName(QStringLiteral("horizontalLayout_shareLink"));
        horizontalLayout_shareLink->setContentsMargins(-1, 10, -1, -1);
        checkBox_shareLink = new QCheckBox(OCC__ShareLinkWidget);
        checkBox_shareLink->setObjectName(QStringLiteral("checkBox_shareLink"));

        horizontalLayout_shareLink->addWidget(checkBox_shareLink);


        gridLayout_3->addLayout(horizontalLayout_shareLink, 0, 0, 1, 1);

        errorLabel = new QLabel(OCC__ShareLinkWidget);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(errorLabel->sizePolicy().hasHeightForWidth());
        errorLabel->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(123, 121, 134, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        errorLabel->setPalette(palette);

        gridLayout_3->addWidget(errorLabel, 3, 0, 1, 1);

        widget_shareLink = new QWidget(OCC__ShareLinkWidget);
        widget_shareLink->setObjectName(QStringLiteral("widget_shareLink"));
        gridLayout_2 = new QGridLayout(widget_shareLink);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(20, 1, 0, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(20, -1, -1, -1);
        lineEdit_password = new QLineEdit(widget_shareLink);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(lineEdit_password);

        pushButton_setPassword = new QPushButton(widget_shareLink);
        pushButton_setPassword->setObjectName(QStringLiteral("pushButton_setPassword"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_setPassword->sizePolicy().hasHeightForWidth());
        pushButton_setPassword->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(pushButton_setPassword);


        gridLayout_2->addLayout(horizontalLayout, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, -1, -1, -1);
        checkBox_expire = new QCheckBox(widget_shareLink);
        checkBox_expire->setObjectName(QStringLiteral("checkBox_expire"));

        horizontalLayout_2->addWidget(checkBox_expire);

        calendar = new QDateEdit(widget_shareLink);
        calendar->setObjectName(QStringLiteral("calendar"));
        calendar->setCalendarPopup(true);

        horizontalLayout_2->addWidget(calendar);


        gridLayout_2->addLayout(horizontalLayout_2, 5, 0, 1, 1);

        horizontalLayout_password = new QHBoxLayout();
        horizontalLayout_password->setSpacing(6);
        horizontalLayout_password->setObjectName(QStringLiteral("horizontalLayout_password"));
        checkBox_password = new QCheckBox(widget_shareLink);
        checkBox_password->setObjectName(QStringLiteral("checkBox_password"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(checkBox_password->sizePolicy().hasHeightForWidth());
        checkBox_password->setSizePolicy(sizePolicy2);

        horizontalLayout_password->addWidget(checkBox_password);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_password->addItem(horizontalSpacer_3);


        gridLayout_2->addLayout(horizontalLayout_password, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        _labelShareLink = new QLabel(widget_shareLink);
        _labelShareLink->setObjectName(QStringLiteral("_labelShareLink"));
        sizePolicy.setHeightForWidth(_labelShareLink->sizePolicy().hasHeightForWidth());
        _labelShareLink->setSizePolicy(sizePolicy);
        _labelShareLink->setFrameShape(QFrame::NoFrame);
        _labelShareLink->setTextFormat(Qt::RichText);
        _labelShareLink->setOpenExternalLinks(true);

        horizontalLayout_3->addWidget(_labelShareLink);

        pushButton_copy = new QPushButton(widget_shareLink);
        pushButton_copy->setObjectName(QStringLiteral("pushButton_copy"));

        horizontalLayout_3->addWidget(pushButton_copy);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        widget_editing = new QWidget(widget_shareLink);
        widget_editing->setObjectName(QStringLiteral("widget_editing"));
        horizontalLayout_editing = new QHBoxLayout(widget_editing);
        horizontalLayout_editing->setSpacing(6);
        horizontalLayout_editing->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_editing->setObjectName(QStringLiteral("horizontalLayout_editing"));
        horizontalLayout_editing->setContentsMargins(0, 0, 0, 0);
        checkBox_editing = new QCheckBox(widget_editing);
        checkBox_editing->setObjectName(QStringLiteral("checkBox_editing"));

        horizontalLayout_editing->addWidget(checkBox_editing);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_editing->addItem(horizontalSpacer);


        gridLayout_2->addWidget(widget_editing, 1, 0, 1, 1);


        gridLayout_3->addWidget(widget_shareLink, 1, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 2, 1, 1, 1);

        QWidget::setTabOrder(checkBox_shareLink, pushButton_copy);
        QWidget::setTabOrder(pushButton_copy, checkBox_editing);
        QWidget::setTabOrder(checkBox_editing, checkBox_password);
        QWidget::setTabOrder(checkBox_password, lineEdit_password);
        QWidget::setTabOrder(lineEdit_password, pushButton_setPassword);
        QWidget::setTabOrder(pushButton_setPassword, checkBox_expire);
        QWidget::setTabOrder(checkBox_expire, calendar);

        retranslateUi(OCC__ShareLinkWidget);

        QMetaObject::connectSlotsByName(OCC__ShareLinkWidget);
    } // setupUi

    void retranslateUi(QWidget *OCC__ShareLinkWidget)
    {
        OCC__ShareLinkWidget->setWindowTitle(QApplication::translate("OCC::ShareLinkWidget", "Share NewDocument.odt", 0));
        checkBox_shareLink->setText(QApplication::translate("OCC::ShareLinkWidget", "Share link", 0));
        errorLabel->setText(QApplication::translate("OCC::ShareLinkWidget", "TextLabel", 0));
        pushButton_setPassword->setText(QApplication::translate("OCC::ShareLinkWidget", "Set &password ", 0));
        checkBox_expire->setText(QApplication::translate("OCC::ShareLinkWidget", "Set &expiration date", 0));
        checkBox_password->setText(QApplication::translate("OCC::ShareLinkWidget", "Set password", 0));
        _labelShareLink->setText(QString());
        pushButton_copy->setText(QApplication::translate("OCC::ShareLinkWidget", "Copy &link", 0));
        checkBox_editing->setText(QApplication::translate("OCC::ShareLinkWidget", "Allow editing", 0));
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class ShareLinkWidget: public Ui_ShareLinkWidget {};
} // namespace Ui
} // namespace OCC

#endif // UI_SHARELINKWIDGET_H
