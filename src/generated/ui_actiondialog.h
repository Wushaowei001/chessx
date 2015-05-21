/********************************************************************************
** Form generated from reading UI file 'actiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIONDIALOG_H
#define UI_ACTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ActionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *actionsTable;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ActionDialog)
    {
        if (ActionDialog->objectName().isEmpty())
            ActionDialog->setObjectName(QStringLiteral("ActionDialog"));
        ActionDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(ActionDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        actionsTable = new QTableWidget(ActionDialog);
        if (actionsTable->columnCount() < 2)
            actionsTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        actionsTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        actionsTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        actionsTable->setObjectName(QStringLiteral("actionsTable"));
        actionsTable->setAlternatingRowColors(true);
        actionsTable->setSortingEnabled(true);
        actionsTable->setColumnCount(2);
        actionsTable->horizontalHeader()->setStretchLastSection(true);
        actionsTable->verticalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(actionsTable);

        line = new QFrame(ActionDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        buttonBox = new QDialogButtonBox(ActionDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ActionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ActionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ActionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ActionDialog);
    } // setupUi

    void retranslateUi(QDialog *ActionDialog)
    {
        ActionDialog->setWindowTitle(QApplication::translate("ActionDialog", "Customize Keyboard", 0));
        QTableWidgetItem *___qtablewidgetitem = actionsTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ActionDialog", "Menu Item", 0));
        QTableWidgetItem *___qtablewidgetitem1 = actionsTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ActionDialog", "Keyboard Shortcut", 0));
    } // retranslateUi

};

namespace Ui {
    class ActionDialog: public Ui_ActionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTIONDIALOG_H
