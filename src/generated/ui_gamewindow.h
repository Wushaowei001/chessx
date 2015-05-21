/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "chessbrowser.h"

QT_BEGIN_NAMESPACE

class Ui_GameWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QSplitter *browserSplitter;
    ChessBrowser *chessBrowser;
    QWidget *boxWidget;
    QVBoxLayout *verticalLayout;
    QSplitter *toolBoxSplitter;
    QListWidget *listVariations;
    QToolBox *toolBox;
    QWidget *boxPageMove;
    QGridLayout *layoutPageMove;
    QWidget *boxPageEval;
    QGridLayout *layoutPageEval;
    QWidget *boxPageOther;
    QGridLayout *layoutPageOther;

    void setupUi(QMainWindow *GameWindow)
    {
        if (GameWindow->objectName().isEmpty())
            GameWindow->setObjectName(QStringLiteral("GameWindow"));
        GameWindow->resize(800, 600);
        centralwidget = new QWidget(GameWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        browserSplitter = new QSplitter(centralwidget);
        browserSplitter->setObjectName(QStringLiteral("browserSplitter"));
        browserSplitter->setOrientation(Qt::Horizontal);
        browserSplitter->setHandleWidth(4);
        chessBrowser = new ChessBrowser(browserSplitter);
        chessBrowser->setObjectName(QStringLiteral("chessBrowser"));
        browserSplitter->addWidget(chessBrowser);
        boxWidget = new QWidget(browserSplitter);
        boxWidget->setObjectName(QStringLiteral("boxWidget"));
        verticalLayout = new QVBoxLayout(boxWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, -1);
        toolBoxSplitter = new QSplitter(boxWidget);
        toolBoxSplitter->setObjectName(QStringLiteral("toolBoxSplitter"));
        toolBoxSplitter->setOrientation(Qt::Vertical);
        toolBoxSplitter->setHandleWidth(4);
        listVariations = new QListWidget(toolBoxSplitter);
        listVariations->setObjectName(QStringLiteral("listVariations"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listVariations->sizePolicy().hasHeightForWidth());
        listVariations->setSizePolicy(sizePolicy);
        listVariations->setFrameShape(QFrame::StyledPanel);
        listVariations->setFrameShadow(QFrame::Plain);
        toolBoxSplitter->addWidget(listVariations);
        toolBox = new QToolBox(toolBoxSplitter);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolBox->sizePolicy().hasHeightForWidth());
        toolBox->setSizePolicy(sizePolicy1);
        boxPageMove = new QWidget();
        boxPageMove->setObjectName(QStringLiteral("boxPageMove"));
        boxPageMove->setGeometry(QRect(0, 0, 386, 168));
        layoutPageMove = new QGridLayout(boxPageMove);
        layoutPageMove->setObjectName(QStringLiteral("layoutPageMove"));
        toolBox->addItem(boxPageMove, QStringLiteral("Move"));
        boxPageEval = new QWidget();
        boxPageEval->setObjectName(QStringLiteral("boxPageEval"));
        boxPageEval->setGeometry(QRect(0, 0, 386, 168));
        layoutPageEval = new QGridLayout(boxPageEval);
        layoutPageEval->setObjectName(QStringLiteral("layoutPageEval"));
        toolBox->addItem(boxPageEval, QStringLiteral("Evaluation"));
        boxPageOther = new QWidget();
        boxPageOther->setObjectName(QStringLiteral("boxPageOther"));
        boxPageOther->setGeometry(QRect(0, 0, 386, 168));
        layoutPageOther = new QGridLayout(boxPageOther);
        layoutPageOther->setObjectName(QStringLiteral("layoutPageOther"));
        toolBox->addItem(boxPageOther, QStringLiteral("Other"));
        toolBoxSplitter->addWidget(toolBox);

        verticalLayout->addWidget(toolBoxSplitter);

        browserSplitter->addWidget(boxWidget);

        verticalLayout_2->addWidget(browserSplitter);

        GameWindow->setCentralWidget(centralwidget);

        retranslateUi(GameWindow);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(GameWindow);
    } // setupUi

    void retranslateUi(QMainWindow *GameWindow)
    {
        GameWindow->setWindowTitle(QApplication::translate("GameWindow", "MainWindow", 0));
        toolBox->setItemText(toolBox->indexOf(boxPageMove), QApplication::translate("GameWindow", "Move", 0));
        toolBox->setItemText(toolBox->indexOf(boxPageEval), QApplication::translate("GameWindow", "Evaluation", 0));
        toolBox->setItemText(toolBox->indexOf(boxPageOther), QApplication::translate("GameWindow", "Other", 0));
    } // retranslateUi

};

namespace Ui {
    class GameWindow: public Ui_GameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
