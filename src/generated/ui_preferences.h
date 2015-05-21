/********************************************************************************
** Form generated from reading UI file 'preferences.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCES_H
#define UI_PREFERENCES_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "colorlist.h"

QT_BEGIN_NAMESPACE

class Ui_PreferencesDialog
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tabGeneral;
    QGridLayout *gridLayout1;
    QHBoxLayout *hboxLayout;
    QComboBox *pieceThemeCombo;
    QComboBox *pieceEffect;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *guessMoveCheck;
    QCheckBox *guessNextMove;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelWheel;
    QSpacerItem *horizontalSpacer;
    QLabel *labelFast;
    QSlider *minWheelCount;
    QLabel *label_10;
    QLabel *pieceThemeLabel;
    QCheckBox *boardShowCoordinates;
    QLabel *boardThemeLabel;
    QSpacerItem *spacerItem;
    QLabel *label_7;
    QComboBox *boardThemeCombo;
    QCheckBox *boardFrameCheck;
    QComboBox *hilightCurrentMove;
    QLabel *label;
    ColorList *boardColorsList;
    QCheckBox *btShowThreat;
    QWidget *tabAutoplay;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_8;
    QCheckBox *cbShowDiagrams;
    QCheckBox *cbColumnStyle;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_20;
    QSpinBox *variationIndentLevel;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_21;
    QSpinBox *diagramSize;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_14;
    QLineEdit *pieceString;
    QToolButton *tbUK;
    QToolButton *tbGermany;
    QToolButton *tbFrance;
    QToolButton *tbPoland;
    QToolButton *tbSymbolic;
    QHBoxLayout *horizontalLayout_18;
    QLabel *labelNotationColors;
    ColorList *notationColors;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *gbBoardOptions;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *cbSaveAndContinue;
    QCheckBox *cbBackwardAnalysis;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *cbPromoteToQueen;
    QWidget *tabEngines;
    QGridLayout *gridLayout2;
    QHBoxLayout *horizontalLayout_6;
    QListWidget *engineList;
    QDialogButtonBox *buttonBoxEngines;
    QWidget *engineEditWidget;
    QGridLayout *gridLayout3;
    QLineEdit *engineCommand;
    QLineEdit *engineDirectory;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_5;
    QToolButton *commandButton;
    QLabel *label_3;
    QLineEdit *engineOptions;
    QRadioButton *engineProtocolWinBoard;
    QToolButton *engineOptionMore;
    QToolButton *directoryButton;
    QSpacerItem *spacerItem1;
    QLineEdit *engineName;
    QRadioButton *engineProtocolUCI;
    QWidget *tabAdvanced;
    QVBoxLayout *verticalLayout_10;
    QCheckBox *automaticECO;
    QCheckBox *useIndexFile;
    QCheckBox *cbAutoCommitDB;
    QGridLayout *gridLayout4;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *defaultDataBasePath;
    QPushButton *browsePathButton;
    QLabel *lbDataBasePath;
    QSpinBox *spinBoxRecentFiles;
    QLabel *lbRecentFiles;
    QLabel *lbLimitSpin;
    QSpinBox *limitSpin;
    QSpacerItem *verticalSpacer_4;
    QWidget *tabFonts;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_1;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_11;
    QLabel *labelFontText;
    QHBoxLayout *horizontalLayout_15;
    QLineEdit *fontText;
    QToolButton *btSelectTextFont;
    QHBoxLayout *horizontalLayout_10;
    QLabel *labelFontMove;
    QHBoxLayout *horizontalLayout_16;
    QLineEdit *fontMove;
    QToolButton *btSelectMoveFont;
    QHBoxLayout *horizontalLayout_12;
    QLabel *labelGameTextFontSize;
    QSpinBox *gameTextFontSizeSpin;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout;
    QLabel *labelShowMoveIndicator;
    QComboBox *cbShowIndicator;
    QCheckBox *iconsVisible;
    QCheckBox *verticalTabs;
    QHBoxLayout *horizontalLayout_19;
    QLabel *labelListFontSize;
    QSpinBox *spinBoxListFontSize;
    QSpacerItem *verticalSpacer;
    QWidget *tabFICS;
    QGridLayout *gridLayout_4;
    QSpacerItem *verticalSpacer_5;
    QCheckBox *guestLogin;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *userName;
    QLineEdit *passWord;
    QCheckBox *btUseTimeseal;
    QWidget *tabApp;
    QVBoxLayout *verticalLayout_11;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *tablebaseCheck;
    QCheckBox *versionCheck;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_12;
    QComboBox *cbLanguage;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_19;
    QComboBox *cbLangServer;
    QPushButton *btLoadLang;
    QSpacerItem *horizontalSpacer_4;
    QLabel *labelLoadStatus;
    QGroupBox *groupAppExternal;
    QGridLayout *gridLayout_3;
    QLabel *lbExtToolParamter;
    QLabel *lbExtToolPath;
    QToolButton *btExtToolPath;
    QLineEdit *extToolPath;
    QLineEdit *extToolParameters;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *cbSoundOn;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PreferencesDialog)
    {
        if (PreferencesDialog->objectName().isEmpty())
            PreferencesDialog->setObjectName(QStringLiteral("PreferencesDialog"));
        PreferencesDialog->resize(543, 580);
        PreferencesDialog->setModal(true);
        gridLayout = new QGridLayout(PreferencesDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(PreferencesDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setAutoFillBackground(false);
        tabGeneral = new QWidget();
        tabGeneral->setObjectName(QStringLiteral("tabGeneral"));
        gridLayout1 = new QGridLayout(tabGeneral);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(11, 11, 11, 11);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        pieceThemeCombo = new QComboBox(tabGeneral);
        pieceThemeCombo->setObjectName(QStringLiteral("pieceThemeCombo"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pieceThemeCombo->sizePolicy().hasHeightForWidth());
        pieceThemeCombo->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(pieceThemeCombo);

        pieceEffect = new QComboBox(tabGeneral);
        pieceEffect->setObjectName(QStringLiteral("pieceEffect"));
        sizePolicy.setHeightForWidth(pieceEffect->sizePolicy().hasHeightForWidth());
        pieceEffect->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(pieceEffect);


        gridLayout1->addLayout(hboxLayout, 0, 2, 1, 1);

        groupBox = new QGroupBox(tabGeneral);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        guessMoveCheck = new QCheckBox(groupBox);
        guessMoveCheck->setObjectName(QStringLiteral("guessMoveCheck"));

        verticalLayout_2->addWidget(guessMoveCheck);

        guessNextMove = new QCheckBox(groupBox);
        guessNextMove->setObjectName(QStringLiteral("guessNextMove"));

        verticalLayout_2->addWidget(guessNextMove);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelWheel = new QLabel(groupBox);
        labelWheel->setObjectName(QStringLiteral("labelWheel"));

        horizontalLayout_2->addWidget(labelWheel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        labelFast = new QLabel(groupBox);
        labelFast->setObjectName(QStringLiteral("labelFast"));

        horizontalLayout_2->addWidget(labelFast);

        minWheelCount = new QSlider(groupBox);
        minWheelCount->setObjectName(QStringLiteral("minWheelCount"));
        minWheelCount->setMaximum(960);
        minWheelCount->setSingleStep(104);
        minWheelCount->setPageStep(120);
        minWheelCount->setOrientation(Qt::Horizontal);
        minWheelCount->setInvertedAppearance(false);
        minWheelCount->setTickPosition(QSlider::TicksBothSides);
        minWheelCount->setTickInterval(120);

        horizontalLayout_2->addWidget(minWheelCount);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_2->addWidget(label_10);


        verticalLayout_2->addLayout(horizontalLayout_2);


        gridLayout1->addWidget(groupBox, 12, 0, 1, 3);

        pieceThemeLabel = new QLabel(tabGeneral);
        pieceThemeLabel->setObjectName(QStringLiteral("pieceThemeLabel"));

        gridLayout1->addWidget(pieceThemeLabel, 0, 0, 1, 1);

        boardShowCoordinates = new QCheckBox(tabGeneral);
        boardShowCoordinates->setObjectName(QStringLiteral("boardShowCoordinates"));

        gridLayout1->addWidget(boardShowCoordinates, 6, 2, 1, 1);

        boardThemeLabel = new QLabel(tabGeneral);
        boardThemeLabel->setObjectName(QStringLiteral("boardThemeLabel"));

        gridLayout1->addWidget(boardThemeLabel, 1, 0, 1, 1);

        spacerItem = new QSpacerItem(20, 150, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem, 9, 0, 1, 1);

        label_7 = new QLabel(tabGeneral);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout1->addWidget(label_7, 3, 0, 1, 1);

        boardThemeCombo = new QComboBox(tabGeneral);
        boardThemeCombo->setObjectName(QStringLiteral("boardThemeCombo"));
        sizePolicy.setHeightForWidth(boardThemeCombo->sizePolicy().hasHeightForWidth());
        boardThemeCombo->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(boardThemeCombo, 1, 2, 1, 1);

        boardFrameCheck = new QCheckBox(tabGeneral);
        boardFrameCheck->setObjectName(QStringLiteral("boardFrameCheck"));

        gridLayout1->addWidget(boardFrameCheck, 5, 2, 1, 1);

        hilightCurrentMove = new QComboBox(tabGeneral);
        hilightCurrentMove->setObjectName(QStringLiteral("hilightCurrentMove"));

        gridLayout1->addWidget(hilightCurrentMove, 3, 2, 1, 1);

        label = new QLabel(tabGeneral);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout1->addWidget(label, 2, 0, 1, 1);

        boardColorsList = new ColorList(tabGeneral);
        boardColorsList->setObjectName(QStringLiteral("boardColorsList"));

        gridLayout1->addWidget(boardColorsList, 2, 2, 1, 1);

        btShowThreat = new QCheckBox(tabGeneral);
        btShowThreat->setObjectName(QStringLiteral("btShowThreat"));

        gridLayout1->addWidget(btShowThreat, 4, 2, 1, 1);

        tabWidget->addTab(tabGeneral, QString());
        tabAutoplay = new QWidget();
        tabAutoplay->setObjectName(QStringLiteral("tabAutoplay"));
        gridLayout_2 = new QGridLayout(tabAutoplay);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox_6 = new QGroupBox(tabAutoplay);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        verticalLayout_8 = new QVBoxLayout(groupBox_6);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        cbShowDiagrams = new QCheckBox(groupBox_6);
        cbShowDiagrams->setObjectName(QStringLiteral("cbShowDiagrams"));

        verticalLayout_8->addWidget(cbShowDiagrams);

        cbColumnStyle = new QCheckBox(groupBox_6);
        cbColumnStyle->setObjectName(QStringLiteral("cbColumnStyle"));

        verticalLayout_8->addWidget(cbColumnStyle);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_20 = new QLabel(groupBox_6);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_8->addWidget(label_20);

        variationIndentLevel = new QSpinBox(groupBox_6);
        variationIndentLevel->setObjectName(QStringLiteral("variationIndentLevel"));
        variationIndentLevel->setMinimum(1);
        variationIndentLevel->setMaximum(200);

        horizontalLayout_8->addWidget(variationIndentLevel);


        verticalLayout_8->addLayout(horizontalLayout_8);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_21 = new QLabel(groupBox_6);
        label_21->setObjectName(QStringLiteral("label_21"));

        horizontalLayout_13->addWidget(label_21);

        diagramSize = new QSpinBox(groupBox_6);
        diagramSize->setObjectName(QStringLiteral("diagramSize"));
        diagramSize->setMaximum(500);

        horizontalLayout_13->addWidget(diagramSize);


        verticalLayout_8->addLayout(horizontalLayout_13);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_14 = new QLabel(groupBox_6);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_17->addWidget(label_14);

        pieceString = new QLineEdit(groupBox_6);
        pieceString->setObjectName(QStringLiteral("pieceString"));
        QFont font;
        font.setFamily(QStringLiteral("Courier New"));
        font.setPointSize(14);
        pieceString->setFont(font);

        horizontalLayout_17->addWidget(pieceString);

        tbUK = new QToolButton(groupBox_6);
        tbUK->setObjectName(QStringLiteral("tbUK"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/FlagUK.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbUK->setIcon(icon);

        horizontalLayout_17->addWidget(tbUK);

        tbGermany = new QToolButton(groupBox_6);
        tbGermany->setObjectName(QStringLiteral("tbGermany"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/FlagGermany.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbGermany->setIcon(icon1);

        horizontalLayout_17->addWidget(tbGermany);

        tbFrance = new QToolButton(groupBox_6);
        tbFrance->setObjectName(QStringLiteral("tbFrance"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/FlagFrance.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbFrance->setIcon(icon2);

        horizontalLayout_17->addWidget(tbFrance);

        tbPoland = new QToolButton(groupBox_6);
        tbPoland->setObjectName(QStringLiteral("tbPoland"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/FlagPoland.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbPoland->setIcon(icon3);

        horizontalLayout_17->addWidget(tbPoland);

        tbSymbolic = new QToolButton(groupBox_6);
        tbSymbolic->setObjectName(QStringLiteral("tbSymbolic"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/new_board.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbSymbolic->setIcon(icon4);
        tbSymbolic->setToolButtonStyle(Qt::ToolButtonIconOnly);

        horizontalLayout_17->addWidget(tbSymbolic);


        verticalLayout_8->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        labelNotationColors = new QLabel(groupBox_6);
        labelNotationColors->setObjectName(QStringLiteral("labelNotationColors"));
        labelNotationColors->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_18->addWidget(labelNotationColors);

        notationColors = new ColorList(groupBox_6);
        notationColors->setObjectName(QStringLiteral("notationColors"));

        horizontalLayout_18->addWidget(notationColors);


        verticalLayout_8->addLayout(horizontalLayout_18);


        gridLayout_2->addWidget(groupBox_6, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 3, 0, 1, 1);

        gbBoardOptions = new QGroupBox(tabAutoplay);
        gbBoardOptions->setObjectName(QStringLiteral("gbBoardOptions"));
        verticalLayout_5 = new QVBoxLayout(gbBoardOptions);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        cbSaveAndContinue = new QCheckBox(gbBoardOptions);
        cbSaveAndContinue->setObjectName(QStringLiteral("cbSaveAndContinue"));

        verticalLayout_5->addWidget(cbSaveAndContinue);

        cbBackwardAnalysis = new QCheckBox(gbBoardOptions);
        cbBackwardAnalysis->setObjectName(QStringLiteral("cbBackwardAnalysis"));

        verticalLayout_5->addWidget(cbBackwardAnalysis);


        gridLayout_2->addWidget(gbBoardOptions, 0, 0, 1, 1);

        groupBox_8 = new QGroupBox(tabAutoplay);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        verticalLayout_6 = new QVBoxLayout(groupBox_8);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        cbPromoteToQueen = new QCheckBox(groupBox_8);
        cbPromoteToQueen->setObjectName(QStringLiteral("cbPromoteToQueen"));

        verticalLayout_6->addWidget(cbPromoteToQueen);


        gridLayout_2->addWidget(groupBox_8, 2, 0, 1, 1);

        tabWidget->addTab(tabAutoplay, QString());
        tabEngines = new QWidget();
        tabEngines->setObjectName(QStringLiteral("tabEngines"));
        gridLayout2 = new QGridLayout(tabEngines);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(11, 11, 11, 11);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        engineList = new QListWidget(tabEngines);
        engineList->setObjectName(QStringLiteral("engineList"));
        engineList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        engineList->setDragEnabled(false);
        engineList->setMovement(QListView::Static);
        engineList->setSortingEnabled(false);

        horizontalLayout_6->addWidget(engineList);

        buttonBoxEngines = new QDialogButtonBox(tabEngines);
        buttonBoxEngines->setObjectName(QStringLiteral("buttonBoxEngines"));
        buttonBoxEngines->setOrientation(Qt::Vertical);
        buttonBoxEngines->setStandardButtons(QDialogButtonBox::NoButton);

        horizontalLayout_6->addWidget(buttonBoxEngines);


        gridLayout2->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        engineEditWidget = new QWidget(tabEngines);
        engineEditWidget->setObjectName(QStringLiteral("engineEditWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(engineEditWidget->sizePolicy().hasHeightForWidth());
        engineEditWidget->setSizePolicy(sizePolicy2);
        gridLayout3 = new QGridLayout(engineEditWidget);
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(11, 11, 11, 11);
        gridLayout3->setObjectName(QStringLiteral("gridLayout3"));
        engineCommand = new QLineEdit(engineEditWidget);
        engineCommand->setObjectName(QStringLiteral("engineCommand"));
        engineCommand->setMinimumSize(QSize(300, 0));

        gridLayout3->addWidget(engineCommand, 1, 1, 1, 3);

        engineDirectory = new QLineEdit(engineEditWidget);
        engineDirectory->setObjectName(QStringLiteral("engineDirectory"));
        engineDirectory->setMinimumSize(QSize(300, 0));

        gridLayout3->addWidget(engineDirectory, 3, 1, 1, 3);

        label_2 = new QLabel(engineEditWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout3->addWidget(label_2, 3, 0, 1, 1);

        label_4 = new QLabel(engineEditWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);

        gridLayout3->addWidget(label_4, 4, 0, 1, 1);

        label_6 = new QLabel(engineEditWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout3->addWidget(label_6, 0, 0, 1, 1);

        label_5 = new QLabel(engineEditWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout3->addWidget(label_5, 2, 0, 1, 1);

        commandButton = new QToolButton(engineEditWidget);
        commandButton->setObjectName(QStringLiteral("commandButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(commandButton->sizePolicy().hasHeightForWidth());
        commandButton->setSizePolicy(sizePolicy4);
        commandButton->setText(QStringLiteral("..."));

        gridLayout3->addWidget(commandButton, 1, 4, 1, 1);

        label_3 = new QLabel(engineEditWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout3->addWidget(label_3, 1, 0, 1, 1);

        engineOptions = new QLineEdit(engineEditWidget);
        engineOptions->setObjectName(QStringLiteral("engineOptions"));

        gridLayout3->addWidget(engineOptions, 2, 1, 1, 4);

        engineProtocolWinBoard = new QRadioButton(engineEditWidget);
        engineProtocolWinBoard->setObjectName(QStringLiteral("engineProtocolWinBoard"));
        engineProtocolWinBoard->setText(QStringLiteral("WinBoard"));

        gridLayout3->addWidget(engineProtocolWinBoard, 4, 2, 1, 1);

        engineOptionMore = new QToolButton(engineEditWidget);
        engineOptionMore->setObjectName(QStringLiteral("engineOptionMore"));
        sizePolicy4.setHeightForWidth(engineOptionMore->sizePolicy().hasHeightForWidth());
        engineOptionMore->setSizePolicy(sizePolicy4);

        gridLayout3->addWidget(engineOptionMore, 4, 4, 1, 1);

        directoryButton = new QToolButton(engineEditWidget);
        directoryButton->setObjectName(QStringLiteral("directoryButton"));
        sizePolicy4.setHeightForWidth(directoryButton->sizePolicy().hasHeightForWidth());
        directoryButton->setSizePolicy(sizePolicy4);
        directoryButton->setLayoutDirection(Qt::LeftToRight);
        directoryButton->setText(QStringLiteral("..."));

        gridLayout3->addWidget(directoryButton, 3, 4, 1, 1);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout3->addItem(spacerItem1, 4, 3, 1, 1);

        engineName = new QLineEdit(engineEditWidget);
        engineName->setObjectName(QStringLiteral("engineName"));

        gridLayout3->addWidget(engineName, 0, 1, 1, 4);

        engineProtocolUCI = new QRadioButton(engineEditWidget);
        engineProtocolUCI->setObjectName(QStringLiteral("engineProtocolUCI"));
        engineProtocolUCI->setText(QStringLiteral("UCI"));

        gridLayout3->addWidget(engineProtocolUCI, 4, 1, 1, 1);


        gridLayout2->addWidget(engineEditWidget, 1, 0, 1, 1);

        tabWidget->addTab(tabEngines, QString());
        tabAdvanced = new QWidget();
        tabAdvanced->setObjectName(QStringLiteral("tabAdvanced"));
        verticalLayout_10 = new QVBoxLayout(tabAdvanced);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        automaticECO = new QCheckBox(tabAdvanced);
        automaticECO->setObjectName(QStringLiteral("automaticECO"));

        verticalLayout_10->addWidget(automaticECO);

        useIndexFile = new QCheckBox(tabAdvanced);
        useIndexFile->setObjectName(QStringLiteral("useIndexFile"));

        verticalLayout_10->addWidget(useIndexFile);

        cbAutoCommitDB = new QCheckBox(tabAdvanced);
        cbAutoCommitDB->setObjectName(QStringLiteral("cbAutoCommitDB"));

        verticalLayout_10->addWidget(cbAutoCommitDB);

        gridLayout4 = new QGridLayout();
        gridLayout4->setSpacing(6);
        gridLayout4->setObjectName(QStringLiteral("gridLayout4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        defaultDataBasePath = new QLineEdit(tabAdvanced);
        defaultDataBasePath->setObjectName(QStringLiteral("defaultDataBasePath"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(defaultDataBasePath->sizePolicy().hasHeightForWidth());
        defaultDataBasePath->setSizePolicy(sizePolicy5);

        horizontalLayout_5->addWidget(defaultDataBasePath);

        browsePathButton = new QPushButton(tabAdvanced);
        browsePathButton->setObjectName(QStringLiteral("browsePathButton"));
        browsePathButton->setText(QStringLiteral("..."));

        horizontalLayout_5->addWidget(browsePathButton);


        gridLayout4->addLayout(horizontalLayout_5, 3, 1, 1, 1);

        lbDataBasePath = new QLabel(tabAdvanced);
        lbDataBasePath->setObjectName(QStringLiteral("lbDataBasePath"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(lbDataBasePath->sizePolicy().hasHeightForWidth());
        lbDataBasePath->setSizePolicy(sizePolicy6);

        gridLayout4->addWidget(lbDataBasePath, 3, 0, 1, 1);

        spinBoxRecentFiles = new QSpinBox(tabAdvanced);
        spinBoxRecentFiles->setObjectName(QStringLiteral("spinBoxRecentFiles"));
        spinBoxRecentFiles->setMaximum(10);
        spinBoxRecentFiles->setValue(4);

        gridLayout4->addWidget(spinBoxRecentFiles, 2, 1, 1, 1);

        lbRecentFiles = new QLabel(tabAdvanced);
        lbRecentFiles->setObjectName(QStringLiteral("lbRecentFiles"));

        gridLayout4->addWidget(lbRecentFiles, 2, 0, 1, 1);

        lbLimitSpin = new QLabel(tabAdvanced);
        lbLimitSpin->setObjectName(QStringLiteral("lbLimitSpin"));

        gridLayout4->addWidget(lbLimitSpin, 1, 0, 1, 1);

        limitSpin = new QSpinBox(tabAdvanced);
        limitSpin->setObjectName(QStringLiteral("limitSpin"));
        limitSpin->setMinimum(0);
        limitSpin->setMaximum(150);
        limitSpin->setValue(10);

        gridLayout4->addWidget(limitSpin, 1, 1, 1, 1);


        verticalLayout_10->addLayout(gridLayout4);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_4);

        tabWidget->addTab(tabAdvanced, QString());
        tabFonts = new QWidget();
        tabFonts->setObjectName(QStringLiteral("tabFonts"));
        verticalLayout = new QVBoxLayout(tabFonts);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_1 = new QGroupBox(tabFonts);
        groupBox_1->setObjectName(QStringLiteral("groupBox_1"));
        verticalLayout_4 = new QVBoxLayout(groupBox_1);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        labelFontText = new QLabel(groupBox_1);
        labelFontText->setObjectName(QStringLiteral("labelFontText"));

        horizontalLayout_11->addWidget(labelFontText);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        fontText = new QLineEdit(groupBox_1);
        fontText->setObjectName(QStringLiteral("fontText"));

        horizontalLayout_15->addWidget(fontText);

        btSelectTextFont = new QToolButton(groupBox_1);
        btSelectTextFont->setObjectName(QStringLiteral("btSelectTextFont"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/find_tag.png"), QSize(), QIcon::Normal, QIcon::Off);
        btSelectTextFont->setIcon(icon5);

        horizontalLayout_15->addWidget(btSelectTextFont);


        horizontalLayout_11->addLayout(horizontalLayout_15);

        horizontalLayout_11->setStretch(0, 1);
        horizontalLayout_11->setStretch(1, 2);

        verticalLayout_4->addLayout(horizontalLayout_11);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        labelFontMove = new QLabel(groupBox_1);
        labelFontMove->setObjectName(QStringLiteral("labelFontMove"));
        labelFontMove->setLineWidth(0);

        horizontalLayout_10->addWidget(labelFontMove);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        fontMove = new QLineEdit(groupBox_1);
        fontMove->setObjectName(QStringLiteral("fontMove"));

        horizontalLayout_16->addWidget(fontMove);

        btSelectMoveFont = new QToolButton(groupBox_1);
        btSelectMoveFont->setObjectName(QStringLiteral("btSelectMoveFont"));
        btSelectMoveFont->setIcon(icon5);

        horizontalLayout_16->addWidget(btSelectMoveFont);


        horizontalLayout_10->addLayout(horizontalLayout_16);

        horizontalLayout_10->setStretch(0, 1);
        horizontalLayout_10->setStretch(1, 2);

        verticalLayout_4->addLayout(horizontalLayout_10);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        labelGameTextFontSize = new QLabel(groupBox_1);
        labelGameTextFontSize->setObjectName(QStringLiteral("labelGameTextFontSize"));

        horizontalLayout_12->addWidget(labelGameTextFontSize);

        gameTextFontSizeSpin = new QSpinBox(groupBox_1);
        gameTextFontSizeSpin->setObjectName(QStringLiteral("gameTextFontSizeSpin"));
        gameTextFontSizeSpin->setMinimum(5);
        gameTextFontSizeSpin->setMaximum(30);
        gameTextFontSizeSpin->setValue(11);

        horizontalLayout_12->addWidget(gameTextFontSizeSpin);

        horizontalLayout_12->setStretch(0, 1);
        horizontalLayout_12->setStretch(1, 2);

        verticalLayout_4->addLayout(horizontalLayout_12);


        verticalLayout->addWidget(groupBox_1);

        groupBox_7 = new QGroupBox(tabFonts);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        verticalLayout_12 = new QVBoxLayout(groupBox_7);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelShowMoveIndicator = new QLabel(groupBox_7);
        labelShowMoveIndicator->setObjectName(QStringLiteral("labelShowMoveIndicator"));

        horizontalLayout->addWidget(labelShowMoveIndicator);

        cbShowIndicator = new QComboBox(groupBox_7);
        cbShowIndicator->setObjectName(QStringLiteral("cbShowIndicator"));

        horizontalLayout->addWidget(cbShowIndicator);


        verticalLayout_12->addLayout(horizontalLayout);

        iconsVisible = new QCheckBox(groupBox_7);
        iconsVisible->setObjectName(QStringLiteral("iconsVisible"));
        iconsVisible->setChecked(false);

        verticalLayout_12->addWidget(iconsVisible);

        verticalTabs = new QCheckBox(groupBox_7);
        verticalTabs->setObjectName(QStringLiteral("verticalTabs"));

        verticalLayout_12->addWidget(verticalTabs);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        labelListFontSize = new QLabel(groupBox_7);
        labelListFontSize->setObjectName(QStringLiteral("labelListFontSize"));

        horizontalLayout_19->addWidget(labelListFontSize);

        spinBoxListFontSize = new QSpinBox(groupBox_7);
        spinBoxListFontSize->setObjectName(QStringLiteral("spinBoxListFontSize"));
        spinBoxListFontSize->setMinimum(5);
        spinBoxListFontSize->setMaximum(30);
        spinBoxListFontSize->setValue(14);

        horizontalLayout_19->addWidget(spinBoxListFontSize);


        verticalLayout_12->addLayout(horizontalLayout_19);


        verticalLayout->addWidget(groupBox_7);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        tabWidget->addTab(tabFonts, QString());
        tabFICS = new QWidget();
        tabFICS->setObjectName(QStringLiteral("tabFICS"));
        gridLayout_4 = new QGridLayout(tabFICS);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(24);
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_5, 3, 0, 1, 1);

        guestLogin = new QCheckBox(tabFICS);
        guestLogin->setObjectName(QStringLiteral("guestLogin"));

        gridLayout_4->addWidget(guestLogin, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(tabFICS);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setTitle(QStringLiteral("Credentials"));
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_5->addWidget(label_8, 2, 0, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_5->addWidget(label_9, 4, 0, 1, 1);

        userName = new QLineEdit(groupBox_2);
        userName->setObjectName(QStringLiteral("userName"));

        gridLayout_5->addWidget(userName, 2, 1, 1, 1);

        passWord = new QLineEdit(groupBox_2);
        passWord->setObjectName(QStringLiteral("passWord"));

        gridLayout_5->addWidget(passWord, 4, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 2, 0, 1, 1);

        btUseTimeseal = new QCheckBox(tabFICS);
        btUseTimeseal->setObjectName(QStringLiteral("btUseTimeseal"));

        gridLayout_4->addWidget(btUseTimeseal, 0, 0, 1, 1);

        tabWidget->addTab(tabFICS, QString());
        tabWidget->setTabText(tabWidget->indexOf(tabFICS), QStringLiteral("FICS"));
        tabApp = new QWidget();
        tabApp->setObjectName(QStringLiteral("tabApp"));
        verticalLayout_11 = new QVBoxLayout(tabApp);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        groupBox_4 = new QGroupBox(tabApp);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        verticalLayout_7 = new QVBoxLayout(groupBox_4);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        tablebaseCheck = new QCheckBox(groupBox_4);
        tablebaseCheck->setObjectName(QStringLiteral("tablebaseCheck"));

        verticalLayout_7->addWidget(tablebaseCheck);

        versionCheck = new QCheckBox(groupBox_4);
        versionCheck->setObjectName(QStringLiteral("versionCheck"));

        verticalLayout_7->addWidget(versionCheck);


        verticalLayout_11->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(tabApp);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        verticalLayout_9 = new QVBoxLayout(groupBox_5);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_3->addWidget(label_12);

        cbLanguage = new QComboBox(groupBox_5);
        cbLanguage->setObjectName(QStringLiteral("cbLanguage"));

        horizontalLayout_3->addWidget(cbLanguage);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_9->addLayout(horizontalLayout_3);

        label_13 = new QLabel(groupBox_5);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setEnabled(false);

        verticalLayout_9->addWidget(label_13);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_19 = new QLabel(groupBox_5);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_9->addWidget(label_19);

        cbLangServer = new QComboBox(groupBox_5);
        cbLangServer->setObjectName(QStringLiteral("cbLangServer"));

        horizontalLayout_9->addWidget(cbLangServer);

        btLoadLang = new QPushButton(groupBox_5);
        btLoadLang->setObjectName(QStringLiteral("btLoadLang"));

        horizontalLayout_9->addWidget(btLoadLang);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_4);


        verticalLayout_9->addLayout(horizontalLayout_9);

        labelLoadStatus = new QLabel(groupBox_5);
        labelLoadStatus->setObjectName(QStringLiteral("labelLoadStatus"));
        labelLoadStatus->setEnabled(false);

        verticalLayout_9->addWidget(labelLoadStatus);


        verticalLayout_11->addWidget(groupBox_5);

        groupAppExternal = new QGroupBox(tabApp);
        groupAppExternal->setObjectName(QStringLiteral("groupAppExternal"));
        gridLayout_3 = new QGridLayout(groupAppExternal);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        lbExtToolParamter = new QLabel(groupAppExternal);
        lbExtToolParamter->setObjectName(QStringLiteral("lbExtToolParamter"));

        gridLayout_3->addWidget(lbExtToolParamter, 1, 0, 1, 1);

        lbExtToolPath = new QLabel(groupAppExternal);
        lbExtToolPath->setObjectName(QStringLiteral("lbExtToolPath"));

        gridLayout_3->addWidget(lbExtToolPath, 0, 0, 1, 1);

        btExtToolPath = new QToolButton(groupAppExternal);
        btExtToolPath->setObjectName(QStringLiteral("btExtToolPath"));

        gridLayout_3->addWidget(btExtToolPath, 0, 3, 1, 1);

        extToolPath = new QLineEdit(groupAppExternal);
        extToolPath->setObjectName(QStringLiteral("extToolPath"));

        gridLayout_3->addWidget(extToolPath, 0, 1, 1, 2);

        extToolParameters = new QLineEdit(groupAppExternal);
        extToolParameters->setObjectName(QStringLiteral("extToolParameters"));

        gridLayout_3->addWidget(extToolParameters, 1, 1, 1, 3);

        lbExtToolPath->raise();
        extToolPath->raise();
        btExtToolPath->raise();
        lbExtToolParamter->raise();
        extToolParameters->raise();

        verticalLayout_11->addWidget(groupAppExternal);

        groupBox_3 = new QGroupBox(tabApp);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        cbSoundOn = new QCheckBox(groupBox_3);
        cbSoundOn->setObjectName(QStringLiteral("cbSoundOn"));

        verticalLayout_3->addWidget(cbSoundOn);


        verticalLayout_11->addWidget(groupBox_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_3);

        tabWidget->addTab(tabApp, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        hboxLayout1->setContentsMargins(4, 4, 4, 4);
        spacerItem2 = new QSpacerItem(121, 29, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem2);

        buttonBox = new QDialogButtonBox(PreferencesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::Reset);

        hboxLayout1->addWidget(buttonBox);


        gridLayout->addLayout(hboxLayout1, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        pieceThemeLabel->setBuddy(pieceThemeCombo);
        boardThemeLabel->setBuddy(boardThemeCombo);
        label->setBuddy(boardColorsList);
        labelNotationColors->setBuddy(boardColorsList);
        label_2->setBuddy(engineDirectory);
        label_6->setBuddy(engineName);
        label_5->setBuddy(engineOptions);
        label_3->setBuddy(engineCommand);
        lbDataBasePath->setBuddy(defaultDataBasePath);
        lbRecentFiles->setBuddy(spinBoxRecentFiles);
        lbLimitSpin->setBuddy(limitSpin);
        labelFontText->setBuddy(fontText);
        labelFontMove->setBuddy(fontMove);
        labelGameTextFontSize->setBuddy(gameTextFontSizeSpin);
        lbExtToolParamter->setBuddy(extToolParameters);
        lbExtToolPath->setBuddy(extToolPath);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(tabWidget, pieceThemeCombo);
        QWidget::setTabOrder(pieceThemeCombo, boardThemeCombo);
        QWidget::setTabOrder(boardThemeCombo, engineName);
        QWidget::setTabOrder(engineName, engineCommand);
        QWidget::setTabOrder(engineCommand, engineOptions);
        QWidget::setTabOrder(engineOptions, engineDirectory);
        QWidget::setTabOrder(engineDirectory, engineProtocolUCI);
        QWidget::setTabOrder(engineProtocolUCI, engineProtocolWinBoard);

        retranslateUi(PreferencesDialog);
        QObject::connect(btSelectMoveFont, SIGNAL(clicked()), PreferencesDialog, SLOT(slotBtMoveFontClicked()));
        QObject::connect(btSelectTextFont, SIGNAL(clicked()), PreferencesDialog, SLOT(slotBtTextFontClicked()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *PreferencesDialog)
    {
        PreferencesDialog->setWindowTitle(QApplication::translate("PreferencesDialog", "Preferences", 0));
        pieceEffect->clear();
        pieceEffect->insertItems(0, QStringList()
         << QApplication::translate("PreferencesDialog", "plain", 0)
         << QApplication::translate("PreferencesDialog", "outline", 0)
         << QApplication::translate("PreferencesDialog", "outline+shadow", 0)
        );
        groupBox->setTitle(QApplication::translate("PreferencesDialog", "Mouse Behaviour", 0));
        guessMoveCheck->setText(QApplication::translate("PreferencesDialog", "&Guess move on left-click", 0));
        guessNextMove->setText(QApplication::translate("PreferencesDialog", "Next guess on right click", 0));
        labelWheel->setText(QApplication::translate("PreferencesDialog", "Wheel sensitivity", 0));
        labelFast->setText(QApplication::translate("PreferencesDialog", "Fast", 0));
        label_10->setText(QApplication::translate("PreferencesDialog", "Slow", 0));
        pieceThemeLabel->setText(QApplication::translate("PreferencesDialog", "&Chess set:", 0));
        boardShowCoordinates->setText(QApplication::translate("PreferencesDialog", "Draw Coordinates", 0));
        boardThemeLabel->setText(QApplication::translate("PreferencesDialog", "Board &style:", 0));
        label_7->setText(QApplication::translate("PreferencesDialog", "Highlight current move:", 0));
        boardFrameCheck->setText(QApplication::translate("PreferencesDialog", "&Draw frame between squares", 0));
        hilightCurrentMove->clear();
        hilightCurrentMove->insertItems(0, QStringList()
         << QApplication::translate("PreferencesDialog", "Never", 0)
         << QApplication::translate("PreferencesDialog", "Frame", 0)
         << QApplication::translate("PreferencesDialog", "Arrow", 0)
        );
        label->setText(QApplication::translate("PreferencesDialog", "&Colors:", 0));
        btShowThreat->setText(QApplication::translate("PreferencesDialog", "Show threat", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabGeneral), QApplication::translate("PreferencesDialog", "&Board", 0));
        groupBox_6->setTitle(QApplication::translate("PreferencesDialog", "Game Text", 0));
        cbShowDiagrams->setText(QApplication::translate("PreferencesDialog", "Show Diagrams", 0));
        cbColumnStyle->setText(QApplication::translate("PreferencesDialog", "Column Style", 0));
        label_20->setText(QApplication::translate("PreferencesDialog", "Keep variations inline from level", 0));
        label_21->setText(QApplication::translate("PreferencesDialog", "Diagram Size", 0));
        label_14->setText(QApplication::translate("PreferencesDialog", "Pieces", 0));
#ifndef QT_NO_TOOLTIP
        pieceString->setToolTip(QApplication::translate("PreferencesDialog", "Put the initials of the pieces here, mind the initial space.", 0));
#endif // QT_NO_TOOLTIP
        pieceString->setText(QString());
        pieceString->setPlaceholderText(QApplication::translate("PreferencesDialog", " KQRBN - Mind the initial space!", 0));
        tbUK->setText(QApplication::translate("PreferencesDialog", "...", 0));
        tbGermany->setText(QApplication::translate("PreferencesDialog", "...", 0));
        tbFrance->setText(QApplication::translate("PreferencesDialog", "...", 0));
        tbPoland->setText(QApplication::translate("PreferencesDialog", "...", 0));
        tbSymbolic->setText(QString());
        labelNotationColors->setText(QApplication::translate("PreferencesDialog", "Colors:", 0));
        gbBoardOptions->setTitle(QApplication::translate("PreferencesDialog", "Autoplayer", 0));
        cbSaveAndContinue->setText(QApplication::translate("PreferencesDialog", "Automatically save game and continue with next", 0));
        cbBackwardAnalysis->setText(QApplication::translate("PreferencesDialog", "Auto Analysis backwards", 0));
        groupBox_8->setTitle(QApplication::translate("PreferencesDialog", "Automatic Promotion", 0));
        cbPromoteToQueen->setText(QApplication::translate("PreferencesDialog", "Always queen a pawn", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabAutoplay), QApplication::translate("PreferencesDialog", "Game", 0));
        engineCommand->setPlaceholderText(QApplication::translate("PreferencesDialog", "Path to executable", 0));
        engineDirectory->setPlaceholderText(QApplication::translate("PreferencesDialog", "Path where engine is started - usually place of books", 0));
        label_2->setText(QApplication::translate("PreferencesDialog", "Directory:", 0));
        label_4->setText(QApplication::translate("PreferencesDialog", "Protocol:", 0));
        label_6->setText(QApplication::translate("PreferencesDialog", "Name:", 0));
        label_5->setText(QApplication::translate("PreferencesDialog", "Options:", 0));
        label_3->setText(QApplication::translate("PreferencesDialog", "Command:", 0));
        engineOptions->setPlaceholderText(QApplication::translate("PreferencesDialog", "Command Line Options", 0));
        engineOptionMore->setText(QApplication::translate("PreferencesDialog", "Options", 0));
        engineName->setPlaceholderText(QApplication::translate("PreferencesDialog", "Arbitrary name to identify engine ", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabEngines), QApplication::translate("PreferencesDialog", "&Engines", 0));
        automaticECO->setText(QApplication::translate("PreferencesDialog", "Automatic classification with ECO Codes", 0));
        useIndexFile->setText(QApplication::translate("PreferencesDialog", "Build index file", 0));
        cbAutoCommitDB->setText(QApplication::translate("PreferencesDialog", "Commit Database after saving Game", 0));
        defaultDataBasePath->setPlaceholderText(QApplication::translate("PreferencesDialog", "Default path for storing files", 0));
        lbDataBasePath->setText(QApplication::translate("PreferencesDialog", "Default Database Path:", 0));
        lbRecentFiles->setText(QApplication::translate("PreferencesDialog", "Number of recent files:", 0));
        lbLimitSpin->setText(QApplication::translate("PreferencesDialog", "&Edit PGN files smaller than:", 0));
        limitSpin->setSuffix(QApplication::translate("PreferencesDialog", " MB", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabAdvanced), QApplication::translate("PreferencesDialog", "Database", 0));
        groupBox_1->setTitle(QApplication::translate("PreferencesDialog", "Fonts for notation", 0));
        labelFontText->setText(QApplication::translate("PreferencesDialog", "Texts", 0));
        fontText->setPlaceholderText(QString());
        btSelectTextFont->setText(QApplication::translate("PreferencesDialog", "...", 0));
        labelFontMove->setText(QApplication::translate("PreferencesDialog", "Moves", 0));
        fontMove->setPlaceholderText(QApplication::translate("PreferencesDialog", "Font with Chess Symbols (Unicode)", 0));
        btSelectMoveFont->setText(QApplication::translate("PreferencesDialog", "...", 0));
        labelGameTextFontSize->setText(QApplication::translate("PreferencesDialog", "Font Size", 0));
        groupBox_7->setTitle(QApplication::translate("PreferencesDialog", "Application", 0));
        labelShowMoveIndicator->setText(QApplication::translate("PreferencesDialog", "Show move indicator", 0));
        cbShowIndicator->clear();
        cbShowIndicator->insertItems(0, QStringList()
         << QApplication::translate("PreferencesDialog", "Automatic", 0)
         << QApplication::translate("PreferencesDialog", "Always", 0)
         << QApplication::translate("PreferencesDialog", "Never", 0)
        );
        iconsVisible->setText(QApplication::translate("PreferencesDialog", "Icons visible in menus", 0));
        verticalTabs->setText(QApplication::translate("PreferencesDialog", "Use vertical Tabs", 0));
        labelListFontSize->setText(QApplication::translate("PreferencesDialog", "Font Size", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabFonts), QApplication::translate("PreferencesDialog", "Appearance", 0));
        guestLogin->setText(QApplication::translate("PreferencesDialog", "Log in as guest", 0));
        label_8->setText(QApplication::translate("PreferencesDialog", "Login", 0));
        label_9->setText(QApplication::translate("PreferencesDialog", "Password", 0));
        btUseTimeseal->setText(QApplication::translate("PreferencesDialog", "Try to use Timeseal", 0));
        groupBox_4->setTitle(QApplication::translate("PreferencesDialog", "Internet", 0));
        tablebaseCheck->setText(QApplication::translate("PreferencesDialog", "Use online tablebase servers", 0));
        versionCheck->setText(QApplication::translate("PreferencesDialog", "Check for updates (at startup) and language packs", 0));
        groupBox_5->setTitle(QApplication::translate("PreferencesDialog", "Localization", 0));
        label_12->setText(QApplication::translate("PreferencesDialog", "Language", 0));
        label_13->setText(QApplication::translate("PreferencesDialog", "Changing the language requires restarting the application!", 0));
        label_19->setText(QApplication::translate("PreferencesDialog", "Load language file from Server:", 0));
        btLoadLang->setText(QApplication::translate("PreferencesDialog", "Load!", 0));
        labelLoadStatus->setText(QString());
        groupAppExternal->setTitle(QApplication::translate("PreferencesDialog", "External Tools", 0));
        lbExtToolParamter->setText(QApplication::translate("PreferencesDialog", "Parameters", 0));
        lbExtToolPath->setText(QApplication::translate("PreferencesDialog", "Path", 0));
        btExtToolPath->setText(QApplication::translate("PreferencesDialog", "...", 0));
        extToolPath->setText(QString());
        extToolPath->setPlaceholderText(QApplication::translate("PreferencesDialog", "Path and filename of external program", 0));
        extToolParameters->setPlaceholderText(QApplication::translate("PreferencesDialog", "Command line, also $(InputPath), $(InputFile)", 0));
        groupBox_3->setTitle(QApplication::translate("PreferencesDialog", "Sound", 0));
        cbSoundOn->setText(QApplication::translate("PreferencesDialog", "Indicate opponent's move", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabApp), QApplication::translate("PreferencesDialog", "App", 0));
    } // retranslateUi

};

namespace Ui {
    class PreferencesDialog: public Ui_PreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCES_H
