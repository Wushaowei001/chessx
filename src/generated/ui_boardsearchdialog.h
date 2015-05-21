/********************************************************************************
** Form generated from reading UI file 'boardsearchdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOARDSEARCHDIALOG_H
#define UI_BOARDSEARCHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include "boardview.h"

QT_BEGIN_NAMESPACE

class Ui_BoardSearchDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    BoardView *boardView;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *btLeft;
    QToolButton *btRight;
    QSpacerItem *horizontalSpacer;
    QComboBox *modeCombo;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BoardSearchDialog)
    {
        if (BoardSearchDialog->objectName().isEmpty())
            BoardSearchDialog->setObjectName(QStringLiteral("BoardSearchDialog"));
        BoardSearchDialog->resize(488, 298);
        verticalLayout = new QVBoxLayout(BoardSearchDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        boardView = new BoardView(BoardSearchDialog);
        boardView->setObjectName(QStringLiteral("boardView"));

        horizontalLayout->addWidget(boardView);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        btLeft = new QToolButton(BoardSearchDialog);
        btLeft->setObjectName(QStringLiteral("btLeft"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/prev.png"), QSize(), QIcon::Normal, QIcon::Off);
        btLeft->setIcon(icon);

        horizontalLayout_3->addWidget(btLeft);

        btRight = new QToolButton(BoardSearchDialog);
        btRight->setObjectName(QStringLiteral("btRight"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        btRight->setIcon(icon1);

        horizontalLayout_3->addWidget(btRight);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        modeCombo = new QComboBox(BoardSearchDialog);
        modeCombo->setObjectName(QStringLiteral("modeCombo"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(modeCombo->sizePolicy().hasHeightForWidth());
        modeCombo->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(modeCombo);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        line = new QFrame(BoardSearchDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        buttonBox = new QDialogButtonBox(BoardSearchDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(BoardSearchDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), BoardSearchDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), BoardSearchDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(BoardSearchDialog);
    } // setupUi

    void retranslateUi(QDialog *BoardSearchDialog)
    {
        BoardSearchDialog->setWindowTitle(QApplication::translate("BoardSearchDialog", "Search Board", 0));
#ifndef QT_NO_TOOLTIP
        btLeft->setToolTip(QApplication::translate("BoardSearchDialog", "Previous", 0));
#endif // QT_NO_TOOLTIP
        btLeft->setText(QApplication::translate("BoardSearchDialog", "Previous", 0));
#ifndef QT_NO_TOOLTIP
        btRight->setToolTip(QApplication::translate("BoardSearchDialog", "Next", 0));
#endif // QT_NO_TOOLTIP
        btRight->setText(QApplication::translate("BoardSearchDialog", "Next", 0));
    } // retranslateUi

};

namespace Ui {
    class BoardSearchDialog: public Ui_BoardSearchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOARDSEARCHDIALOG_H
