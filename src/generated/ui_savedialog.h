/********************************************************************************
** Form generated from reading UI file 'savedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEDIALOG_H
#define UI_SAVEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_SaveDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QLabel *textLabel2_2;
    QLabel *textLabel2;
    QLineEdit *whiteEloEdit;
    QLabel *textLabel1;
    QLineEdit *blackEdit;
    QLineEdit *whiteEdit;
    QLabel *textLabel1_2;
    QLineEdit *blackEloEdit;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *whiteTeamEdit;
    QLineEdit *blackTeamEdit;
    QGroupBox *groupBox_3;
    QGridLayout *gridlayout4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QTimeEdit *whiteStartTime;
    QSpacerItem *horizontalSpacer;
    QTimeEdit *blackStartTime;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *timeControl;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout2;
    QLineEdit *eventDateEdit;
    QLineEdit *siteEdit;
    QLabel *textLabel2_5;
    QLineEdit *eventEdit;
    QLabel *textLabel1_2_2;
    QLabel *textLabel1_2_3;
    QGroupBox *gameGroupBox;
    QGridLayout *gridLayout3;
    QLineEdit *roundEdit;
    QLabel *textLabel2_3;
    QLabel *textLabel2_4;
    QLineEdit *dateEdit;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QRadioButton *result1Button;
    QRadioButton *result5Button;
    QRadioButton *result0Button;
    QRadioButton *resultNoneButton;
    QSpacerItem *spacerItem1;
    QFrame *line;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem2;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *SaveDialog)
    {
        if (SaveDialog->objectName().isEmpty())
            SaveDialog->setObjectName(QStringLiteral("SaveDialog"));
        SaveDialog->resize(719, 567);
        SaveDialog->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(SaveDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(SaveDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        textLabel2_2 = new QLabel(groupBox);
        textLabel2_2->setObjectName(QStringLiteral("textLabel2_2"));

        gridLayout1->addWidget(textLabel2_2, 2, 2, 1, 1);

        textLabel2 = new QLabel(groupBox);
        textLabel2->setObjectName(QStringLiteral("textLabel2"));

        gridLayout1->addWidget(textLabel2, 0, 2, 1, 1);

        whiteEloEdit = new QLineEdit(groupBox);
        whiteEloEdit->setObjectName(QStringLiteral("whiteEloEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(whiteEloEdit->sizePolicy().hasHeightForWidth());
        whiteEloEdit->setSizePolicy(sizePolicy);
        whiteEloEdit->setMaximumSize(QSize(80, 32767));

        gridLayout1->addWidget(whiteEloEdit, 0, 3, 1, 1);

        textLabel1 = new QLabel(groupBox);
        textLabel1->setObjectName(QStringLiteral("textLabel1"));

        gridLayout1->addWidget(textLabel1, 0, 0, 1, 1);

        blackEdit = new QLineEdit(groupBox);
        blackEdit->setObjectName(QStringLiteral("blackEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(blackEdit->sizePolicy().hasHeightForWidth());
        blackEdit->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(blackEdit, 2, 1, 1, 1);

        whiteEdit = new QLineEdit(groupBox);
        whiteEdit->setObjectName(QStringLiteral("whiteEdit"));
        sizePolicy1.setHeightForWidth(whiteEdit->sizePolicy().hasHeightForWidth());
        whiteEdit->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(whiteEdit, 0, 1, 1, 1);

        textLabel1_2 = new QLabel(groupBox);
        textLabel1_2->setObjectName(QStringLiteral("textLabel1_2"));

        gridLayout1->addWidget(textLabel1_2, 2, 0, 1, 1);

        blackEloEdit = new QLineEdit(groupBox);
        blackEloEdit->setObjectName(QStringLiteral("blackEloEdit"));
        sizePolicy.setHeightForWidth(blackEloEdit->sizePolicy().hasHeightForWidth());
        blackEloEdit->setSizePolicy(sizePolicy);
        blackEloEdit->setMaximumSize(QSize(80, 32767));

        gridLayout1->addWidget(blackEloEdit, 2, 3, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout1->addWidget(label_5, 1, 0, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout1->addWidget(label_6, 3, 0, 1, 1);

        whiteTeamEdit = new QLineEdit(groupBox);
        whiteTeamEdit->setObjectName(QStringLiteral("whiteTeamEdit"));

        gridLayout1->addWidget(whiteTeamEdit, 1, 1, 1, 1);

        blackTeamEdit = new QLineEdit(groupBox);
        blackTeamEdit->setObjectName(QStringLiteral("blackTeamEdit"));

        gridLayout1->addWidget(blackTeamEdit, 3, 1, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(SaveDialog);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridlayout4 = new QGridLayout(groupBox_3);
        gridlayout4->setSpacing(6);
        gridlayout4->setContentsMargins(11, 11, 11, 11);
        gridlayout4->setObjectName(QStringLiteral("gridlayout4"));
        gridlayout4->setVerticalSpacing(6);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        whiteStartTime = new QTimeEdit(groupBox_3);
        whiteStartTime->setObjectName(QStringLiteral("whiteStartTime"));

        horizontalLayout->addWidget(whiteStartTime);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        blackStartTime = new QTimeEdit(groupBox_3);
        blackStartTime->setObjectName(QStringLiteral("blackStartTime"));
        blackStartTime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(blackStartTime);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_3);


        gridlayout4->addLayout(horizontalLayout, 5, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        timeControl = new QLineEdit(groupBox_3);
        timeControl->setObjectName(QStringLiteral("timeControl"));

        horizontalLayout_2->addWidget(timeControl);


        gridlayout4->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_3, 3, 0, 1, 1);

        groupBox_2 = new QGroupBox(SaveDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout2 = new QGridLayout(groupBox_2);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        eventDateEdit = new QLineEdit(groupBox_2);
        eventDateEdit->setObjectName(QStringLiteral("eventDateEdit"));
        sizePolicy.setHeightForWidth(eventDateEdit->sizePolicy().hasHeightForWidth());
        eventDateEdit->setSizePolicy(sizePolicy);
        eventDateEdit->setMaximumSize(QSize(160, 32767));

        gridLayout2->addWidget(eventDateEdit, 1, 3, 1, 1);

        siteEdit = new QLineEdit(groupBox_2);
        siteEdit->setObjectName(QStringLiteral("siteEdit"));
        sizePolicy1.setHeightForWidth(siteEdit->sizePolicy().hasHeightForWidth());
        siteEdit->setSizePolicy(sizePolicy1);

        gridLayout2->addWidget(siteEdit, 1, 1, 1, 1);

        textLabel2_5 = new QLabel(groupBox_2);
        textLabel2_5->setObjectName(QStringLiteral("textLabel2_5"));

        gridLayout2->addWidget(textLabel2_5, 1, 2, 1, 1);

        eventEdit = new QLineEdit(groupBox_2);
        eventEdit->setObjectName(QStringLiteral("eventEdit"));
        sizePolicy1.setHeightForWidth(eventEdit->sizePolicy().hasHeightForWidth());
        eventEdit->setSizePolicy(sizePolicy1);

        gridLayout2->addWidget(eventEdit, 0, 1, 1, 3);

        textLabel1_2_2 = new QLabel(groupBox_2);
        textLabel1_2_2->setObjectName(QStringLiteral("textLabel1_2_2"));

        gridLayout2->addWidget(textLabel1_2_2, 1, 0, 1, 1);

        textLabel1_2_3 = new QLabel(groupBox_2);
        textLabel1_2_3->setObjectName(QStringLiteral("textLabel1_2_3"));

        gridLayout2->addWidget(textLabel1_2_3, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 1);

        gameGroupBox = new QGroupBox(SaveDialog);
        gameGroupBox->setObjectName(QStringLiteral("gameGroupBox"));
        gridLayout3 = new QGridLayout(gameGroupBox);
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(11, 11, 11, 11);
        gridLayout3->setObjectName(QStringLiteral("gridLayout3"));
        roundEdit = new QLineEdit(gameGroupBox);
        roundEdit->setObjectName(QStringLiteral("roundEdit"));
        sizePolicy.setHeightForWidth(roundEdit->sizePolicy().hasHeightForWidth());
        roundEdit->setSizePolicy(sizePolicy);
        roundEdit->setMaximumSize(QSize(80, 32767));

        gridLayout3->addWidget(roundEdit, 0, 1, 1, 1);

        textLabel2_3 = new QLabel(gameGroupBox);
        textLabel2_3->setObjectName(QStringLiteral("textLabel2_3"));

        gridLayout3->addWidget(textLabel2_3, 0, 0, 1, 1);

        textLabel2_4 = new QLabel(gameGroupBox);
        textLabel2_4->setObjectName(QStringLiteral("textLabel2_4"));

        gridLayout3->addWidget(textLabel2_4, 0, 3, 1, 1);

        dateEdit = new QLineEdit(gameGroupBox);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        sizePolicy.setHeightForWidth(dateEdit->sizePolicy().hasHeightForWidth());
        dateEdit->setSizePolicy(sizePolicy);
        dateEdit->setMaximumSize(QSize(160, 32767));

        gridLayout3->addWidget(dateEdit, 0, 4, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem, 0, 2, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        label = new QLabel(gameGroupBox);
        label->setObjectName(QStringLiteral("label"));

        hboxLayout->addWidget(label);

        result1Button = new QRadioButton(gameGroupBox);
        result1Button->setObjectName(QStringLiteral("result1Button"));
        result1Button->setText(QStringLiteral("1-0"));

        hboxLayout->addWidget(result1Button);

        result5Button = new QRadioButton(gameGroupBox);
        result5Button->setObjectName(QStringLiteral("result5Button"));
        result5Button->setText(QStringLiteral("1/2-1/2"));

        hboxLayout->addWidget(result5Button);

        result0Button = new QRadioButton(gameGroupBox);
        result0Button->setObjectName(QStringLiteral("result0Button"));
        result0Button->setText(QStringLiteral("0-1"));

        hboxLayout->addWidget(result0Button);

        resultNoneButton = new QRadioButton(gameGroupBox);
        resultNoneButton->setObjectName(QStringLiteral("resultNoneButton"));
        resultNoneButton->setText(QStringLiteral("*"));
        resultNoneButton->setChecked(true);

        hboxLayout->addWidget(resultNoneButton);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        gridLayout3->addLayout(hboxLayout, 1, 0, 1, 4);


        gridLayout->addWidget(gameGroupBox, 2, 0, 1, 1);

        line = new QFrame(SaveDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 5, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        spacerItem2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem2);

        buttonBox = new QDialogButtonBox(SaveDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Discard|QDialogButtonBox::Ok);

        hboxLayout1->addWidget(buttonBox);


        gridLayout->addLayout(hboxLayout1, 7, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        textLabel1->setBuddy(whiteEdit);
        textLabel1_2->setBuddy(blackEdit);
        textLabel2_5->setBuddy(eventDateEdit);
        textLabel1_2_2->setBuddy(siteEdit);
        textLabel1_2_3->setBuddy(eventEdit);
        textLabel2_3->setBuddy(roundEdit);
        textLabel2_4->setBuddy(dateEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(whiteEdit, whiteEloEdit);
        QWidget::setTabOrder(whiteEloEdit, blackEdit);
        QWidget::setTabOrder(blackEdit, blackEloEdit);
        QWidget::setTabOrder(blackEloEdit, eventEdit);
        QWidget::setTabOrder(eventEdit, siteEdit);
        QWidget::setTabOrder(siteEdit, eventDateEdit);
        QWidget::setTabOrder(eventDateEdit, roundEdit);
        QWidget::setTabOrder(roundEdit, dateEdit);
        QWidget::setTabOrder(dateEdit, result1Button);
        QWidget::setTabOrder(result1Button, result5Button);
        QWidget::setTabOrder(result5Button, result0Button);
        QWidget::setTabOrder(result0Button, resultNoneButton);

        retranslateUi(SaveDialog);

        QMetaObject::connectSlotsByName(SaveDialog);
    } // setupUi

    void retranslateUi(QDialog *SaveDialog)
    {
        SaveDialog->setWindowTitle(QApplication::translate("SaveDialog", "Save Game", 0));
        groupBox->setTitle(QApplication::translate("SaveDialog", "Players", 0));
        textLabel2_2->setText(QApplication::translate("SaveDialog", "Elo:", 0));
        textLabel2->setText(QApplication::translate("SaveDialog", "Elo:", 0));
        textLabel1->setText(QApplication::translate("SaveDialog", "&White:", 0));
        textLabel1_2->setText(QApplication::translate("SaveDialog", "&Black:", 0));
        label_5->setText(QApplication::translate("SaveDialog", "Team", 0));
        label_6->setText(QApplication::translate("SaveDialog", "Team", 0));
        whiteTeamEdit->setPlaceholderText(QApplication::translate("SaveDialog", "White Team", 0));
        blackTeamEdit->setPlaceholderText(QApplication::translate("SaveDialog", "Black Team", 0));
        groupBox_3->setTitle(QApplication::translate("SaveDialog", "Time Control", 0));
        label_2->setText(QApplication::translate("SaveDialog", "White Start Time", 0));
        whiteStartTime->setDisplayFormat(QApplication::translate("SaveDialog", "H:mm:ss", 0));
        blackStartTime->setDisplayFormat(QApplication::translate("SaveDialog", "H:mm:ss", 0));
        label_3->setText(QApplication::translate("SaveDialog", "Black Start Time", 0));
        label_4->setText(QApplication::translate("SaveDialog", "Time Control", 0));
        timeControl->setPlaceholderText(QApplication::translate("SaveDialog", "e.g. 40/7200:3600 for 2h/40 moves + 1h", 0));
        groupBox_2->setTitle(QApplication::translate("SaveDialog", "Tournament", 0));
        textLabel2_5->setText(QApplication::translate("SaveDialog", "E&vent date:", 0));
        textLabel1_2_2->setText(QApplication::translate("SaveDialog", "&Site:", 0));
        textLabel1_2_3->setText(QApplication::translate("SaveDialog", "&Event:", 0));
        gameGroupBox->setTitle(QApplication::translate("SaveDialog", "Game Information", 0));
        textLabel2_3->setText(QApplication::translate("SaveDialog", "&Round:", 0));
        textLabel2_4->setText(QApplication::translate("SaveDialog", "&Date:", 0));
        label->setText(QApplication::translate("SaveDialog", "Result:", 0));
    } // retranslateUi

};

namespace Ui {
    class SaveDialog: public Ui_SaveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEDIALOG_H
