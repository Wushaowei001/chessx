/********************************************************************************
** Form generated from reading UI file 'openingtreewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENINGTREEWIDGET_H
#define UI_OPENINGTREEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "tableview.h"

QT_BEGIN_NAMESPACE

class Ui_OpeningTreeWidget
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *Splitter;
    QWidget *LeftWidget;
    QVBoxLayout *verticalLayout_2;
    TableView *OpeningTreeView;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *filterGames;
    QCheckBox *makeMove;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *btPin;
    QComboBox *sourceSelector;
    QGroupBox *gbProgress;
    QHBoxLayout *horizontalLayout_3;
    QProgressBar *progress;
    QToolButton *btUndo;
    QWidget *RightWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *OpeningBoardWidget;

    void setupUi(QWidget *OpeningTreeWidget)
    {
        if (OpeningTreeWidget->objectName().isEmpty())
            OpeningTreeWidget->setObjectName(QStringLiteral("OpeningTreeWidget"));
        OpeningTreeWidget->resize(912, 469);
        verticalLayout = new QVBoxLayout(OpeningTreeWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Splitter = new QSplitter(OpeningTreeWidget);
        Splitter->setObjectName(QStringLiteral("Splitter"));
        Splitter->setOrientation(Qt::Horizontal);
        Splitter->setHandleWidth(4);
        LeftWidget = new QWidget(Splitter);
        LeftWidget->setObjectName(QStringLiteral("LeftWidget"));
        verticalLayout_2 = new QVBoxLayout(LeftWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, 6, -1);
        OpeningTreeView = new TableView(LeftWidget);
        OpeningTreeView->setObjectName(QStringLiteral("OpeningTreeView"));

        verticalLayout_2->addWidget(OpeningTreeView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        groupBox_2 = new QGroupBox(LeftWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        filterGames = new QCheckBox(groupBox_2);
        filterGames->setObjectName(QStringLiteral("filterGames"));

        verticalLayout_4->addWidget(filterGames);

        makeMove = new QCheckBox(groupBox_2);
        makeMove->setObjectName(QStringLiteral("makeMove"));

        verticalLayout_4->addWidget(makeMove);


        horizontalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(LeftWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btPin = new QToolButton(groupBox);
        btPin->setObjectName(QStringLiteral("btPin"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/pin.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btPin->setIcon(icon);
        btPin->setCheckable(true);

        horizontalLayout_2->addWidget(btPin);

        sourceSelector = new QComboBox(groupBox);
        sourceSelector->setObjectName(QStringLiteral("sourceSelector"));

        horizontalLayout_2->addWidget(sourceSelector);


        horizontalLayout->addWidget(groupBox);

        gbProgress = new QGroupBox(LeftWidget);
        gbProgress->setObjectName(QStringLiteral("gbProgress"));
        horizontalLayout_3 = new QHBoxLayout(gbProgress);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        progress = new QProgressBar(gbProgress);
        progress->setObjectName(QStringLiteral("progress"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(progress->sizePolicy().hasHeightForWidth());
        progress->setSizePolicy(sizePolicy1);
        progress->setValue(50);

        horizontalLayout_3->addWidget(progress);

        btUndo = new QToolButton(gbProgress);
        btUndo->setObjectName(QStringLiteral("btUndo"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        btUndo->setIcon(icon1);

        horizontalLayout_3->addWidget(btUndo);


        horizontalLayout->addWidget(gbProgress);


        verticalLayout_2->addLayout(horizontalLayout);

        Splitter->addWidget(LeftWidget);
        RightWidget = new QWidget(Splitter);
        RightWidget->setObjectName(QStringLiteral("RightWidget"));
        verticalLayout_3 = new QVBoxLayout(RightWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, -1, -1, -1);
        OpeningBoardWidget = new QVBoxLayout();
        OpeningBoardWidget->setObjectName(QStringLiteral("OpeningBoardWidget"));

        verticalLayout_3->addLayout(OpeningBoardWidget);

        Splitter->addWidget(RightWidget);

        verticalLayout->addWidget(Splitter);


        retranslateUi(OpeningTreeWidget);

        QMetaObject::connectSlotsByName(OpeningTreeWidget);
    } // setupUi

    void retranslateUi(QWidget *OpeningTreeWidget)
    {
        OpeningTreeWidget->setWindowTitle(QApplication::translate("OpeningTreeWidget", "Form", 0));
        groupBox_2->setTitle(QApplication::translate("OpeningTreeWidget", "Target", 0));
        filterGames->setText(QApplication::translate("OpeningTreeWidget", "Filter games", 0));
        makeMove->setText(QApplication::translate("OpeningTreeWidget", "Board", 0));
        groupBox->setTitle(QApplication::translate("OpeningTreeWidget", "Source", 0));
#ifndef QT_NO_TOOLTIP
        btPin->setToolTip(QApplication::translate("OpeningTreeWidget", "Pin", 0));
#endif // QT_NO_TOOLTIP
        btPin->setText(QApplication::translate("OpeningTreeWidget", "...", 0));
        sourceSelector->clear();
        sourceSelector->insertItems(0, QStringList()
         << QApplication::translate("OpeningTreeWidget", "Database", 0)
         << QApplication::translate("OpeningTreeWidget", "Filter", 0)
        );
        gbProgress->setTitle(QApplication::translate("OpeningTreeWidget", "Progress", 0));
        btUndo->setText(QApplication::translate("OpeningTreeWidget", "Undo", 0));
    } // retranslateUi

};

namespace Ui {
    class OpeningTreeWidget: public Ui_OpeningTreeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENINGTREEWIDGET_H
