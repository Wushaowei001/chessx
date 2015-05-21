/********************************************************************************
** Form generated from reading UI file 'boardsetup.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOARDSETUP_H
#define UI_BOARDSETUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "boardview.h"

QT_BEGIN_NAMESPACE

class Ui_BoardSetupDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *boardTab;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    BoardView *boardView;
    QGridLayout *buttonLayout;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *hLayout1;
    QLabel *label_4;
    QToolButton *toMoveButton;
    QLabel *label_3;
    QSpinBox *moveSpin;
    QSpacerItem *spacerItem;
    QToolButton *btFlipBoard;
    QToolButton *btFlipHorizontal;
    QToolButton *btFlipVertical;
    QToolButton *btSwapColor;
    QSpacerItem *horizontalSpacer_3;
    QDialogButtonBox *buttonBoxTools;
    QWidget *advancedTab;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QCheckBox *bkCastleCheck;
    QCheckBox *wqCastleCheck;
    QCheckBox *wkCastleCheck;
    QCheckBox *bqCastleCheck;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QComboBox *epCombo;
    QSpacerItem *spacerItem1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *halfmoveSpin;
    QSpacerItem *spacerItem2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QLabel *fenLabel;
    QLabel *humanFEN;
    QHBoxLayout *hboxLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BoardSetupDialog)
    {
        if (BoardSetupDialog->objectName().isEmpty())
            BoardSetupDialog->setObjectName(QStringLiteral("BoardSetupDialog"));
        BoardSetupDialog->resize(768, 507);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BoardSetupDialog->sizePolicy().hasHeightForWidth());
        BoardSetupDialog->setSizePolicy(sizePolicy);
        BoardSetupDialog->setMinimumSize(QSize(0, 0));
        verticalLayout_3 = new QVBoxLayout(BoardSetupDialog);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tabWidget = new QTabWidget(BoardSetupDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        boardTab = new QWidget();
        boardTab->setObjectName(QStringLiteral("boardTab"));
        sizePolicy.setHeightForWidth(boardTab->sizePolicy().hasHeightForWidth());
        boardTab->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(boardTab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        boardView = new BoardView(boardTab);
        boardView->setObjectName(QStringLiteral("boardView"));
        boardView->setEnabled(true);
        sizePolicy.setHeightForWidth(boardView->sizePolicy().hasHeightForWidth());
        boardView->setSizePolicy(sizePolicy);
        boardView->setMinimumSize(QSize(0, 0));
        boardView->setAcceptDrops(true);

        horizontalLayout_3->addWidget(boardView);

        buttonLayout = new QGridLayout();
        buttonLayout->setSpacing(6);
        buttonLayout->setObjectName(QStringLiteral("buttonLayout"));
        buttonLayout->setSizeConstraint(QLayout::SetDefaultConstraint);

        horizontalLayout_3->addLayout(buttonLayout);

        horizontalLayout_3->setStretch(0, 4);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_3);

        groupBox_3 = new QGroupBox(boardTab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        hLayout1 = new QHBoxLayout();
        hLayout1->setSpacing(6);
        hLayout1->setObjectName(QStringLiteral("hLayout1"));
        hLayout1->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        hLayout1->addWidget(label_4);

        toMoveButton = new QToolButton(groupBox_3);
        toMoveButton->setObjectName(QStringLiteral("toMoveButton"));

        hLayout1->addWidget(toMoveButton);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        hLayout1->addWidget(label_3);

        moveSpin = new QSpinBox(groupBox_3);
        moveSpin->setObjectName(QStringLiteral("moveSpin"));
        moveSpin->setMinimum(1);
        moveSpin->setMaximum(999);
        moveSpin->setValue(1);

        hLayout1->addWidget(moveSpin);

        spacerItem = new QSpacerItem(61, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayout1->addItem(spacerItem);

        btFlipBoard = new QToolButton(groupBox_3);
        btFlipBoard->setObjectName(QStringLiteral("btFlipBoard"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/flip_board.png"), QSize(), QIcon::Normal, QIcon::Off);
        btFlipBoard->setIcon(icon);

        hLayout1->addWidget(btFlipBoard);

        btFlipHorizontal = new QToolButton(groupBox_3);
        btFlipHorizontal->setObjectName(QStringLiteral("btFlipHorizontal"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/flip-horizontal.png"), QSize(), QIcon::Normal, QIcon::Off);
        btFlipHorizontal->setIcon(icon1);

        hLayout1->addWidget(btFlipHorizontal);

        btFlipVertical = new QToolButton(groupBox_3);
        btFlipVertical->setObjectName(QStringLiteral("btFlipVertical"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/flip-vertical.png"), QSize(), QIcon::Normal, QIcon::Off);
        btFlipVertical->setIcon(icon2);

        hLayout1->addWidget(btFlipVertical);

        btSwapColor = new QToolButton(groupBox_3);
        btSwapColor->setObjectName(QStringLiteral("btSwapColor"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/swap-color.png"), QSize(), QIcon::Normal, QIcon::Off);
        btSwapColor->setIcon(icon3);

        hLayout1->addWidget(btSwapColor);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hLayout1->addItem(horizontalSpacer_3);

        buttonBoxTools = new QDialogButtonBox(groupBox_3);
        buttonBoxTools->setObjectName(QStringLiteral("buttonBoxTools"));
        buttonBoxTools->setStandardButtons(QDialogButtonBox::Reset|QDialogButtonBox::RestoreDefaults);

        hLayout1->addWidget(buttonBoxTools);


        verticalLayout_4->addLayout(hLayout1);


        verticalLayout_2->addWidget(groupBox_3);

        tabWidget->addTab(boardTab, QString());
        advancedTab = new QWidget();
        advancedTab->setObjectName(QStringLiteral("advancedTab"));
        sizePolicy.setHeightForWidth(advancedTab->sizePolicy().hasHeightForWidth());
        advancedTab->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(advancedTab);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(advancedTab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        bkCastleCheck = new QCheckBox(groupBox);
        bkCastleCheck->setObjectName(QStringLiteral("bkCastleCheck"));

        gridLayout1->addWidget(bkCastleCheck, 0, 1, 1, 1);

        wqCastleCheck = new QCheckBox(groupBox);
        wqCastleCheck->setObjectName(QStringLiteral("wqCastleCheck"));

        gridLayout1->addWidget(wqCastleCheck, 1, 0, 1, 1);

        wkCastleCheck = new QCheckBox(groupBox);
        wkCastleCheck->setObjectName(QStringLiteral("wkCastleCheck"));

        gridLayout1->addWidget(wkCastleCheck, 0, 0, 1, 1);

        bqCastleCheck = new QCheckBox(groupBox);
        bqCastleCheck->setObjectName(QStringLiteral("bqCastleCheck"));

        gridLayout1->addWidget(bqCastleCheck, 1, 1, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(advancedTab);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        epCombo = new QComboBox(advancedTab);
        epCombo->insertItems(0, QStringList()
         << QStringLiteral("-")
         << QStringLiteral("a")
         << QStringLiteral("b")
         << QStringLiteral("c")
         << QStringLiteral("d")
         << QStringLiteral("e")
         << QStringLiteral("f")
         << QStringLiteral("g")
         << QStringLiteral("h")
        );
        epCombo->setObjectName(QStringLiteral("epCombo"));

        horizontalLayout->addWidget(epCombo);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerItem1);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(advancedTab);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        halfmoveSpin = new QSpinBox(advancedTab);
        halfmoveSpin->setObjectName(QStringLiteral("halfmoveSpin"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(halfmoveSpin->sizePolicy().hasHeightForWidth());
        halfmoveSpin->setSizePolicy(sizePolicy1);
        halfmoveSpin->setMinimum(0);
        halfmoveSpin->setMaximum(999);
        halfmoveSpin->setValue(0);

        horizontalLayout_2->addWidget(halfmoveSpin);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(spacerItem2);


        gridLayout->addLayout(horizontalLayout_2, 4, 0, 1, 2);

        tabWidget->addTab(advancedTab, QString());

        verticalLayout_3->addWidget(tabWidget);

        groupBox_2 = new QGroupBox(BoardSetupDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        fenLabel = new QLabel(groupBox_2);
        fenLabel->setObjectName(QStringLiteral("fenLabel"));
        fenLabel->setMinimumSize(QSize(400, 0));
        fenLabel->setFrameShape(QFrame::Panel);
        fenLabel->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(fenLabel);

        humanFEN = new QLabel(groupBox_2);
        humanFEN->setObjectName(QStringLiteral("humanFEN"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(humanFEN->sizePolicy().hasHeightForWidth());
        humanFEN->setSizePolicy(sizePolicy2);
        humanFEN->setMinimumSize(QSize(400, 60));
        humanFEN->setFrameShape(QFrame::Panel);
        humanFEN->setFrameShadow(QFrame::Sunken);
        humanFEN->setWordWrap(true);

        verticalLayout->addWidget(humanFEN);


        verticalLayout_3->addWidget(groupBox_2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        buttonBox = new QDialogButtonBox(BoardSetupDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        hboxLayout->addWidget(buttonBox);


        verticalLayout_3->addLayout(hboxLayout);

        QWidget::setTabOrder(wkCastleCheck, bkCastleCheck);
        QWidget::setTabOrder(bkCastleCheck, wqCastleCheck);
        QWidget::setTabOrder(wqCastleCheck, bqCastleCheck);
        QWidget::setTabOrder(bqCastleCheck, moveSpin);

        retranslateUi(BoardSetupDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), BoardSetupDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), BoardSetupDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(1);
        epCombo->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(BoardSetupDialog);
    } // setupUi

    void retranslateUi(QDialog *BoardSetupDialog)
    {
        BoardSetupDialog->setWindowTitle(QApplication::translate("BoardSetupDialog", "Setup position", 0));
        groupBox_3->setTitle(QApplication::translate("BoardSetupDialog", "Tools", 0));
        label_4->setText(QApplication::translate("BoardSetupDialog", "Side to move:", 0));
        label_3->setText(QApplication::translate("BoardSetupDialog", "Move:", 0));
#ifndef QT_NO_TOOLTIP
        btFlipBoard->setToolTip(QApplication::translate("BoardSetupDialog", "Flip board", 0));
#endif // QT_NO_TOOLTIP
        btFlipBoard->setText(QApplication::translate("BoardSetupDialog", "...", 0));
#ifndef QT_NO_TOOLTIP
        btFlipHorizontal->setToolTip(QApplication::translate("BoardSetupDialog", "Mirror left and right", 0));
#endif // QT_NO_TOOLTIP
        btFlipHorizontal->setText(QApplication::translate("BoardSetupDialog", "...", 0));
#ifndef QT_NO_TOOLTIP
        btFlipVertical->setToolTip(QApplication::translate("BoardSetupDialog", "Mirror top and bottom", 0));
#endif // QT_NO_TOOLTIP
        btFlipVertical->setText(QApplication::translate("BoardSetupDialog", "...", 0));
#ifndef QT_NO_TOOLTIP
        btSwapColor->setToolTip(QApplication::translate("BoardSetupDialog", "Change colors for all pieces", 0));
#endif // QT_NO_TOOLTIP
        btSwapColor->setText(QApplication::translate("BoardSetupDialog", "...", 0));
        tabWidget->setTabText(tabWidget->indexOf(boardTab), QApplication::translate("BoardSetupDialog", "Board", 0));
        groupBox->setTitle(QApplication::translate("BoardSetupDialog", "Castling rights", 0));
        bkCastleCheck->setText(QApplication::translate("BoardSetupDialog", "Black O-O", 0));
        wqCastleCheck->setText(QApplication::translate("BoardSetupDialog", "White O-O-O", 0));
        wkCastleCheck->setText(QApplication::translate("BoardSetupDialog", "White O-O", 0));
        bqCastleCheck->setText(QApplication::translate("BoardSetupDialog", "Black O-O-O", 0));
        label->setText(QApplication::translate("BoardSetupDialog", "En passant file:", 0));
        label_2->setText(QApplication::translate("BoardSetupDialog", "Halfmove clock:", 0));
        tabWidget->setTabText(tabWidget->indexOf(advancedTab), QApplication::translate("BoardSetupDialog", "&Advanced", 0));
        groupBox_2->setTitle(QApplication::translate("BoardSetupDialog", "FEN", 0));
        fenLabel->setText(QString());
        humanFEN->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BoardSetupDialog: public Ui_BoardSetupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOARDSETUP_H
