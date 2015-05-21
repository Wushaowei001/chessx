/********************************************************************************
** Form generated from reading UI file 'recipientaddressdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIPIENTADDRESSDIALOG_H
#define UI_RECIPIENTADDRESSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RecipientAddressDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_1;
    QLineEdit *recipientEMail;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RecipientAddressDialog)
    {
        if (RecipientAddressDialog->objectName().isEmpty())
            RecipientAddressDialog->setObjectName(QStringLiteral("RecipientAddressDialog"));
        RecipientAddressDialog->resize(488, 200);
        verticalLayout = new QVBoxLayout(RecipientAddressDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(RecipientAddressDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_1 = new QLabel(groupBox);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setText(QStringLiteral("Receiver"));

        horizontalLayout_3->addWidget(label_1);

        recipientEMail = new QLineEdit(groupBox);
        recipientEMail->setObjectName(QStringLiteral("recipientEMail"));

        horizontalLayout_3->addWidget(recipientEMail);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        line = new QFrame(RecipientAddressDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        buttonBox = new QDialogButtonBox(RecipientAddressDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(RecipientAddressDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RecipientAddressDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RecipientAddressDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RecipientAddressDialog);
    } // setupUi

    void retranslateUi(QDialog *RecipientAddressDialog)
    {
        RecipientAddressDialog->setWindowTitle(QApplication::translate("RecipientAddressDialog", "Recipient Address", 0));
        groupBox->setTitle(QApplication::translate("RecipientAddressDialog", "Mail", 0));
    } // retranslateUi

};

namespace Ui {
    class RecipientAddressDialog: public Ui_RecipientAddressDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPIENTADDRESSDIALOG_H
