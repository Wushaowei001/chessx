/********************************************************************************
** Form generated from reading UI file 'ficsconsole.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FICSCONSOLE_H
#define UI_FICSCONSOLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FicsConsole
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tabMessages;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *layout_message_1;
    QVBoxLayout *layout_message_11;
    QPlainTextEdit *textIn;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *layout_message_111;
    QLineEdit *sayMessage;
    QToolButton *btSay;
    QVBoxLayout *layout_message_12;
    QDialogButtonBox *btBoxMessage;
    QFrame *line_2;
    QHBoxLayout *layout_message_121;
    QLabel *label_3;
    QLabel *timeWhite;
    QHBoxLayout *layout_message_122;
    QLabel *label_4;
    QLabel *timeBlack;
    QWidget *tabHistory;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_16;
    QListWidget *listHistory;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_15;
    QListWidget *listFinger;
    QWidget *tabGames;
    QVBoxLayout *verticalLayout_4;
    QListWidget *listGames;
    QWidget *tabRelay;
    QVBoxLayout *verticalLayout_6;
    QListWidget *listRelay;
    QWidget *tabPuzzle;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *layout_puzzle;
    QListWidget *listPuzzle;
    QDialogButtonBox *btBoxPuzzle;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_9;
    QListWidget *listPuzzlebotMessages;
    QWidget *tabPlayers;
    QVBoxLayout *verticalLayout_5;
    QTableWidget *listPlayers;
    QWidget *tabSeeks;
    QVBoxLayout *verticalLayout_8;
    QSplitter *splitter;
    QGroupBox *groupBoxSeek;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *layout_seek_1;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_18;
    QRadioButton *btLightning;
    QRadioButton *btBlitz;
    QRadioButton *btStandard;
    QVBoxLayout *verticalLayout_10;
    QToolButton *ratedOnly;
    QToolButton *disableComputer;
    QListWidget *listSeeks;
    QHBoxLayout *layout_seek_2;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_17;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label;
    QSpinBox *seekTime;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_2;
    QSpinBox *seekIncrement;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_19;
    QSpinBox *eloMin;
    QSpinBox *eloMax;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_20;
    QComboBox *cbRated;
    QToolButton *btSeek;
    QGroupBox *groupBoxNoPlay;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *layout_noplay;
    QLineEdit *editNoPlay;
    QToolButton *btAddNoPlay;
    QListWidget *listNoPlay;
    QFrame *line;
    QLineEdit *textOut;

    void setupUi(QWidget *FicsConsole)
    {
        if (FicsConsole->objectName().isEmpty())
            FicsConsole->setObjectName(QStringLiteral("FicsConsole"));
        FicsConsole->resize(671, 402);
        verticalLayout_2 = new QVBoxLayout(FicsConsole);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tabWidget = new QTabWidget(FicsConsole);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        tabMessages = new QWidget();
        tabMessages->setObjectName(QStringLiteral("tabMessages"));
        verticalLayout = new QVBoxLayout(tabMessages);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        layout_message_1 = new QHBoxLayout();
        layout_message_1->setObjectName(QStringLiteral("layout_message_1"));
        layout_message_11 = new QVBoxLayout();
        layout_message_11->setObjectName(QStringLiteral("layout_message_11"));
        textIn = new QPlainTextEdit(tabMessages);
        textIn->setObjectName(QStringLiteral("textIn"));
        textIn->setReadOnly(true);

        layout_message_11->addWidget(textIn);

        groupBox_4 = new QGroupBox(tabMessages);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        verticalLayout_11 = new QVBoxLayout(groupBox_4);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        layout_message_111 = new QHBoxLayout();
        layout_message_111->setObjectName(QStringLiteral("layout_message_111"));
        sayMessage = new QLineEdit(groupBox_4);
        sayMessage->setObjectName(QStringLiteral("sayMessage"));

        layout_message_111->addWidget(sayMessage);

        btSay = new QToolButton(groupBox_4);
        btSay->setObjectName(QStringLiteral("btSay"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/forward.png"), QSize(), QIcon::Normal, QIcon::Off);
        btSay->setIcon(icon);

        layout_message_111->addWidget(btSay);


        verticalLayout_11->addLayout(layout_message_111);


        layout_message_11->addWidget(groupBox_4);


        layout_message_1->addLayout(layout_message_11);

        layout_message_12 = new QVBoxLayout();
        layout_message_12->setObjectName(QStringLiteral("layout_message_12"));
        btBoxMessage = new QDialogButtonBox(tabMessages);
        btBoxMessage->setObjectName(QStringLiteral("btBoxMessage"));
        btBoxMessage->setOrientation(Qt::Vertical);
        btBoxMessage->setStandardButtons(QDialogButtonBox::NoButton);

        layout_message_12->addWidget(btBoxMessage);

        line_2 = new QFrame(tabMessages);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        layout_message_12->addWidget(line_2);

        layout_message_121 = new QHBoxLayout();
        layout_message_121->setObjectName(QStringLiteral("layout_message_121"));
        label_3 = new QLabel(tabMessages);
        label_3->setObjectName(QStringLiteral("label_3"));

        layout_message_121->addWidget(label_3);

        timeWhite = new QLabel(tabMessages);
        timeWhite->setObjectName(QStringLiteral("timeWhite"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(timeWhite->sizePolicy().hasHeightForWidth());
        timeWhite->setSizePolicy(sizePolicy);
        timeWhite->setFrameShape(QFrame::Panel);
        timeWhite->setFrameShadow(QFrame::Sunken);
        timeWhite->setText(QStringLiteral(""));

        layout_message_121->addWidget(timeWhite);


        layout_message_12->addLayout(layout_message_121);

        layout_message_122 = new QHBoxLayout();
        layout_message_122->setObjectName(QStringLiteral("layout_message_122"));
        label_4 = new QLabel(tabMessages);
        label_4->setObjectName(QStringLiteral("label_4"));

        layout_message_122->addWidget(label_4);

        timeBlack = new QLabel(tabMessages);
        timeBlack->setObjectName(QStringLiteral("timeBlack"));
        sizePolicy.setHeightForWidth(timeBlack->sizePolicy().hasHeightForWidth());
        timeBlack->setSizePolicy(sizePolicy);
        timeBlack->setFrameShape(QFrame::Panel);
        timeBlack->setFrameShadow(QFrame::Sunken);
        timeBlack->setText(QStringLiteral(""));

        layout_message_122->addWidget(timeBlack);


        layout_message_12->addLayout(layout_message_122);


        layout_message_1->addLayout(layout_message_12);

        layout_message_1->setStretch(0, 2);
        layout_message_1->setStretch(1, 1);

        verticalLayout->addLayout(layout_message_1);

        tabWidget->addTab(tabMessages, QString());
        tabHistory = new QWidget();
        tabHistory->setObjectName(QStringLiteral("tabHistory"));
        verticalLayout_3 = new QVBoxLayout(tabHistory);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox_7 = new QGroupBox(tabHistory);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        verticalLayout_16 = new QVBoxLayout(groupBox_7);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        listHistory = new QListWidget(groupBox_7);
        listHistory->setObjectName(QStringLiteral("listHistory"));
        listHistory->setContextMenuPolicy(Qt::CustomContextMenu);
        listHistory->setAlternatingRowColors(true);

        verticalLayout_16->addWidget(listHistory);


        verticalLayout_3->addWidget(groupBox_7);

        groupBox_6 = new QGroupBox(tabHistory);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        verticalLayout_15 = new QVBoxLayout(groupBox_6);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        listFinger = new QListWidget(groupBox_6);
        listFinger->setObjectName(QStringLiteral("listFinger"));
        listFinger->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout_15->addWidget(listFinger);


        verticalLayout_3->addWidget(groupBox_6);

        tabWidget->addTab(tabHistory, QString());
        tabGames = new QWidget();
        tabGames->setObjectName(QStringLiteral("tabGames"));
        verticalLayout_4 = new QVBoxLayout(tabGames);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        listGames = new QListWidget(tabGames);
        listGames->setObjectName(QStringLiteral("listGames"));
        listGames->setContextMenuPolicy(Qt::CustomContextMenu);
        listGames->setAlternatingRowColors(true);

        verticalLayout_4->addWidget(listGames);

        tabWidget->addTab(tabGames, QString());
        tabRelay = new QWidget();
        tabRelay->setObjectName(QStringLiteral("tabRelay"));
        verticalLayout_6 = new QVBoxLayout(tabRelay);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        listRelay = new QListWidget(tabRelay);
        listRelay->setObjectName(QStringLiteral("listRelay"));
        listRelay->setContextMenuPolicy(Qt::CustomContextMenu);
        listRelay->setAlternatingRowColors(true);

        verticalLayout_6->addWidget(listRelay);

        tabWidget->addTab(tabRelay, QString());
        tabPuzzle = new QWidget();
        tabPuzzle->setObjectName(QStringLiteral("tabPuzzle"));
        verticalLayout_7 = new QVBoxLayout(tabPuzzle);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        layout_puzzle = new QHBoxLayout();
        layout_puzzle->setObjectName(QStringLiteral("layout_puzzle"));
        listPuzzle = new QListWidget(tabPuzzle);
        listPuzzle->setObjectName(QStringLiteral("listPuzzle"));
        listPuzzle->setContextMenuPolicy(Qt::CustomContextMenu);
        listPuzzle->setAlternatingRowColors(true);

        layout_puzzle->addWidget(listPuzzle);

        btBoxPuzzle = new QDialogButtonBox(tabPuzzle);
        btBoxPuzzle->setObjectName(QStringLiteral("btBoxPuzzle"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btBoxPuzzle->sizePolicy().hasHeightForWidth());
        btBoxPuzzle->setSizePolicy(sizePolicy1);
        btBoxPuzzle->setOrientation(Qt::Vertical);
        btBoxPuzzle->setStandardButtons(QDialogButtonBox::NoButton);

        layout_puzzle->addWidget(btBoxPuzzle);


        verticalLayout_7->addLayout(layout_puzzle);

        groupBox_2 = new QGroupBox(tabPuzzle);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy2);
        verticalLayout_9 = new QVBoxLayout(groupBox_2);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        listPuzzlebotMessages = new QListWidget(groupBox_2);
        listPuzzlebotMessages->setObjectName(QStringLiteral("listPuzzlebotMessages"));

        verticalLayout_9->addWidget(listPuzzlebotMessages);


        verticalLayout_7->addWidget(groupBox_2);

        tabWidget->addTab(tabPuzzle, QString());
        tabPlayers = new QWidget();
        tabPlayers->setObjectName(QStringLiteral("tabPlayers"));
        verticalLayout_5 = new QVBoxLayout(tabPlayers);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        listPlayers = new QTableWidget(tabPlayers);
        if (listPlayers->columnCount() < 2)
            listPlayers->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        listPlayers->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        listPlayers->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        listPlayers->setObjectName(QStringLiteral("listPlayers"));
        listPlayers->setContextMenuPolicy(Qt::CustomContextMenu);
        listPlayers->setAlternatingRowColors(true);
        listPlayers->setSelectionMode(QAbstractItemView::SingleSelection);
        listPlayers->setSelectionBehavior(QAbstractItemView::SelectRows);
        listPlayers->setShowGrid(false);
        listPlayers->setGridStyle(Qt::NoPen);
        listPlayers->setSortingEnabled(true);
        listPlayers->horizontalHeader()->setStretchLastSection(true);
        listPlayers->verticalHeader()->setDefaultSectionSize(24);

        verticalLayout_5->addWidget(listPlayers);

        tabWidget->addTab(tabPlayers, QString());
        tabSeeks = new QWidget();
        tabSeeks->setObjectName(QStringLiteral("tabSeeks"));
        verticalLayout_8 = new QVBoxLayout(tabSeeks);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        splitter = new QSplitter(tabSeeks);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(4);
        groupBoxSeek = new QGroupBox(splitter);
        groupBoxSeek->setObjectName(QStringLiteral("groupBoxSeek"));
        verticalLayout_12 = new QVBoxLayout(groupBoxSeek);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        layout_seek_1 = new QHBoxLayout();
        layout_seek_1->setObjectName(QStringLiteral("layout_seek_1"));
        groupBox = new QGroupBox(groupBoxSeek);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_18 = new QVBoxLayout(groupBox);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(-1, 6, -1, 6);
        btLightning = new QRadioButton(groupBox);
        btLightning->setObjectName(QStringLiteral("btLightning"));
        btLightning->setChecked(true);

        verticalLayout_18->addWidget(btLightning);

        btBlitz = new QRadioButton(groupBox);
        btBlitz->setObjectName(QStringLiteral("btBlitz"));
        btBlitz->setMinimumSize(QSize(19, 0));
        btBlitz->setChecked(false);

        verticalLayout_18->addWidget(btBlitz);

        btStandard = new QRadioButton(groupBox);
        btStandard->setObjectName(QStringLiteral("btStandard"));

        verticalLayout_18->addWidget(btStandard);


        layout_seek_1->addWidget(groupBox);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        ratedOnly = new QToolButton(groupBoxSeek);
        ratedOnly->setObjectName(QStringLiteral("ratedOnly"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/rating.png"), QSize(), QIcon::Normal, QIcon::Off);
        ratedOnly->setIcon(icon1);
        ratedOnly->setCheckable(true);

        verticalLayout_10->addWidget(ratedOnly);

        disableComputer = new QToolButton(groupBoxSeek);
        disableComputer->setObjectName(QStringLiteral("disableComputer"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/computer.png"), QSize(), QIcon::Normal, QIcon::Off);
        disableComputer->setIcon(icon2);
        disableComputer->setCheckable(true);

        verticalLayout_10->addWidget(disableComputer);


        layout_seek_1->addLayout(verticalLayout_10);

        listSeeks = new QListWidget(groupBoxSeek);
        listSeeks->setObjectName(QStringLiteral("listSeeks"));
        listSeeks->setContextMenuPolicy(Qt::CustomContextMenu);

        layout_seek_1->addWidget(listSeeks);


        verticalLayout_12->addLayout(layout_seek_1);

        layout_seek_2 = new QHBoxLayout();
        layout_seek_2->setObjectName(QStringLiteral("layout_seek_2"));
        groupBox_8 = new QGroupBox(groupBoxSeek);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        verticalLayout_17 = new QVBoxLayout(groupBox_8);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label = new QLabel(groupBox_8);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_11->addWidget(label);

        seekTime = new QSpinBox(groupBox_8);
        seekTime->setObjectName(QStringLiteral("seekTime"));
        seekTime->setValue(1);

        horizontalLayout_11->addWidget(seekTime);


        verticalLayout_17->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_2 = new QLabel(groupBox_8);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_12->addWidget(label_2);

        seekIncrement = new QSpinBox(groupBox_8);
        seekIncrement->setObjectName(QStringLiteral("seekIncrement"));

        horizontalLayout_12->addWidget(seekIncrement);


        verticalLayout_17->addLayout(horizontalLayout_12);


        layout_seek_2->addWidget(groupBox_8);

        groupBox_9 = new QGroupBox(groupBoxSeek);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        verticalLayout_19 = new QVBoxLayout(groupBox_9);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        eloMin = new QSpinBox(groupBox_9);
        eloMin->setObjectName(QStringLiteral("eloMin"));
        eloMin->setMaximum(9000);
        eloMin->setSingleStep(100);
        eloMin->setValue(0);

        verticalLayout_19->addWidget(eloMin);

        eloMax = new QSpinBox(groupBox_9);
        eloMax->setObjectName(QStringLiteral("eloMax"));
        eloMax->setProperty("showGroupSeparator", QVariant(false));
        eloMax->setMaximum(9000);
        eloMax->setSingleStep(100);
        eloMax->setValue(9000);

        verticalLayout_19->addWidget(eloMax);


        layout_seek_2->addWidget(groupBox_9);

        groupBox_3 = new QGroupBox(groupBoxSeek);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_20 = new QVBoxLayout(groupBox_3);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        cbRated = new QComboBox(groupBox_3);
        cbRated->setObjectName(QStringLiteral("cbRated"));

        verticalLayout_20->addWidget(cbRated);

        btSeek = new QToolButton(groupBox_3);
        btSeek->setObjectName(QStringLiteral("btSeek"));

        verticalLayout_20->addWidget(btSeek);


        layout_seek_2->addWidget(groupBox_3);


        verticalLayout_12->addLayout(layout_seek_2);

        splitter->addWidget(groupBoxSeek);
        groupBoxNoPlay = new QGroupBox(splitter);
        groupBoxNoPlay->setObjectName(QStringLiteral("groupBoxNoPlay"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBoxNoPlay->sizePolicy().hasHeightForWidth());
        groupBoxNoPlay->setSizePolicy(sizePolicy3);
        verticalLayout_13 = new QVBoxLayout(groupBoxNoPlay);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        layout_noplay = new QHBoxLayout();
        layout_noplay->setObjectName(QStringLiteral("layout_noplay"));
        editNoPlay = new QLineEdit(groupBoxNoPlay);
        editNoPlay->setObjectName(QStringLiteral("editNoPlay"));

        layout_noplay->addWidget(editNoPlay);

        btAddNoPlay = new QToolButton(groupBoxNoPlay);
        btAddNoPlay->setObjectName(QStringLiteral("btAddNoPlay"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        btAddNoPlay->setIcon(icon3);

        layout_noplay->addWidget(btAddNoPlay);


        verticalLayout_13->addLayout(layout_noplay);

        listNoPlay = new QListWidget(groupBoxNoPlay);
        listNoPlay->setObjectName(QStringLiteral("listNoPlay"));

        verticalLayout_13->addWidget(listNoPlay);

        splitter->addWidget(groupBoxNoPlay);

        verticalLayout_8->addWidget(splitter);

        tabWidget->addTab(tabSeeks, QString());

        verticalLayout_2->addWidget(tabWidget);

        line = new QFrame(FicsConsole);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        textOut = new QLineEdit(FicsConsole);
        textOut->setObjectName(QStringLiteral("textOut"));

        verticalLayout_2->addWidget(textOut);


        retranslateUi(FicsConsole);

        tabWidget->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(FicsConsole);
    } // setupUi

    void retranslateUi(QWidget *FicsConsole)
    {
        FicsConsole->setWindowTitle(QApplication::translate("FicsConsole", "Form", 0));
#ifndef QT_NO_TOOLTIP
        tabWidget->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        groupBox_4->setTitle(QApplication::translate("FicsConsole", "Say to opponent", 0));
        btSay->setText(QApplication::translate("FicsConsole", "...", 0));
        label_3->setText(QApplication::translate("FicsConsole", "White", 0));
        label_4->setText(QApplication::translate("FicsConsole", "Black", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabMessages), QApplication::translate("FicsConsole", "Messages", 0));
        groupBox_7->setTitle(QApplication::translate("FicsConsole", "History", 0));
#ifndef QT_NO_TOOLTIP
        listHistory->setToolTip(QApplication::translate("FicsConsole", "Double click to examine game", 0));
#endif // QT_NO_TOOLTIP
        groupBox_6->setTitle(QApplication::translate("FicsConsole", "Finger", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabHistory), QApplication::translate("FicsConsole", "History", 0));
#ifndef QT_NO_TOOLTIP
        listGames->setToolTip(QApplication::translate("FicsConsole", "Double click to follow game", 0));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tabGames), QApplication::translate("FicsConsole", "Games", 0));
#ifndef QT_NO_TOOLTIP
        listRelay->setToolTip(QApplication::translate("FicsConsole", "Double click to follow game", 0));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tabRelay), QApplication::translate("FicsConsole", "Relay", 0));
#ifndef QT_NO_TOOLTIP
        listPuzzle->setToolTip(QApplication::translate("FicsConsole", "Double click to get a puzzle", 0));
#endif // QT_NO_TOOLTIP
        groupBox_2->setTitle(QApplication::translate("FicsConsole", "Messages from Puzzlebot", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabPuzzle), QApplication::translate("FicsConsole", "Puzzle", 0));
        QTableWidgetItem *___qtablewidgetitem = listPlayers->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("FicsConsole", "Rating", 0));
        QTableWidgetItem *___qtablewidgetitem1 = listPlayers->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("FicsConsole", "User", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabPlayers), QApplication::translate("FicsConsole", "Players", 0));
        groupBoxSeek->setTitle(QApplication::translate("FicsConsole", "Seeks", 0));
        groupBox->setTitle(QString());
        btLightning->setText(QApplication::translate("FicsConsole", "Lightning", 0));
        btBlitz->setText(QApplication::translate("FicsConsole", "Blitz", 0));
        btStandard->setText(QApplication::translate("FicsConsole", "Standard", 0));
#ifndef QT_NO_TOOLTIP
        ratedOnly->setToolTip(QApplication::translate("FicsConsole", "Rated only", 0));
#endif // QT_NO_TOOLTIP
        ratedOnly->setText(QApplication::translate("FicsConsole", "...", 0));
#ifndef QT_NO_TOOLTIP
        disableComputer->setToolTip(QApplication::translate("FicsConsole", "Human only", 0));
#endif // QT_NO_TOOLTIP
        disableComputer->setText(QApplication::translate("FicsConsole", "...", 0));
        groupBox_8->setTitle(QApplication::translate("FicsConsole", "Time Control", 0));
        label->setText(QApplication::translate("FicsConsole", "Minutes", 0));
        label_2->setText(QApplication::translate("FicsConsole", "Increment", 0));
        groupBox_9->setTitle(QApplication::translate("FicsConsole", "Elo", 0));
        groupBox_3->setTitle(QApplication::translate("FicsConsole", "Propose a game", 0));
        cbRated->clear();
        cbRated->insertItems(0, QStringList()
         << QApplication::translate("FicsConsole", "rated", 0)
         << QApplication::translate("FicsConsole", "unrated", 0)
        );
        btSeek->setText(QApplication::translate("FicsConsole", "Seek", 0));
        groupBoxNoPlay->setTitle(QApplication::translate("FicsConsole", "No play list", 0));
        btAddNoPlay->setText(QApplication::translate("FicsConsole", "...", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabSeeks), QApplication::translate("FicsConsole", "Seeks", 0));
        textOut->setPlaceholderText(QApplication::translate("FicsConsole", "Enter command here", 0));
    } // retranslateUi

};

namespace Ui {
    class FicsConsole: public Ui_FicsConsole {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FICSCONSOLE_H
