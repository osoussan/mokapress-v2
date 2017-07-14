/********************************************************************************
** Form generated from reading UI file 'notificationwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTIFICATIONWIDGET_H
#define UI_NOTIFICATIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NotificationWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *_notifIcon;
    QVBoxLayout *verticalLayout;
    QLabel *_subjectLabel;
    QLabel *_messageLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *_timeLabel;
    QDialogButtonBox *_buttonBox;
    QFrame *frame;

    void setupUi(QWidget *NotificationWidget)
    {
        if (NotificationWidget->objectName().isEmpty())
            NotificationWidget->setObjectName(QStringLiteral("NotificationWidget"));
        NotificationWidget->resize(725, 125);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NotificationWidget->sizePolicy().hasHeightForWidth());
        NotificationWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(NotificationWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, 0);
        _notifIcon = new QLabel(NotificationWidget);
        _notifIcon->setObjectName(QStringLiteral("_notifIcon"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(_notifIcon->sizePolicy().hasHeightForWidth());
        _notifIcon->setSizePolicy(sizePolicy1);
        _notifIcon->setPixmap(QPixmap(QString::fromUtf8("../../../../resources/bell.png")));

        gridLayout->addWidget(_notifIcon, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        _subjectLabel = new QLabel(NotificationWidget);
        _subjectLabel->setObjectName(QStringLiteral("_subjectLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(_subjectLabel->sizePolicy().hasHeightForWidth());
        _subjectLabel->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(_subjectLabel);

        _messageLabel = new QLabel(NotificationWidget);
        _messageLabel->setObjectName(QStringLiteral("_messageLabel"));
        sizePolicy2.setHeightForWidth(_messageLabel->sizePolicy().hasHeightForWidth());
        _messageLabel->setSizePolicy(sizePolicy2);
        _messageLabel->setScaledContents(false);
        _messageLabel->setWordWrap(true);

        verticalLayout->addWidget(_messageLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        _timeLabel = new QLabel(NotificationWidget);
        _timeLabel->setObjectName(QStringLiteral("_timeLabel"));
        QFont font;
        font.setPointSize(8);
        _timeLabel->setFont(font);
        _timeLabel->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout->addWidget(_timeLabel);

        _buttonBox = new QDialogButtonBox(NotificationWidget);
        _buttonBox->setObjectName(QStringLiteral("_buttonBox"));
        _buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        horizontalLayout->addWidget(_buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        frame = new QFrame(NotificationWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::HLine);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(4);

        gridLayout->addWidget(frame, 1, 0, 1, 2);


        retranslateUi(NotificationWidget);

        QMetaObject::connectSlotsByName(NotificationWidget);
    } // setupUi

    void retranslateUi(QWidget *NotificationWidget)
    {
        NotificationWidget->setWindowTitle(QApplication::translate("NotificationWidget", "Form", 0));
        _notifIcon->setText(QString());
        _subjectLabel->setText(QApplication::translate("NotificationWidget", "Lorem ipsum dolor sit amet", 0));
        _messageLabel->setText(QApplication::translate("NotificationWidget", "Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod temporm ", 0));
        _timeLabel->setText(QApplication::translate("NotificationWidget", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class NotificationWidget: public Ui_NotificationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTIFICATIONWIDGET_H
