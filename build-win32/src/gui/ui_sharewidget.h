/********************************************************************************
** Form generated from reading UI file 'sharewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHAREWIDGET_H
#define UI_SHAREWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace OCC {

class Ui_ShareWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *sharedWith;
    QSpacerItem *horizontalSpacer;
    QFrame *frame;
    QGridLayout *gridLayout;
    QCheckBox *permissionsEdit;
    QCheckBox *permissionShare;
    QToolButton *permissionToolButton;
    QToolButton *deleteShareButton;

    void setupUi(QWidget *OCC__ShareWidget)
    {
        if (OCC__ShareWidget->objectName().isEmpty())
            OCC__ShareWidget->setObjectName(QStringLiteral("OCC__ShareWidget"));
        OCC__ShareWidget->setEnabled(true);
        OCC__ShareWidget->resize(468, 64);
        verticalLayout = new QVBoxLayout(OCC__ShareWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        sharedWith = new QLabel(OCC__ShareWidget);
        sharedWith->setObjectName(QStringLiteral("sharedWith"));

        horizontalLayout_2->addWidget(sharedWith);

        horizontalSpacer = new QSpacerItem(40, 15, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        frame = new QFrame(OCC__ShareWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        permissionsEdit = new QCheckBox(frame);
        permissionsEdit->setObjectName(QStringLiteral("permissionsEdit"));

        gridLayout->addWidget(permissionsEdit, 0, 1, 1, 1);

        permissionShare = new QCheckBox(frame);
        permissionShare->setObjectName(QStringLiteral("permissionShare"));

        gridLayout->addWidget(permissionShare, 0, 0, 1, 1);

        permissionToolButton = new QToolButton(frame);
        permissionToolButton->setObjectName(QStringLiteral("permissionToolButton"));

        gridLayout->addWidget(permissionToolButton, 0, 2, 1, 1);


        horizontalLayout_2->addWidget(frame);

        deleteShareButton = new QToolButton(OCC__ShareWidget);
        deleteShareButton->setObjectName(QStringLiteral("deleteShareButton"));
        QIcon icon;
        QString iconThemeName = QStringLiteral("user-trash");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        deleteShareButton->setIcon(icon);

        horizontalLayout_2->addWidget(deleteShareButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(OCC__ShareWidget);

        QMetaObject::connectSlotsByName(OCC__ShareWidget);
    } // setupUi

    void retranslateUi(QWidget *OCC__ShareWidget)
    {
        OCC__ShareWidget->setWindowTitle(QApplication::translate("OCC::ShareWidget", "Form", 0));
        sharedWith->setText(QApplication::translate("OCC::ShareWidget", "TextLabel", 0));
        permissionsEdit->setText(QApplication::translate("OCC::ShareWidget", "can edit", 0));
        permissionShare->setText(QApplication::translate("OCC::ShareWidget", "can share", 0));
        permissionToolButton->setText(QApplication::translate("OCC::ShareWidget", "...", 0));
        deleteShareButton->setText(QString());
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class ShareWidget: public Ui_ShareWidget {};
} // namespace Ui
} // namespace OCC

#endif // UI_SHAREWIDGET_H
