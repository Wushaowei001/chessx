/********************************************************************************
** Form generated from reading UI file 'quicksearch.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUICKSEARCH_H
#define UI_QUICKSEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_QuickSearchDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QHBoxLayout *hboxLayout;
    QDialogButtonBox *buttonBox;
    QComboBox *tagCombo;
    QComboBox *modeCombo;
    QLineEdit *valueEdit;

    void setupUi(QDialog *QuickSearchDialog)
    {
        if (QuickSearchDialog->objectName().isEmpty())
            QuickSearchDialog->setObjectName(QStringLiteral("QuickSearchDialog"));
        QuickSearchDialog->resize(392, 148);
        gridLayout = new QGridLayout(QuickSearchDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(QuickSearchDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(QuickSearchDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(QuickSearchDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        buttonBox = new QDialogButtonBox(QuickSearchDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        hboxLayout->addWidget(buttonBox);


        gridLayout->addLayout(hboxLayout, 3, 0, 1, 2);

        tagCombo = new QComboBox(QuickSearchDialog);
        tagCombo->setObjectName(QStringLiteral("tagCombo"));

        gridLayout->addWidget(tagCombo, 0, 1, 1, 1);

        modeCombo = new QComboBox(QuickSearchDialog);
        modeCombo->setObjectName(QStringLiteral("modeCombo"));

        gridLayout->addWidget(modeCombo, 2, 1, 1, 1);

        valueEdit = new QLineEdit(QuickSearchDialog);
        valueEdit->setObjectName(QStringLiteral("valueEdit"));

        gridLayout->addWidget(valueEdit, 1, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(tagCombo);
        label_3->setBuddy(modeCombo);
        label_2->setBuddy(valueEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tagCombo, valueEdit);
        QWidget::setTabOrder(valueEdit, modeCombo);

        retranslateUi(QuickSearchDialog);

        QMetaObject::connectSlotsByName(QuickSearchDialog);
    } // setupUi

    void retranslateUi(QDialog *QuickSearchDialog)
    {
        QuickSearchDialog->setWindowTitle(QApplication::translate("QuickSearchDialog", "Quick Tag Search", 0));
        label->setText(QApplication::translate("QuickSearchDialog", "&Tag:", 0));
        label_3->setText(QApplication::translate("QuickSearchDialog", "&Mode:", 0));
        label_2->setText(QApplication::translate("QuickSearchDialog", "&Value:", 0));
        valueEdit->setPlaceholderText(QApplication::translate("QuickSearchDialog", "Value or Range like 2000-2300", 0));
    } // retranslateUi

};

namespace Ui {
    class QuickSearchDialog: public Ui_QuickSearchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUICKSEARCH_H
