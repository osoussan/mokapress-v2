/********************************************************************************
** Form generated from reading UI file 'CrashReporter.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRASHREPORTER_H
#define UI_CRASHREPORTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CrashReporter
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *logoLabel;
    QLabel *topLabel;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *horizontalSpacer;
    QPushButton *sendButton;
    QPushButton *dontSendButton;
    QVBoxLayout *vboxLayout1;
    QLabel *progressLabel;
    QHBoxLayout *hboxLayout2;
    QProgressBar *progressBar;
    QPushButton *button;
    QLabel *bottomLabel;

    void setupUi(QDialog *CrashReporter)
    {
        if (CrashReporter->objectName().isEmpty())
            CrashReporter->setObjectName(QStringLiteral("CrashReporter"));
        CrashReporter->setWindowModality(Qt::ApplicationModal);
        CrashReporter->resize(376, 216);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CrashReporter->sizePolicy().hasHeightForWidth());
        CrashReporter->setSizePolicy(sizePolicy);
        CrashReporter->setModal(false);
        vboxLayout = new QVBoxLayout(CrashReporter);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(12);
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        logoLabel = new QLabel(CrashReporter);
        logoLabel->setObjectName(QStringLiteral("logoLabel"));
        sizePolicy.setHeightForWidth(logoLabel->sizePolicy().hasHeightForWidth());
        logoLabel->setSizePolicy(sizePolicy);
        logoLabel->setMinimumSize(QSize(55, 55));
        logoLabel->setMaximumSize(QSize(55, 55));
        logoLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        hboxLayout->addWidget(logoLabel);

        topLabel = new QLabel(CrashReporter);
        topLabel->setObjectName(QStringLiteral("topLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(topLabel->sizePolicy().hasHeightForWidth());
        topLabel->setSizePolicy(sizePolicy1);
        topLabel->setTextFormat(Qt::RichText);
        topLabel->setWordWrap(true);

        hboxLayout->addWidget(topLabel);

        spacerItem = new QSpacerItem(6, 6, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(-1);
#endif
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(horizontalSpacer);

        sendButton = new QPushButton(CrashReporter);
        sendButton->setObjectName(QStringLiteral("sendButton"));

        hboxLayout1->addWidget(sendButton);

        dontSendButton = new QPushButton(CrashReporter);
        dontSendButton->setObjectName(QStringLiteral("dontSendButton"));

        hboxLayout1->addWidget(dontSendButton);


        vboxLayout->addLayout(hboxLayout1);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(0);
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        progressLabel = new QLabel(CrashReporter);
        progressLabel->setObjectName(QStringLiteral("progressLabel"));
        sizePolicy.setHeightForWidth(progressLabel->sizePolicy().hasHeightForWidth());
        progressLabel->setSizePolicy(sizePolicy);

        vboxLayout1->addWidget(progressLabel);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(9);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        progressBar = new QProgressBar(CrashReporter);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);
        progressBar->setOrientation(Qt::Horizontal);

        hboxLayout2->addWidget(progressBar);

        button = new QPushButton(CrashReporter);
        button->setObjectName(QStringLiteral("button"));
        sizePolicy.setHeightForWidth(button->sizePolicy().hasHeightForWidth());
        button->setSizePolicy(sizePolicy);
        button->setDefault(true);

        hboxLayout2->addWidget(button);


        vboxLayout1->addLayout(hboxLayout2);


        vboxLayout->addLayout(vboxLayout1);

        bottomLabel = new QLabel(CrashReporter);
        bottomLabel->setObjectName(QStringLiteral("bottomLabel"));
        sizePolicy.setHeightForWidth(bottomLabel->sizePolicy().hasHeightForWidth());
        bottomLabel->setSizePolicy(sizePolicy);
        bottomLabel->setTextFormat(Qt::PlainText);
        bottomLabel->setWordWrap(false);

        vboxLayout->addWidget(bottomLabel);


        retranslateUi(CrashReporter);
        QObject::connect(button, SIGNAL(clicked()), CrashReporter, SLOT(accept()));
        QObject::connect(dontSendButton, SIGNAL(clicked()), CrashReporter, SLOT(reject()));

        QMetaObject::connectSlotsByName(CrashReporter);
    } // setupUi

    void retranslateUi(QDialog *CrashReporter)
    {
        CrashReporter->setWindowTitle(QApplication::translate("CrashReporter", "Tomahawk Crash Reporter", 0));
        logoLabel->setText(QString());
        topLabel->setText(QApplication::translate("CrashReporter", "<html><head/><body><p><span style=\" font-weight:600;\">Sorry!</span>\302\240Tomahawk crashed. Please tell us about it! Tomahawk has created an error report for you that can help improve the stability in the future. You can now send this report directly to the Tomahawk developers.</p></body></html>", 0));
        sendButton->setText(QApplication::translate("CrashReporter", "Send this report", 0));
        dontSendButton->setText(QApplication::translate("CrashReporter", "Don't send", 0));
        progressLabel->setText(QString());
        button->setText(QApplication::translate("CrashReporter", "Abort", 0));
        bottomLabel->setText(QApplication::translate("CrashReporter", "You can disable sending crash reports in the configuration dialog.", 0));
    } // retranslateUi

};

namespace Ui {
    class CrashReporter: public Ui_CrashReporter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRASHREPORTER_H
