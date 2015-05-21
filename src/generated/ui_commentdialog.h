/********************************************************************************
** Form generated from reading UI file 'commentdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMENTDIALOG_H
#define UI_COMMENTDIALOG_H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "plaintextedit.h"

QT_BEGIN_NAMESPACE

class Ui_CommentDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    PlainTextEdit *textEdit;
    QVBoxLayout *verticalLayout_2;
    QToolButton *clearText;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QRadioButton *egtTime;
    QRadioButton *clkTime;
    QRadioButton *emtTime;
    QTimeEdit *timeEdit;
    QToolButton *clearTime;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CommentDialog)
    {
        if (CommentDialog->objectName().isEmpty())
            CommentDialog->setObjectName(QStringLiteral("CommentDialog"));
        CommentDialog->resize(440, 221);
        CommentDialog->setMinimumSize(QSize(0, 1));
        verticalLayout = new QVBoxLayout(CommentDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 12, -1, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        textEdit = new PlainTextEdit(CommentDialog);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setTabChangesFocus(true);

        horizontalLayout_2->addWidget(textEdit);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        clearText = new QToolButton(CommentDialog);
        clearText->setObjectName(QStringLiteral("clearText"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/text_clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearText->setIcon(icon);

        verticalLayout_2->addWidget(clearText);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout_2);

        groupBox = new QGroupBox(CommentDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        egtTime = new QRadioButton(groupBox);
        egtTime->setObjectName(QStringLiteral("egtTime"));

        horizontalLayout->addWidget(egtTime);

        clkTime = new QRadioButton(groupBox);
        clkTime->setObjectName(QStringLiteral("clkTime"));
        clkTime->setChecked(true);

        horizontalLayout->addWidget(clkTime);

        emtTime = new QRadioButton(groupBox);
        emtTime->setObjectName(QStringLiteral("emtTime"));

        horizontalLayout->addWidget(emtTime);

        timeEdit = new QTimeEdit(groupBox);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setCursor(QCursor(Qt::ArrowCursor));
        timeEdit->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        timeEdit->setDateTime(QDateTime(QDate(2000, 1, 1), QTime(0, 0, 0)));

        horizontalLayout->addWidget(timeEdit);

        clearTime = new QToolButton(groupBox);
        clearTime->setObjectName(QStringLiteral("clearTime"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/time_clear.png"), QSize(), QIcon::Normal, QIcon::On);
        clearTime->setIcon(icon1);

        horizontalLayout->addWidget(clearTime);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addWidget(groupBox);

        line = new QFrame(CommentDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        buttonBox = new QDialogButtonBox(CommentDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(CommentDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CommentDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CommentDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CommentDialog);
    } // setupUi

    void retranslateUi(QDialog *CommentDialog)
    {
        CommentDialog->setWindowTitle(QApplication::translate("CommentDialog", "Edit Comment", 0));
        clearText->setText(QString());
        groupBox->setTitle(QApplication::translate("CommentDialog", "Time", 0));
        egtTime->setText(QApplication::translate("CommentDialog", "Elapsed", 0));
        clkTime->setText(QApplication::translate("CommentDialog", "Clock", 0));
        emtTime->setText(QApplication::translate("CommentDialog", "Move", 0));
        timeEdit->setDisplayFormat(QApplication::translate("CommentDialog", "H:mm:ss", 0));
        clearTime->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CommentDialog: public Ui_CommentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMENTDIALOG_H
