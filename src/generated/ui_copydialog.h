/********************************************************************************
** Form generated from reading UI file 'copydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COPYDIALOG_H
#define UI_COPYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CopyDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout;
    QRadioButton *singleButton;
    QRadioButton *selectedButton;
    QRadioButton *filterButton;
    QRadioButton *allButton;
    QLabel *label;
    QListWidget *databaseList;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CopyDialog)
    {
        if (CopyDialog->objectName().isEmpty())
            CopyDialog->setObjectName(QStringLiteral("CopyDialog"));
        CopyDialog->resize(400, 342);
        gridLayout = new QGridLayout(CopyDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(CopyDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        vboxLayout = new QVBoxLayout(groupBox);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        singleButton = new QRadioButton(groupBox);
        singleButton->setObjectName(QStringLiteral("singleButton"));

        vboxLayout->addWidget(singleButton);

        selectedButton = new QRadioButton(groupBox);
        selectedButton->setObjectName(QStringLiteral("selectedButton"));

        vboxLayout->addWidget(selectedButton);

        filterButton = new QRadioButton(groupBox);
        filterButton->setObjectName(QStringLiteral("filterButton"));
        filterButton->setChecked(true);

        vboxLayout->addWidget(filterButton);

        allButton = new QRadioButton(groupBox);
        allButton->setObjectName(QStringLiteral("allButton"));

        vboxLayout->addWidget(allButton);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        label = new QLabel(CopyDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        databaseList = new QListWidget(CopyDialog);
        databaseList->setObjectName(QStringLiteral("databaseList"));

        gridLayout->addWidget(databaseList, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(CopyDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(databaseList);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(singleButton, filterButton);
        QWidget::setTabOrder(filterButton, allButton);
        QWidget::setTabOrder(allButton, databaseList);
        QWidget::setTabOrder(databaseList, buttonBox);

        retranslateUi(CopyDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CopyDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CopyDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CopyDialog);
    } // setupUi

    void retranslateUi(QDialog *CopyDialog)
    {
        CopyDialog->setWindowTitle(QApplication::translate("CopyDialog", "Copy Games", 0));
        groupBox->setTitle(QApplication::translate("CopyDialog", "Copy:", 0));
        singleButton->setText(QApplication::translate("CopyDialog", "&Current game", 0));
        selectedButton->setText(QApplication::translate("CopyDialog", "Selected Games", 0));
        filterButton->setText(QApplication::translate("CopyDialog", "Games in &filter", 0));
        allButton->setText(QApplication::translate("CopyDialog", "&All games", 0));
        label->setText(QApplication::translate("CopyDialog", "&To:", 0));
    } // retranslateUi

};

namespace Ui {
    class CopyDialog: public Ui_CopyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COPYDIALOG_H
