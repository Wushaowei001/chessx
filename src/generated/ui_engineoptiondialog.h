/********************************************************************************
** Form generated from reading UI file 'engineoptiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENGINEOPTIONDIALOG_H
#define UI_ENGINEOPTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include "engineoptionlist.h"

QT_BEGIN_NAMESPACE

class Ui_EngineOptionDialog
{
public:
    QVBoxLayout *verticalLayout;
    EngineOptionList *tableView;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EngineOptionDialog)
    {
        if (EngineOptionDialog->objectName().isEmpty())
            EngineOptionDialog->setObjectName(QStringLiteral("EngineOptionDialog"));
        EngineOptionDialog->resize(598, 349);
        verticalLayout = new QVBoxLayout(EngineOptionDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableView = new EngineOptionList(EngineOptionDialog);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        buttonBox = new QDialogButtonBox(EngineOptionDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(EngineOptionDialog);

        QMetaObject::connectSlotsByName(EngineOptionDialog);
    } // setupUi

    void retranslateUi(QDialog *EngineOptionDialog)
    {
        EngineOptionDialog->setWindowTitle(QApplication::translate("EngineOptionDialog", "Engine Options", 0));
    } // retranslateUi

};

namespace Ui {
    class EngineOptionDialog: public Ui_EngineOptionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENGINEOPTIONDIALOG_H
