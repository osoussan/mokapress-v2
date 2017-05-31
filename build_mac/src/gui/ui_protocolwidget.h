/********************************************************************************
** Form generated from reading UI file 'protocolwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROTOCOLWIDGET_H
#define UI_PROTOCOLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

namespace OCC {

class Ui_ProtocolWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *_headerLabel;
    QTreeWidget *_treeWidget;
    QDialogButtonBox *_dialogButtonBox;

    void setupUi(QWidget *OCC__ProtocolWidget)
    {
        if (OCC__ProtocolWidget->objectName().isEmpty())
            OCC__ProtocolWidget->setObjectName(QStringLiteral("OCC__ProtocolWidget"));
        OCC__ProtocolWidget->resize(612, 515);
        gridLayout = new QGridLayout(OCC__ProtocolWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        _headerLabel = new QLabel(OCC__ProtocolWidget);
        _headerLabel->setObjectName(QStringLiteral("_headerLabel"));

        gridLayout->addWidget(_headerLabel, 0, 0, 1, 1);

        _treeWidget = new QTreeWidget(OCC__ProtocolWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(3, QStringLiteral("4"));
        __qtreewidgetitem->setText(2, QStringLiteral("3"));
        __qtreewidgetitem->setText(1, QStringLiteral("2"));
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        _treeWidget->setHeaderItem(__qtreewidgetitem);
        _treeWidget->setObjectName(QStringLiteral("_treeWidget"));
        _treeWidget->setAlternatingRowColors(true);
        _treeWidget->setRootIsDecorated(false);
        _treeWidget->setUniformRowHeights(true);
        _treeWidget->setColumnCount(4);

        gridLayout->addWidget(_treeWidget, 1, 0, 1, 2);

        _dialogButtonBox = new QDialogButtonBox(OCC__ProtocolWidget);
        _dialogButtonBox->setObjectName(QStringLiteral("_dialogButtonBox"));

        gridLayout->addWidget(_dialogButtonBox, 2, 0, 1, 2);


        retranslateUi(OCC__ProtocolWidget);

        QMetaObject::connectSlotsByName(OCC__ProtocolWidget);
    } // setupUi

    void retranslateUi(QWidget *OCC__ProtocolWidget)
    {
        OCC__ProtocolWidget->setWindowTitle(QApplication::translate("OCC::ProtocolWidget", "Form", 0));
        _headerLabel->setText(QApplication::translate("OCC::ProtocolWidget", "TextLabel", 0));
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class ProtocolWidget: public Ui_ProtocolWidget {};
} // namespace Ui
} // namespace OCC

#endif // UI_PROTOCOLWIDGET_H
