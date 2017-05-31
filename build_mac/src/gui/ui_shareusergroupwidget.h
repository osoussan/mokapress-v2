/********************************************************************************
** Form generated from reading UI file 'shareusergroupwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHAREUSERGROUPWIDGET_H
#define UI_SHAREUSERGROUPWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace OCC {

class Ui_ShareUserGroupWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *shareeHorizontalLayout;
    QLineEdit *shareeLineEdit;
    QLabel *errorLabel;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;

    void setupUi(QWidget *OCC__ShareUserGroupWidget)
    {
        if (OCC__ShareUserGroupWidget->objectName().isEmpty())
            OCC__ShareUserGroupWidget->setObjectName(QStringLiteral("OCC__ShareUserGroupWidget"));
        OCC__ShareUserGroupWidget->resize(457, 164);
        verticalLayout = new QVBoxLayout(OCC__ShareUserGroupWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        shareeHorizontalLayout = new QHBoxLayout();
        shareeHorizontalLayout->setSpacing(6);
        shareeHorizontalLayout->setObjectName(QStringLiteral("shareeHorizontalLayout"));
        shareeLineEdit = new QLineEdit(OCC__ShareUserGroupWidget);
        shareeLineEdit->setObjectName(QStringLiteral("shareeLineEdit"));

        shareeHorizontalLayout->addWidget(shareeLineEdit);


        verticalLayout->addLayout(shareeHorizontalLayout);

        errorLabel = new QLabel(OCC__ShareUserGroupWidget);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(123, 121, 134, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        errorLabel->setPalette(palette);
        errorLabel->setText(QStringLiteral("Placeholder for Error text"));
        errorLabel->setWordWrap(true);

        verticalLayout->addWidget(errorLabel);

        scrollArea = new QScrollArea(OCC__ShareUserGroupWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 437, 94));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(OCC__ShareUserGroupWidget);

        QMetaObject::connectSlotsByName(OCC__ShareUserGroupWidget);
    } // setupUi

    void retranslateUi(QWidget *OCC__ShareUserGroupWidget)
    {
        OCC__ShareUserGroupWidget->setWindowTitle(QApplication::translate("OCC::ShareUserGroupWidget", "Share NewDocument.odt", 0));
        shareeLineEdit->setPlaceholderText(QApplication::translate("OCC::ShareUserGroupWidget", "Share with users or groups ...", 0));
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class ShareUserGroupWidget: public Ui_ShareUserGroupWidget {};
} // namespace Ui
} // namespace OCC

#endif // UI_SHAREUSERGROUPWIDGET_H
