/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gui/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[235];
    char stringdata[3602];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 11), // "reconfigure"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 11), // "boardChange"
QT_MOC_LITERAL(4, 36, 5), // "Board"
QT_MOC_LITERAL(5, 42, 5), // "board"
QT_MOC_LITERAL(6, 48, 15), // "databaseChanged"
QT_MOC_LITERAL(7, 64, 13), // "DatabaseInfo*"
QT_MOC_LITERAL(8, 78, 12), // "databaseInfo"
QT_MOC_LITERAL(9, 91, 12), // "LoadFinished"
QT_MOC_LITERAL(10, 104, 11), // "displayTime"
QT_MOC_LITERAL(11, 116, 5), // "Color"
QT_MOC_LITERAL(12, 122, 22), // "signalMoveHasVariation"
QT_MOC_LITERAL(13, 145, 25), // "signalVariationHasSibling"
QT_MOC_LITERAL(14, 171, 25), // "signalMoveHasPreviousMove"
QT_MOC_LITERAL(15, 197, 21), // "signalMoveHasNextMove"
QT_MOC_LITERAL(16, 219, 19), // "signalMoveHasParent"
QT_MOC_LITERAL(17, 239, 17), // "signalGameIsEmpty"
QT_MOC_LITERAL(18, 257, 21), // "signalGameAtLineStart"
QT_MOC_LITERAL(19, 279, 21), // "signalGameModeChanged"
QT_MOC_LITERAL(20, 301, 18), // "signalGameModified"
QT_MOC_LITERAL(21, 320, 15), // "gameNeedsSaving"
QT_MOC_LITERAL(22, 336, 26), // "signalCurrentDBisReadWrite"
QT_MOC_LITERAL(23, 363, 26), // "signalCurrentDBcanBeClosed"
QT_MOC_LITERAL(24, 390, 23), // "signalCurrentDBhasGames"
QT_MOC_LITERAL(25, 414, 16), // "signalGameLoaded"
QT_MOC_LITERAL(26, 431, 18), // "signalVersionFound"
QT_MOC_LITERAL(27, 450, 16), // "databaseModified"
QT_MOC_LITERAL(28, 467, 23), // "signalDatabaseOpenClose"
QT_MOC_LITERAL(29, 491, 9), // "enterText"
QT_MOC_LITERAL(30, 501, 18), // "slotToggleGameMode"
QT_MOC_LITERAL(31, 520, 12), // "slotFlipView"
QT_MOC_LITERAL(32, 533, 13), // "enterGameMode"
QT_MOC_LITERAL(33, 547, 8), // "gameMode"
QT_MOC_LITERAL(34, 556, 12), // "openDatabase"
QT_MOC_LITERAL(35, 569, 5), // "fname"
QT_MOC_LITERAL(36, 575, 15), // "openDatabaseUrl"
QT_MOC_LITERAL(37, 591, 4), // "utf8"
QT_MOC_LITERAL(38, 596, 19), // "openDatabaseArchive"
QT_MOC_LITERAL(39, 616, 16), // "openDatabaseFile"
QT_MOC_LITERAL(40, 633, 19), // "setFavoriteDatabase"
QT_MOC_LITERAL(41, 653, 18), // "slotEditVarPromote"
QT_MOC_LITERAL(42, 672, 17), // "slotEditVarRemove"
QT_MOC_LITERAL(43, 690, 13), // "slotEditBoard"
QT_MOC_LITERAL(44, 704, 15), // "slotEditComment"
QT_MOC_LITERAL(45, 720, 21), // "slotEditCommentBefore"
QT_MOC_LITERAL(46, 742, 15), // "slotEditCopyFEN"
QT_MOC_LITERAL(47, 758, 20), // "slotEditCopyHumanFEN"
QT_MOC_LITERAL(48, 779, 16), // "slotEditPasteFEN"
QT_MOC_LITERAL(49, 796, 15), // "slotEditCopyPGN"
QT_MOC_LITERAL(50, 812, 16), // "slotEditPastePGN"
QT_MOC_LITERAL(51, 829, 13), // "slotEditPaste"
QT_MOC_LITERAL(52, 843, 17), // "slotEditCopyImage"
QT_MOC_LITERAL(53, 861, 19), // "slotEditTruncateEnd"
QT_MOC_LITERAL(54, 881, 21), // "slotEditTruncateStart"
QT_MOC_LITERAL(55, 903, 12), // "slotSendMail"
QT_MOC_LITERAL(56, 916, 15), // "slotReconfigure"
QT_MOC_LITERAL(57, 932, 13), // "slotConfigure"
QT_MOC_LITERAL(58, 946, 13), // "slotHelpAbout"
QT_MOC_LITERAL(59, 960, 11), // "slotHelpBug"
QT_MOC_LITERAL(60, 972, 17), // "slotConfigureFlip"
QT_MOC_LITERAL(61, 990, 17), // "slotGameMoveFirst"
QT_MOC_LITERAL(62, 1008, 16), // "slotGameMoveNext"
QT_MOC_LITERAL(63, 1025, 20), // "slotGameMovePrevious"
QT_MOC_LITERAL(64, 1046, 16), // "slotGameMoveLast"
QT_MOC_LITERAL(65, 1063, 17), // "slotGameMoveNextN"
QT_MOC_LITERAL(66, 1081, 21), // "slotGameMovePreviousN"
QT_MOC_LITERAL(67, 1103, 17), // "slotGameLoadFirst"
QT_MOC_LITERAL(68, 1121, 16), // "slotGameLoadNext"
QT_MOC_LITERAL(69, 1138, 20), // "slotGameLoadPrevious"
QT_MOC_LITERAL(70, 1159, 16), // "slotGameLoadLast"
QT_MOC_LITERAL(71, 1176, 18), // "slotGameLoadRandom"
QT_MOC_LITERAL(72, 1195, 18), // "slotGameLoadChosen"
QT_MOC_LITERAL(73, 1214, 16), // "slotGameVarEnter"
QT_MOC_LITERAL(74, 1231, 13), // "slotGameVarUp"
QT_MOC_LITERAL(75, 1245, 15), // "slotGameVarDown"
QT_MOC_LITERAL(76, 1261, 15), // "slotGameVarExit"
QT_MOC_LITERAL(77, 1277, 14), // "slotGameModify"
QT_MOC_LITERAL(78, 1292, 10), // "EditAction"
QT_MOC_LITERAL(79, 1303, 6), // "action"
QT_MOC_LITERAL(80, 1310, 17), // "slotGetActiveGame"
QT_MOC_LITERAL(81, 1328, 12), // "const Game**"
QT_MOC_LITERAL(82, 1341, 4), // "game"
QT_MOC_LITERAL(83, 1346, 19), // "slotMergeActiveGame"
QT_MOC_LITERAL(84, 1366, 10), // "QList<int>"
QT_MOC_LITERAL(85, 1377, 13), // "gameIndexList"
QT_MOC_LITERAL(86, 1391, 9), // "gameIndex"
QT_MOC_LITERAL(87, 1401, 17), // "slotMergeAllGames"
QT_MOC_LITERAL(88, 1419, 15), // "slotMergeFilter"
QT_MOC_LITERAL(89, 1435, 15), // "slotGameChanged"
QT_MOC_LITERAL(90, 1451, 16), // "slotGameViewLink"
QT_MOC_LITERAL(91, 1468, 4), // "link"
QT_MOC_LITERAL(92, 1473, 18), // "slotGameViewSource"
QT_MOC_LITERAL(93, 1492, 21), // "slotGameDumpMoveNodes"
QT_MOC_LITERAL(94, 1514, 11), // "slotGameNew"
QT_MOC_LITERAL(95, 1526, 12), // "slotGameSave"
QT_MOC_LITERAL(96, 1539, 16), // "slotGameSaveOnly"
QT_MOC_LITERAL(97, 1556, 16), // "slotGameEditTags"
QT_MOC_LITERAL(98, 1573, 20), // "slotGameAddVariation"
QT_MOC_LITERAL(99, 1594, 8), // "Analysis"
QT_MOC_LITERAL(100, 1603, 8), // "analysis"
QT_MOC_LITERAL(101, 1612, 3), // "san"
QT_MOC_LITERAL(102, 1616, 17), // "slotGameUncomment"
QT_MOC_LITERAL(103, 1634, 24), // "slotGameRemoveVariations"
QT_MOC_LITERAL(104, 1659, 20), // "slotToggleAutoPlayer"
QT_MOC_LITERAL(105, 1680, 22), // "slotToggleAutoAnalysis"
QT_MOC_LITERAL(106, 1703, 19), // "slotAutoPlayTimeout"
QT_MOC_LITERAL(107, 1723, 17), // "slotEngineTimeout"
QT_MOC_LITERAL(108, 1741, 17), // "slotFilterChanged"
QT_MOC_LITERAL(109, 1759, 14), // "slotFilterLoad"
QT_MOC_LITERAL(110, 1774, 5), // "index"
QT_MOC_LITERAL(111, 1780, 11), // "slotFileNew"
QT_MOC_LITERAL(112, 1792, 12), // "slotFileOpen"
QT_MOC_LITERAL(113, 1805, 16), // "slotFileOpenUtf8"
QT_MOC_LITERAL(114, 1822, 12), // "slotFileSave"
QT_MOC_LITERAL(115, 1835, 18), // "slotFileOpenRecent"
QT_MOC_LITERAL(116, 1854, 18), // "slotFileExportGame"
QT_MOC_LITERAL(117, 1873, 20), // "slotFileExportFilter"
QT_MOC_LITERAL(118, 1894, 17), // "slotFileExportAll"
QT_MOC_LITERAL(119, 1912, 13), // "slotFileClose"
QT_MOC_LITERAL(120, 1926, 18), // "slotFileCloseIndex"
QT_MOC_LITERAL(121, 1945, 17), // "slotFileCloseName"
QT_MOC_LITERAL(122, 1963, 12), // "slotFileQuit"
QT_MOC_LITERAL(123, 1976, 13), // "slotSearchTag"
QT_MOC_LITERAL(124, 1990, 15), // "slotSearchBoard"
QT_MOC_LITERAL(125, 2006, 22), // "slotBoardSearchStarted"
QT_MOC_LITERAL(126, 2029, 21), // "slotBoardSearchUpdate"
QT_MOC_LITERAL(127, 2051, 8), // "progress"
QT_MOC_LITERAL(128, 2060, 23), // "slotBoardSearchFinished"
QT_MOC_LITERAL(129, 2084, 15), // "slotSearchReset"
QT_MOC_LITERAL(130, 2100, 18), // "slotToggleTraining"
QT_MOC_LITERAL(131, 2119, 21), // "slotToggleAutoRespond"
QT_MOC_LITERAL(132, 2141, 17), // "slotSearchReverse"
QT_MOC_LITERAL(133, 2159, 14), // "slotTreeUpdate"
QT_MOC_LITERAL(134, 2174, 16), // "dbIsFilterSource"
QT_MOC_LITERAL(135, 2191, 14), // "slotSearchTree"
QT_MOC_LITERAL(136, 2206, 18), // "slotSearchTreeMove"
QT_MOC_LITERAL(137, 2225, 13), // "slotBoardMove"
QT_MOC_LITERAL(138, 2239, 6), // "Square"
QT_MOC_LITERAL(139, 2246, 4), // "from"
QT_MOC_LITERAL(140, 2251, 2), // "to"
QT_MOC_LITERAL(141, 2254, 6), // "button"
QT_MOC_LITERAL(142, 2261, 15), // "slotMoveStarted"
QT_MOC_LITERAL(143, 2277, 16), // "slotMoveFinished"
QT_MOC_LITERAL(144, 2294, 14), // "slotBoardClick"
QT_MOC_LITERAL(145, 2309, 6), // "square"
QT_MOC_LITERAL(146, 2316, 3), // "pos"
QT_MOC_LITERAL(147, 2320, 18), // "slotBoardMoveWheel"
QT_MOC_LITERAL(148, 2339, 5), // "wheel"
QT_MOC_LITERAL(149, 2345, 15), // "slotMoveChanged"
QT_MOC_LITERAL(150, 2361, 17), // "slotGameMoveToPly"
QT_MOC_LITERAL(151, 2379, 3), // "ply"
QT_MOC_LITERAL(152, 2383, 17), // "slotStatusMessage"
QT_MOC_LITERAL(153, 2401, 3), // "msg"
QT_MOC_LITERAL(154, 2405, 21), // "slotOperationProgress"
QT_MOC_LITERAL(155, 2427, 18), // "slotDatabaseChange"
QT_MOC_LITERAL(156, 2446, 16), // "slotDatabaseCopy"
QT_MOC_LITERAL(157, 2463, 9), // "preselect"
QT_MOC_LITERAL(158, 2473, 26), // "slotDatabaseClearClipboard"
QT_MOC_LITERAL(159, 2500, 22), // "slotDatabaseCopySingle"
QT_MOC_LITERAL(160, 2523, 9), // "listGames"
QT_MOC_LITERAL(161, 2533, 19), // "slotDatabaseChanged"
QT_MOC_LITERAL(162, 2553, 22), // "slotDatabaseDeleteGame"
QT_MOC_LITERAL(163, 2576, 24), // "slotDatabaseDeleteFilter"
QT_MOC_LITERAL(164, 2601, 18), // "slotDataBaseLoaded"
QT_MOC_LITERAL(165, 2620, 2), // "db"
QT_MOC_LITERAL(166, 2623, 18), // "slotDbRestoreState"
QT_MOC_LITERAL(167, 2642, 4), // "Game"
QT_MOC_LITERAL(168, 2647, 15), // "slotGetGameData"
QT_MOC_LITERAL(169, 2663, 5), // "Game&"
QT_MOC_LITERAL(170, 2669, 1), // "g"
QT_MOC_LITERAL(171, 2671, 9), // "copyGames"
QT_MOC_LITERAL(172, 2681, 8), // "fileName"
QT_MOC_LITERAL(173, 2690, 7), // "indexes"
QT_MOC_LITERAL(174, 2698, 12), // "copyDatabase"
QT_MOC_LITERAL(175, 2711, 6), // "target"
QT_MOC_LITERAL(176, 2718, 3), // "src"
QT_MOC_LITERAL(177, 2722, 15), // "slotRenameEvent"
QT_MOC_LITERAL(178, 2738, 2), // "ts"
QT_MOC_LITERAL(179, 2741, 16), // "slotRenamePlayer"
QT_MOC_LITERAL(180, 2758, 17), // "slotRenameRequest"
QT_MOC_LITERAL(181, 2776, 3), // "tag"
QT_MOC_LITERAL(182, 2780, 8), // "newValue"
QT_MOC_LITERAL(183, 2789, 8), // "oldValue"
QT_MOC_LITERAL(184, 2798, 15), // "slotExportImage"
QT_MOC_LITERAL(185, 2814, 12), // "slotMakeBook"
QT_MOC_LITERAL(186, 2827, 1), // "s"
QT_MOC_LITERAL(187, 2829, 16), // "slotShowInFinder"
QT_MOC_LITERAL(188, 2846, 4), // "path"
QT_MOC_LITERAL(189, 2851, 18), // "slotBookBuildError"
QT_MOC_LITERAL(190, 2870, 16), // "slotEditMergePGN"
QT_MOC_LITERAL(191, 2887, 22), // "HandleFicsBoardRequest"
QT_MOC_LITERAL(192, 2910, 23), // "HandleFicsResultRequest"
QT_MOC_LITERAL(193, 2934, 24), // "HandleFicsNewGameRequest"
QT_MOC_LITERAL(194, 2959, 25), // "HandleFicsSaveGameRequest"
QT_MOC_LITERAL(195, 2985, 23), // "HandleFicsAddTagRequest"
QT_MOC_LITERAL(196, 3009, 5), // "value"
QT_MOC_LITERAL(197, 3015, 22), // "HandleFicsCloseRequest"
QT_MOC_LITERAL(198, 3038, 19), // "updateMenuDatabases"
QT_MOC_LITERAL(199, 3058, 9), // "loadError"
QT_MOC_LITERAL(200, 3068, 3), // "url"
QT_MOC_LITERAL(201, 3072, 9), // "loadReady"
QT_MOC_LITERAL(202, 3082, 17), // "slotNoColorSquare"
QT_MOC_LITERAL(203, 3100, 15), // "slotGreenSquare"
QT_MOC_LITERAL(204, 3116, 16), // "slotYellowSquare"
QT_MOC_LITERAL(205, 3133, 13), // "slotRedSquare"
QT_MOC_LITERAL(206, 3147, 15), // "slotNoArrowHere"
QT_MOC_LITERAL(207, 3163, 18), // "slotGreenArrowHere"
QT_MOC_LITERAL(208, 3182, 19), // "slotYellowArrowHere"
QT_MOC_LITERAL(209, 3202, 16), // "slotRedArrowHere"
QT_MOC_LITERAL(210, 3219, 19), // "slotToggleStayOnTop"
QT_MOC_LITERAL(211, 3239, 21), // "slotActivateBoardView"
QT_MOC_LITERAL(212, 3261, 18), // "slotCloseBoardView"
QT_MOC_LITERAL(213, 3280, 1), // "n"
QT_MOC_LITERAL(214, 3282, 14), // "slotScreenShot"
QT_MOC_LITERAL(215, 3297, 14), // "slotCompileECO"
QT_MOC_LITERAL(216, 3312, 17), // "slotAutoSwitchTab"
QT_MOC_LITERAL(217, 3330, 15), // "slotEditActions"
QT_MOC_LITERAL(218, 3346, 23), // "slotMoveIntervalChanged"
QT_MOC_LITERAL(219, 3370, 17), // "slotSetSliderText"
QT_MOC_LITERAL(220, 3388, 17), // "QueryLoadDatabase"
QT_MOC_LITERAL(221, 3406, 16), // "FicsDisconnected"
QT_MOC_LITERAL(222, 3423, 13), // "FicsConnected"
QT_MOC_LITERAL(223, 3437, 27), // "HandleFicsRequestRemoveMove"
QT_MOC_LITERAL(224, 3465, 8), // "openFICS"
QT_MOC_LITERAL(225, 3474, 9), // "ecoLoaded"
QT_MOC_LITERAL(226, 3484, 20), // "slotDatabaseModified"
QT_MOC_LITERAL(227, 3505, 12), // "slotHttpDone"
QT_MOC_LITERAL(228, 3518, 14), // "QNetworkReply*"
QT_MOC_LITERAL(229, 3533, 5), // "reply"
QT_MOC_LITERAL(230, 3539, 16), // "slotVersionFound"
QT_MOC_LITERAL(231, 3556, 5), // "major"
QT_MOC_LITERAL(232, 3562, 5), // "minor"
QT_MOC_LITERAL(233, 3568, 5), // "build"
QT_MOC_LITERAL(234, 3574, 27) // "slotUpdateOpeningTreeWidget"

    },
    "MainWindow\0reconfigure\0\0boardChange\0"
    "Board\0board\0databaseChanged\0DatabaseInfo*\0"
    "databaseInfo\0LoadFinished\0displayTime\0"
    "Color\0signalMoveHasVariation\0"
    "signalVariationHasSibling\0"
    "signalMoveHasPreviousMove\0"
    "signalMoveHasNextMove\0signalMoveHasParent\0"
    "signalGameIsEmpty\0signalGameAtLineStart\0"
    "signalGameModeChanged\0signalGameModified\0"
    "gameNeedsSaving\0signalCurrentDBisReadWrite\0"
    "signalCurrentDBcanBeClosed\0"
    "signalCurrentDBhasGames\0signalGameLoaded\0"
    "signalVersionFound\0databaseModified\0"
    "signalDatabaseOpenClose\0enterText\0"
    "slotToggleGameMode\0slotFlipView\0"
    "enterGameMode\0gameMode\0openDatabase\0"
    "fname\0openDatabaseUrl\0utf8\0"
    "openDatabaseArchive\0openDatabaseFile\0"
    "setFavoriteDatabase\0slotEditVarPromote\0"
    "slotEditVarRemove\0slotEditBoard\0"
    "slotEditComment\0slotEditCommentBefore\0"
    "slotEditCopyFEN\0slotEditCopyHumanFEN\0"
    "slotEditPasteFEN\0slotEditCopyPGN\0"
    "slotEditPastePGN\0slotEditPaste\0"
    "slotEditCopyImage\0slotEditTruncateEnd\0"
    "slotEditTruncateStart\0slotSendMail\0"
    "slotReconfigure\0slotConfigure\0"
    "slotHelpAbout\0slotHelpBug\0slotConfigureFlip\0"
    "slotGameMoveFirst\0slotGameMoveNext\0"
    "slotGameMovePrevious\0slotGameMoveLast\0"
    "slotGameMoveNextN\0slotGameMovePreviousN\0"
    "slotGameLoadFirst\0slotGameLoadNext\0"
    "slotGameLoadPrevious\0slotGameLoadLast\0"
    "slotGameLoadRandom\0slotGameLoadChosen\0"
    "slotGameVarEnter\0slotGameVarUp\0"
    "slotGameVarDown\0slotGameVarExit\0"
    "slotGameModify\0EditAction\0action\0"
    "slotGetActiveGame\0const Game**\0game\0"
    "slotMergeActiveGame\0QList<int>\0"
    "gameIndexList\0gameIndex\0slotMergeAllGames\0"
    "slotMergeFilter\0slotGameChanged\0"
    "slotGameViewLink\0link\0slotGameViewSource\0"
    "slotGameDumpMoveNodes\0slotGameNew\0"
    "slotGameSave\0slotGameSaveOnly\0"
    "slotGameEditTags\0slotGameAddVariation\0"
    "Analysis\0analysis\0san\0slotGameUncomment\0"
    "slotGameRemoveVariations\0slotToggleAutoPlayer\0"
    "slotToggleAutoAnalysis\0slotAutoPlayTimeout\0"
    "slotEngineTimeout\0slotFilterChanged\0"
    "slotFilterLoad\0index\0slotFileNew\0"
    "slotFileOpen\0slotFileOpenUtf8\0"
    "slotFileSave\0slotFileOpenRecent\0"
    "slotFileExportGame\0slotFileExportFilter\0"
    "slotFileExportAll\0slotFileClose\0"
    "slotFileCloseIndex\0slotFileCloseName\0"
    "slotFileQuit\0slotSearchTag\0slotSearchBoard\0"
    "slotBoardSearchStarted\0slotBoardSearchUpdate\0"
    "progress\0slotBoardSearchFinished\0"
    "slotSearchReset\0slotToggleTraining\0"
    "slotToggleAutoRespond\0slotSearchReverse\0"
    "slotTreeUpdate\0dbIsFilterSource\0"
    "slotSearchTree\0slotSearchTreeMove\0"
    "slotBoardMove\0Square\0from\0to\0button\0"
    "slotMoveStarted\0slotMoveFinished\0"
    "slotBoardClick\0square\0pos\0slotBoardMoveWheel\0"
    "wheel\0slotMoveChanged\0slotGameMoveToPly\0"
    "ply\0slotStatusMessage\0msg\0"
    "slotOperationProgress\0slotDatabaseChange\0"
    "slotDatabaseCopy\0preselect\0"
    "slotDatabaseClearClipboard\0"
    "slotDatabaseCopySingle\0listGames\0"
    "slotDatabaseChanged\0slotDatabaseDeleteGame\0"
    "slotDatabaseDeleteFilter\0slotDataBaseLoaded\0"
    "db\0slotDbRestoreState\0Game\0slotGetGameData\0"
    "Game&\0g\0copyGames\0fileName\0indexes\0"
    "copyDatabase\0target\0src\0slotRenameEvent\0"
    "ts\0slotRenamePlayer\0slotRenameRequest\0"
    "tag\0newValue\0oldValue\0slotExportImage\0"
    "slotMakeBook\0s\0slotShowInFinder\0path\0"
    "slotBookBuildError\0slotEditMergePGN\0"
    "HandleFicsBoardRequest\0HandleFicsResultRequest\0"
    "HandleFicsNewGameRequest\0"
    "HandleFicsSaveGameRequest\0"
    "HandleFicsAddTagRequest\0value\0"
    "HandleFicsCloseRequest\0updateMenuDatabases\0"
    "loadError\0url\0loadReady\0slotNoColorSquare\0"
    "slotGreenSquare\0slotYellowSquare\0"
    "slotRedSquare\0slotNoArrowHere\0"
    "slotGreenArrowHere\0slotYellowArrowHere\0"
    "slotRedArrowHere\0slotToggleStayOnTop\0"
    "slotActivateBoardView\0slotCloseBoardView\0"
    "n\0slotScreenShot\0slotCompileECO\0"
    "slotAutoSwitchTab\0slotEditActions\0"
    "slotMoveIntervalChanged\0slotSetSliderText\0"
    "QueryLoadDatabase\0FicsDisconnected\0"
    "FicsConnected\0HandleFicsRequestRemoveMove\0"
    "openFICS\0ecoLoaded\0slotDatabaseModified\0"
    "slotHttpDone\0QNetworkReply*\0reply\0"
    "slotVersionFound\0major\0minor\0build\0"
    "slotUpdateOpeningTreeWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     186,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      22,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  944,    2, 0x06 /* Public */,
       3,    1,  945,    2, 0x06 /* Public */,
       6,    1,  948,    2, 0x06 /* Public */,
       9,    1,  951,    2, 0x06 /* Public */,
      10,    2,  954,    2, 0x06 /* Public */,
      12,    1,  959,    2, 0x06 /* Public */,
      13,    1,  962,    2, 0x06 /* Public */,
      14,    1,  965,    2, 0x06 /* Public */,
      15,    1,  968,    2, 0x06 /* Public */,
      16,    1,  971,    2, 0x06 /* Public */,
      17,    1,  974,    2, 0x06 /* Public */,
      18,    1,  977,    2, 0x06 /* Public */,
      19,    1,  980,    2, 0x06 /* Public */,
      20,    1,  983,    2, 0x06 /* Public */,
      22,    1,  986,    2, 0x06 /* Public */,
      23,    1,  989,    2, 0x06 /* Public */,
      24,    1,  992,    2, 0x06 /* Public */,
      25,    0,  995,    2, 0x06 /* Public */,
      26,    3,  996,    2, 0x06 /* Public */,
      27,    0, 1003,    2, 0x06 /* Public */,
      28,    0, 1004,    2, 0x06 /* Public */,
      29,    1, 1005,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      30,    0, 1008,    2, 0x0a /* Public */,
      31,    1, 1009,    2, 0x0a /* Public */,
      32,    1, 1012,    2, 0x0a /* Public */,
      34,    1, 1015,    2, 0x0a /* Public */,
      36,    2, 1018,    2, 0x0a /* Public */,
      38,    2, 1023,    2, 0x0a /* Public */,
      39,    2, 1028,    2, 0x0a /* Public */,
      40,    1, 1033,    2, 0x0a /* Public */,
      41,    0, 1036,    2, 0x0a /* Public */,
      42,    0, 1037,    2, 0x0a /* Public */,
      43,    0, 1038,    2, 0x0a /* Public */,
      44,    0, 1039,    2, 0x0a /* Public */,
      45,    0, 1040,    2, 0x0a /* Public */,
      46,    0, 1041,    2, 0x0a /* Public */,
      47,    0, 1042,    2, 0x0a /* Public */,
      48,    0, 1043,    2, 0x0a /* Public */,
      49,    0, 1044,    2, 0x0a /* Public */,
      50,    0, 1045,    2, 0x0a /* Public */,
      51,    0, 1046,    2, 0x0a /* Public */,
      52,    0, 1047,    2, 0x0a /* Public */,
      53,    0, 1048,    2, 0x0a /* Public */,
      54,    0, 1049,    2, 0x0a /* Public */,
      55,    0, 1050,    2, 0x0a /* Public */,
      56,    0, 1051,    2, 0x0a /* Public */,
      57,    0, 1052,    2, 0x0a /* Public */,
      58,    0, 1053,    2, 0x0a /* Public */,
      59,    0, 1054,    2, 0x0a /* Public */,
      60,    0, 1055,    2, 0x0a /* Public */,
      61,    0, 1056,    2, 0x0a /* Public */,
      62,    0, 1057,    2, 0x0a /* Public */,
      63,    0, 1058,    2, 0x0a /* Public */,
      64,    0, 1059,    2, 0x0a /* Public */,
      65,    0, 1060,    2, 0x0a /* Public */,
      66,    0, 1061,    2, 0x0a /* Public */,
      67,    0, 1062,    2, 0x0a /* Public */,
      68,    0, 1063,    2, 0x0a /* Public */,
      69,    0, 1064,    2, 0x0a /* Public */,
      70,    0, 1065,    2, 0x0a /* Public */,
      71,    0, 1066,    2, 0x0a /* Public */,
      72,    0, 1067,    2, 0x0a /* Public */,
      73,    0, 1068,    2, 0x0a /* Public */,
      74,    0, 1069,    2, 0x0a /* Public */,
      75,    0, 1070,    2, 0x0a /* Public */,
      76,    0, 1071,    2, 0x0a /* Public */,
      77,    1, 1072,    2, 0x0a /* Public */,
      80,    1, 1075,    2, 0x0a /* Public */,
      83,    1, 1078,    2, 0x0a /* Public */,
      83,    1, 1081,    2, 0x0a /* Public */,
      87,    0, 1084,    2, 0x0a /* Public */,
      88,    0, 1085,    2, 0x0a /* Public */,
      89,    0, 1086,    2, 0x0a /* Public */,
      90,    1, 1087,    2, 0x0a /* Public */,
      90,    1, 1090,    2, 0x0a /* Public */,
      92,    0, 1093,    2, 0x0a /* Public */,
      93,    0, 1094,    2, 0x0a /* Public */,
      94,    0, 1095,    2, 0x0a /* Public */,
      95,    0, 1096,    2, 0x0a /* Public */,
      96,    0, 1097,    2, 0x0a /* Public */,
      97,    0, 1098,    2, 0x0a /* Public */,
      98,    1, 1099,    2, 0x0a /* Public */,
      98,    1, 1102,    2, 0x0a /* Public */,
     102,    0, 1105,    2, 0x0a /* Public */,
     103,    0, 1106,    2, 0x0a /* Public */,
     104,    0, 1107,    2, 0x0a /* Public */,
     105,    0, 1108,    2, 0x0a /* Public */,
     106,    0, 1109,    2, 0x0a /* Public */,
     107,    1, 1110,    2, 0x0a /* Public */,
     108,    0, 1113,    2, 0x0a /* Public */,
     109,    1, 1114,    2, 0x0a /* Public */,
     111,    0, 1117,    2, 0x0a /* Public */,
     112,    0, 1118,    2, 0x0a /* Public */,
     113,    0, 1119,    2, 0x0a /* Public */,
     114,    0, 1120,    2, 0x0a /* Public */,
     115,    0, 1121,    2, 0x0a /* Public */,
     116,    0, 1122,    2, 0x0a /* Public */,
     117,    0, 1123,    2, 0x0a /* Public */,
     118,    0, 1124,    2, 0x0a /* Public */,
     119,    0, 1125,    2, 0x0a /* Public */,
     120,    1, 1126,    2, 0x0a /* Public */,
     121,    1, 1129,    2, 0x0a /* Public */,
     122,    0, 1132,    2, 0x0a /* Public */,
     123,    0, 1133,    2, 0x0a /* Public */,
     124,    0, 1134,    2, 0x0a /* Public */,
     125,    0, 1135,    2, 0x0a /* Public */,
     126,    1, 1136,    2, 0x0a /* Public */,
     128,    0, 1139,    2, 0x0a /* Public */,
     129,    0, 1140,    2, 0x0a /* Public */,
     130,    0, 1141,    2, 0x0a /* Public */,
     131,    0, 1142,    2, 0x0a /* Public */,
     132,    0, 1143,    2, 0x0a /* Public */,
     133,    1, 1144,    2, 0x0a /* Public */,
     135,    0, 1147,    2, 0x0a /* Public */,
     136,    1, 1148,    2, 0x0a /* Public */,
     137,    3, 1151,    2, 0x0a /* Public */,
     137,    2, 1158,    2, 0x2a /* Public | MethodCloned */,
     142,    0, 1163,    2, 0x0a /* Public */,
     143,    0, 1164,    2, 0x0a /* Public */,
     144,    4, 1165,    2, 0x0a /* Public */,
     147,    1, 1174,    2, 0x0a /* Public */,
     149,    0, 1177,    2, 0x0a /* Public */,
     150,    1, 1178,    2, 0x0a /* Public */,
     152,    1, 1181,    2, 0x0a /* Public */,
     152,    0, 1184,    2, 0x2a /* Public | MethodCloned */,
     154,    1, 1185,    2, 0x0a /* Public */,
     155,    0, 1188,    2, 0x0a /* Public */,
     156,    2, 1189,    2, 0x0a /* Public */,
     156,    1, 1194,    2, 0x2a /* Public | MethodCloned */,
     156,    0, 1197,    2, 0x2a /* Public | MethodCloned */,
     158,    0, 1198,    2, 0x0a /* Public */,
     159,    1, 1199,    2, 0x0a /* Public */,
     161,    0, 1202,    2, 0x0a /* Public */,
     162,    1, 1203,    2, 0x0a /* Public */,
     163,    0, 1206,    2, 0x0a /* Public */,
     164,    1, 1207,    2, 0x0a /* Public */,
     166,    1, 1210,    2, 0x0a /* Public */,
     168,    1, 1213,    2, 0x0a /* Public */,
     171,    2, 1216,    2, 0x0a /* Public */,
     174,    2, 1221,    2, 0x0a /* Public */,
     177,    1, 1226,    2, 0x0a /* Public */,
     179,    1, 1229,    2, 0x0a /* Public */,
     180,    3, 1232,    2, 0x0a /* Public */,
     184,    0, 1239,    2, 0x0a /* Public */,
     185,    1, 1240,    2, 0x0a /* Public */,
     187,    1, 1243,    2, 0x0a /* Public */,
     189,    1, 1246,    2, 0x0a /* Public */,
     190,    0, 1249,    2, 0x0a /* Public */,
     191,    2, 1250,    2, 0x0a /* Public */,
     192,    1, 1255,    2, 0x0a /* Public */,
     193,    0, 1258,    2, 0x0a /* Public */,
     194,    0, 1259,    2, 0x0a /* Public */,
     195,    2, 1260,    2, 0x0a /* Public */,
     197,    0, 1265,    2, 0x0a /* Public */,
     198,    0, 1266,    2, 0x09 /* Protected */,
     199,    1, 1267,    2, 0x09 /* Protected */,
     201,    2, 1270,    2, 0x09 /* Protected */,
     202,    0, 1275,    2, 0x09 /* Protected */,
     203,    0, 1276,    2, 0x09 /* Protected */,
     204,    0, 1277,    2, 0x09 /* Protected */,
     205,    0, 1278,    2, 0x09 /* Protected */,
     206,    0, 1279,    2, 0x09 /* Protected */,
     207,    0, 1280,    2, 0x09 /* Protected */,
     208,    0, 1281,    2, 0x09 /* Protected */,
     209,    0, 1282,    2, 0x09 /* Protected */,
     210,    0, 1283,    2, 0x09 /* Protected */,
     211,    1, 1284,    2, 0x09 /* Protected */,
     212,    1, 1287,    2, 0x09 /* Protected */,
     212,    0, 1290,    2, 0x29 /* Protected | MethodCloned */,
     214,    0, 1291,    2, 0x09 /* Protected */,
     215,    0, 1292,    2, 0x09 /* Protected */,
     216,    0, 1293,    2, 0x09 /* Protected */,
     217,    0, 1294,    2, 0x09 /* Protected */,
     218,    1, 1295,    2, 0x09 /* Protected */,
     219,    1, 1298,    2, 0x09 /* Protected */,
     220,    0, 1301,    2, 0x09 /* Protected */,
     221,    0, 1302,    2, 0x09 /* Protected */,
     222,    0, 1303,    2, 0x09 /* Protected */,
     223,    0, 1304,    2, 0x09 /* Protected */,
     224,    0, 1305,    2, 0x09 /* Protected */,
      73,    1, 1306,    2, 0x09 /* Protected */,
     225,    2, 1309,    2, 0x08 /* Private */,
     226,    0, 1314,    2, 0x08 /* Private */,
     227,    1, 1315,    2, 0x08 /* Private */,
     230,    3, 1318,    2, 0x08 /* Private */,
     234,    0, 1325,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 11,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,   33,
    QMetaType::Void, QMetaType::QString,   35,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   35,   37,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   35,   37,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   35,   37,
    QMetaType::Void, QMetaType::QString,   35,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 78,   79,
    QMetaType::Void, 0x80000000 | 81,   82,
    QMetaType::Void, 0x80000000 | 84,   85,
    QMetaType::Void, QMetaType::Int,   86,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,   91,
    QMetaType::Void, QMetaType::QString,   91,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 99,  100,
    QMetaType::Bool, QMetaType::QString,  101,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 99,  100,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  110,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,   35,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  127,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  134,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,  110,
    QMetaType::Void, 0x80000000 | 138, 0x80000000 | 138, QMetaType::Int,  139,  140,  141,
    QMetaType::Void, 0x80000000 | 138, 0x80000000 | 138,  139,  140,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 138, QMetaType::Int, QMetaType::QPoint, 0x80000000 | 138,  145,  141,  146,  139,
    QMetaType::Void, QMetaType::Int,  148,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  151,
    QMetaType::Void, QMetaType::QString,  153,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  127,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 84,  157,   85,
    QMetaType::Void, QMetaType::Int,  157,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 84,  160,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 84,   85,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,  165,
    QMetaType::Void, 0x80000000 | 167,    2,
    QMetaType::Void, 0x80000000 | 169,  170,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 84,  172,  173,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,  175,  176,
    QMetaType::Void, QMetaType::QString,  178,
    QMetaType::Void, QMetaType::QString,  178,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,  181,  182,  183,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  186,
    QMetaType::Void, QMetaType::QString,  188,
    QMetaType::Void, QMetaType::QString,  188,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString,  186,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,  181,  196,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,  200,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString,  200,  172,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,  213,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  110,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::Bool,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 228,  229,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,  231,  232,  233,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->reconfigure(); break;
        case 1: _t->boardChange((*reinterpret_cast< const Board(*)>(_a[1]))); break;
        case 2: _t->databaseChanged((*reinterpret_cast< DatabaseInfo*(*)>(_a[1]))); break;
        case 3: _t->LoadFinished((*reinterpret_cast< DatabaseInfo*(*)>(_a[1]))); break;
        case 4: _t->displayTime((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Color(*)>(_a[2]))); break;
        case 5: _t->signalMoveHasVariation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->signalVariationHasSibling((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->signalMoveHasPreviousMove((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->signalMoveHasNextMove((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->signalMoveHasParent((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->signalGameIsEmpty((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->signalGameAtLineStart((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->signalGameModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->signalGameModified((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->signalCurrentDBisReadWrite((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->signalCurrentDBcanBeClosed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->signalCurrentDBhasGames((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->signalGameLoaded(); break;
        case 18: _t->signalVersionFound((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 19: _t->databaseModified(); break;
        case 20: _t->signalDatabaseOpenClose(); break;
        case 21: _t->enterText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 22: _t->slotToggleGameMode(); break;
        case 23: _t->slotFlipView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->enterGameMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->openDatabase((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 26: _t->openDatabaseUrl((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 27: _t->openDatabaseArchive((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 28: _t->openDatabaseFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 29: _t->setFavoriteDatabase((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 30: _t->slotEditVarPromote(); break;
        case 31: _t->slotEditVarRemove(); break;
        case 32: _t->slotEditBoard(); break;
        case 33: _t->slotEditComment(); break;
        case 34: _t->slotEditCommentBefore(); break;
        case 35: _t->slotEditCopyFEN(); break;
        case 36: _t->slotEditCopyHumanFEN(); break;
        case 37: _t->slotEditPasteFEN(); break;
        case 38: _t->slotEditCopyPGN(); break;
        case 39: { bool _r = _t->slotEditPastePGN();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 40: _t->slotEditPaste(); break;
        case 41: _t->slotEditCopyImage(); break;
        case 42: _t->slotEditTruncateEnd(); break;
        case 43: _t->slotEditTruncateStart(); break;
        case 44: _t->slotSendMail(); break;
        case 45: _t->slotReconfigure(); break;
        case 46: _t->slotConfigure(); break;
        case 47: _t->slotHelpAbout(); break;
        case 48: _t->slotHelpBug(); break;
        case 49: _t->slotConfigureFlip(); break;
        case 50: _t->slotGameMoveFirst(); break;
        case 51: { bool _r = _t->slotGameMoveNext();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 52: _t->slotGameMovePrevious(); break;
        case 53: _t->slotGameMoveLast(); break;
        case 54: _t->slotGameMoveNextN(); break;
        case 55: _t->slotGameMovePreviousN(); break;
        case 56: _t->slotGameLoadFirst(); break;
        case 57: _t->slotGameLoadNext(); break;
        case 58: _t->slotGameLoadPrevious(); break;
        case 59: _t->slotGameLoadLast(); break;
        case 60: _t->slotGameLoadRandom(); break;
        case 61: _t->slotGameLoadChosen(); break;
        case 62: _t->slotGameVarEnter(); break;
        case 63: _t->slotGameVarUp(); break;
        case 64: _t->slotGameVarDown(); break;
        case 65: _t->slotGameVarExit(); break;
        case 66: _t->slotGameModify((*reinterpret_cast< const EditAction(*)>(_a[1]))); break;
        case 67: _t->slotGetActiveGame((*reinterpret_cast< const Game**(*)>(_a[1]))); break;
        case 68: _t->slotMergeActiveGame((*reinterpret_cast< QList<int>(*)>(_a[1]))); break;
        case 69: _t->slotMergeActiveGame((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 70: _t->slotMergeAllGames(); break;
        case 71: _t->slotMergeFilter(); break;
        case 72: _t->slotGameChanged(); break;
        case 73: _t->slotGameViewLink((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 74: _t->slotGameViewLink((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 75: _t->slotGameViewSource(); break;
        case 76: _t->slotGameDumpMoveNodes(); break;
        case 77: _t->slotGameNew(); break;
        case 78: { bool _r = _t->slotGameSave();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 79: _t->slotGameSaveOnly(); break;
        case 80: _t->slotGameEditTags(); break;
        case 81: _t->slotGameAddVariation((*reinterpret_cast< const Analysis(*)>(_a[1]))); break;
        case 82: { bool _r = _t->slotGameAddVariation((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 83: _t->slotGameUncomment(); break;
        case 84: _t->slotGameRemoveVariations(); break;
        case 85: _t->slotToggleAutoPlayer(); break;
        case 86: _t->slotToggleAutoAnalysis(); break;
        case 87: _t->slotAutoPlayTimeout(); break;
        case 88: _t->slotEngineTimeout((*reinterpret_cast< const Analysis(*)>(_a[1]))); break;
        case 89: _t->slotFilterChanged(); break;
        case 90: _t->slotFilterLoad((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 91: _t->slotFileNew(); break;
        case 92: _t->slotFileOpen(); break;
        case 93: _t->slotFileOpenUtf8(); break;
        case 94: _t->slotFileSave(); break;
        case 95: _t->slotFileOpenRecent(); break;
        case 96: _t->slotFileExportGame(); break;
        case 97: _t->slotFileExportFilter(); break;
        case 98: _t->slotFileExportAll(); break;
        case 99: _t->slotFileClose(); break;
        case 100: _t->slotFileCloseIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 101: _t->slotFileCloseName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 102: _t->slotFileQuit(); break;
        case 103: _t->slotSearchTag(); break;
        case 104: _t->slotSearchBoard(); break;
        case 105: _t->slotBoardSearchStarted(); break;
        case 106: _t->slotBoardSearchUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 107: _t->slotBoardSearchFinished(); break;
        case 108: _t->slotSearchReset(); break;
        case 109: _t->slotToggleTraining(); break;
        case 110: _t->slotToggleAutoRespond(); break;
        case 111: _t->slotSearchReverse(); break;
        case 112: _t->slotTreeUpdate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 113: _t->slotSearchTree(); break;
        case 114: _t->slotSearchTreeMove((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 115: _t->slotBoardMove((*reinterpret_cast< Square(*)>(_a[1])),(*reinterpret_cast< Square(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 116: _t->slotBoardMove((*reinterpret_cast< Square(*)>(_a[1])),(*reinterpret_cast< Square(*)>(_a[2]))); break;
        case 117: _t->slotMoveStarted(); break;
        case 118: _t->slotMoveFinished(); break;
        case 119: _t->slotBoardClick((*reinterpret_cast< Square(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QPoint(*)>(_a[3])),(*reinterpret_cast< Square(*)>(_a[4]))); break;
        case 120: _t->slotBoardMoveWheel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 121: _t->slotMoveChanged(); break;
        case 122: _t->slotGameMoveToPly((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 123: _t->slotStatusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 124: _t->slotStatusMessage(); break;
        case 125: _t->slotOperationProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 126: _t->slotDatabaseChange(); break;
        case 127: _t->slotDatabaseCopy((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QList<int>(*)>(_a[2]))); break;
        case 128: _t->slotDatabaseCopy((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 129: _t->slotDatabaseCopy(); break;
        case 130: _t->slotDatabaseClearClipboard(); break;
        case 131: _t->slotDatabaseCopySingle((*reinterpret_cast< QList<int>(*)>(_a[1]))); break;
        case 132: _t->slotDatabaseChanged(); break;
        case 133: _t->slotDatabaseDeleteGame((*reinterpret_cast< QList<int>(*)>(_a[1]))); break;
        case 134: _t->slotDatabaseDeleteFilter(); break;
        case 135: _t->slotDataBaseLoaded((*reinterpret_cast< DatabaseInfo*(*)>(_a[1]))); break;
        case 136: _t->slotDbRestoreState((*reinterpret_cast< const Game(*)>(_a[1]))); break;
        case 137: _t->slotGetGameData((*reinterpret_cast< Game(*)>(_a[1]))); break;
        case 138: _t->copyGames((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QList<int>(*)>(_a[2]))); break;
        case 139: _t->copyDatabase((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 140: _t->slotRenameEvent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 141: _t->slotRenamePlayer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 142: _t->slotRenameRequest((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 143: _t->slotExportImage(); break;
        case 144: _t->slotMakeBook((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 145: _t->slotShowInFinder((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 146: _t->slotBookBuildError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 147: _t->slotEditMergePGN(); break;
        case 148: _t->HandleFicsBoardRequest((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 149: _t->HandleFicsResultRequest((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 150: _t->HandleFicsNewGameRequest(); break;
        case 151: _t->HandleFicsSaveGameRequest(); break;
        case 152: _t->HandleFicsAddTagRequest((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 153: _t->HandleFicsCloseRequest(); break;
        case 154: _t->updateMenuDatabases(); break;
        case 155: _t->loadError((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 156: _t->loadReady((*reinterpret_cast< QUrl(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 157: _t->slotNoColorSquare(); break;
        case 158: _t->slotGreenSquare(); break;
        case 159: _t->slotYellowSquare(); break;
        case 160: _t->slotRedSquare(); break;
        case 161: _t->slotNoArrowHere(); break;
        case 162: _t->slotGreenArrowHere(); break;
        case 163: _t->slotYellowArrowHere(); break;
        case 164: _t->slotRedArrowHere(); break;
        case 165: _t->slotToggleStayOnTop(); break;
        case 166: _t->slotActivateBoardView((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 167: _t->slotCloseBoardView((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 168: _t->slotCloseBoardView(); break;
        case 169: _t->slotScreenShot(); break;
        case 170: _t->slotCompileECO(); break;
        case 171: _t->slotAutoSwitchTab(); break;
        case 172: _t->slotEditActions(); break;
        case 173: _t->slotMoveIntervalChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 174: _t->slotSetSliderText((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 175: _t->QueryLoadDatabase(); break;
        case 176: _t->FicsDisconnected(); break;
        case 177: _t->FicsConnected(); break;
        case 178: _t->HandleFicsRequestRemoveMove(); break;
        case 179: _t->openFICS(); break;
        case 180: _t->slotGameVarEnter((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 181: _t->ecoLoaded((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 182: _t->slotDatabaseModified(); break;
        case 183: _t->slotHttpDone((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 184: _t->slotVersionFound((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 185: _t->slotUpdateOpeningTreeWidget(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 68:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 127:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 131:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 133:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 138:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::reconfigure)) {
                *result = 0;
            }
        }
        {
            typedef void (MainWindow::*_t)(const Board & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::boardChange)) {
                *result = 1;
            }
        }
        {
            typedef void (MainWindow::*_t)(DatabaseInfo * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::databaseChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (MainWindow::*_t)(DatabaseInfo * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::LoadFinished)) {
                *result = 3;
            }
        }
        {
            typedef void (MainWindow::*_t)(const QString & , Color );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::displayTime)) {
                *result = 4;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::signalMoveHasVariation)) {
                *result = 5;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::signalVariationHasSibling)) {
                *result = 6;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::signalMoveHasPreviousMove)) {
                *result = 7;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::signalMoveHasNextMove)) {
                *result = 8;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::signalMoveHasParent)) {
                *result = 9;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::signalGameIsEmpty)) {
                *result = 10;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::signalGameAtLineStart)) {
                *result = 11;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::signalGameModeChanged)) {
                *result = 12;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::signalGameModified)) {
                *result = 13;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::signalCurrentDBisReadWrite)) {
                *result = 14;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::signalCurrentDBcanBeClosed)) {
                *result = 15;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::signalCurrentDBhasGames)) {
                *result = 16;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::signalGameLoaded)) {
                *result = 17;
            }
        }
        {
            typedef void (MainWindow::*_t)(int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::signalVersionFound)) {
                *result = 18;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::databaseModified)) {
                *result = 19;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::signalDatabaseOpenClose)) {
                *result = 20;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::enterText)) {
                *result = 21;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 186)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 186;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 186)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 186;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::reconfigure()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void MainWindow::boardChange(const Board & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::databaseChanged(DatabaseInfo * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::LoadFinished(DatabaseInfo * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainWindow::displayTime(const QString & _t1, Color _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainWindow::signalMoveHasVariation(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainWindow::signalVariationHasSibling(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainWindow::signalMoveHasPreviousMove(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MainWindow::signalMoveHasNextMove(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MainWindow::signalMoveHasParent(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MainWindow::signalGameIsEmpty(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MainWindow::signalGameAtLineStart(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MainWindow::signalGameModeChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MainWindow::signalGameModified(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void MainWindow::signalCurrentDBisReadWrite(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void MainWindow::signalCurrentDBcanBeClosed(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void MainWindow::signalCurrentDBhasGames(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void MainWindow::signalGameLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 17, Q_NULLPTR);
}

// SIGNAL 18
void MainWindow::signalVersionFound(int _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void MainWindow::databaseModified()
{
    QMetaObject::activate(this, &staticMetaObject, 19, Q_NULLPTR);
}

// SIGNAL 20
void MainWindow::signalDatabaseOpenClose()
{
    QMetaObject::activate(this, &staticMetaObject, 20, Q_NULLPTR);
}

// SIGNAL 21
void MainWindow::enterText(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}
QT_END_MOC_NAMESPACE
