/********************************************************************************
** Form generated from reading UI file 'activitywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIVITYWIDGET_H
#define UI_ACTIVITYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

namespace OCC {

class Ui_ActivityWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *_notifyLabel;
    QScrollArea *_notifyScroll;
    QWidget *_scrollAreaWidgetContents;
    QLabel *_headerLabel;
    QListView *_activityList;
    QLabel *_bottomLabel;
    QDialogButtonBox *_dialogButtonBox;

    void setupUi(QWidget *OCC__ActivityWidget)
    {
        if (OCC__ActivityWidget->objectName().isEmpty())
            OCC__ActivityWidget->setObjectName(QStringLiteral("OCC__ActivityWidget"));
        OCC__ActivityWidget->resize(693, 556);
        gridLayout = new QGridLayout(OCC__ActivityWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        _notifyLabel = new QLabel(OCC__ActivityWidget);
        _notifyLabel->setObjectName(QStringLiteral("_notifyLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(_notifyLabel->sizePolicy().hasHeightForWidth());
        _notifyLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(_notifyLabel, 0, 0, 1, 1);

        _notifyScroll = new QScrollArea(OCC__ActivityWidget);
        _notifyScroll->setObjectName(QStringLiteral("_notifyScroll"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(_notifyScroll->sizePolicy().hasHeightForWidth());
        _notifyScroll->setSizePolicy(sizePolicy1);
        _notifyScroll->setWidgetResizable(true);
        _notifyScroll->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        _scrollAreaWidgetContents = new QWidget();
        _scrollAreaWidgetContents->setObjectName(QStringLiteral("_scrollAreaWidgetContents"));
        _scrollAreaWidgetContents->setGeometry(QRect(0, 0, 677, 70));
        _notifyScroll->setWidget(_scrollAreaWidgetContents);

        gridLayout->addWidget(_notifyScroll, 1, 0, 1, 1);

        _headerLabel = new QLabel(OCC__ActivityWidget);
        _headerLabel->setObjectName(QStringLiteral("_headerLabel"));
        sizePolicy.setHeightForWidth(_headerLabel->sizePolicy().hasHeightForWidth());
        _headerLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(_headerLabel, 2, 0, 1, 1);

        _activityList = new QListView(OCC__ActivityWidget);
        _activityList->setObjectName(QStringLiteral("_activityList"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(_activityList->sizePolicy().hasHeightForWidth());
        _activityList->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(_activityList, 3, 0, 1, 1);

        _bottomLabel = new QLabel(OCC__ActivityWidget);
        _bottomLabel->setObjectName(QStringLiteral("_bottomLabel"));
        sizePolicy.setHeightForWidth(_bottomLabel->sizePolicy().hasHeightForWidth());
        _bottomLabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(_bottomLabel, 4, 0, 1, 1);

        _dialogButtonBox = new QDialogButtonBox(OCC__ActivityWidget);
        _dialogButtonBox->setObjectName(QStringLiteral("_dialogButtonBox"));

        gridLayout->addWidget(_dialogButtonBox, 5, 0, 1, 1);

        QWidget::setTabOrder(_activityList, _dialogButtonBox);

        retranslateUi(OCC__ActivityWidget);

        QMetaObject::connectSlotsByName(OCC__ActivityWidget);
    } // setupUi

    void retranslateUi(QWidget *OCC__ActivityWidget)
    {
        OCC__ActivityWidget->setWindowTitle(QApplication::translate("OCC::ActivityWidget", "Form", 0));
        _notifyLabel->setText(QApplication::translate("OCC::ActivityWidget", "TextLabel", 0));
        _headerLabel->setText(QApplication::translate("OCC::ActivityWidget", "TextLabel", 0));
        _bottomLabel->setText(QApplication::translate("OCC::ActivityWidget", "TextLabel", 0));
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class ActivityWidget: public Ui_ActivityWidget {};
} // namespace Ui
} // namespace OCC

#endif // UI_ACTIVITYWIDGET_H
