/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qpdfview__MainWindow_t {
    QByteArrayData data[194];
    char stringdata0[4457];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qpdfview__MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qpdfview__MainWindow_t qt_meta_stringdata_qpdfview__MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 20), // "qpdfview::MainWindow"
QT_MOC_LITERAL(1, 21, 4), // "show"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 4), // "open"
QT_MOC_LITERAL(4, 32, 8), // "filePath"
QT_MOC_LITERAL(5, 41, 4), // "page"
QT_MOC_LITERAL(6, 46, 9), // "highlight"
QT_MOC_LITERAL(7, 56, 5), // "quiet"
QT_MOC_LITERAL(8, 62, 12), // "openInNewTab"
QT_MOC_LITERAL(9, 75, 24), // "jumpToPageOrOpenInNewTab"
QT_MOC_LITERAL(10, 100, 17), // "refreshBeforeJump"
QT_MOC_LITERAL(11, 118, 11), // "startSearch"
QT_MOC_LITERAL(12, 130, 4), // "text"
QT_MOC_LITERAL(13, 135, 12), // "saveDatabase"
QT_MOC_LITERAL(14, 148, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(15, 176, 30), // "on_tabWidget_tabCloseRequested"
QT_MOC_LITERAL(16, 207, 5), // "index"
QT_MOC_LITERAL(17, 213, 29), // "on_tabWidget_tabDragRequested"
QT_MOC_LITERAL(18, 243, 36), // "on_tabWidget_tabContextMenuRe..."
QT_MOC_LITERAL(19, 280, 9), // "globalPos"
QT_MOC_LITERAL(20, 290, 29), // "on_currentTab_documentChanged"
QT_MOC_LITERAL(21, 320, 30), // "on_currentTab_documentModified"
QT_MOC_LITERAL(22, 351, 33), // "on_currentTab_numberOfPagesCh..."
QT_MOC_LITERAL(23, 385, 13), // "numberOfPages"
QT_MOC_LITERAL(24, 399, 32), // "on_currentTab_currentPageChanged"
QT_MOC_LITERAL(25, 432, 11), // "currentPage"
QT_MOC_LITERAL(26, 444, 28), // "on_currentTab_canJumpChanged"
QT_MOC_LITERAL(27, 473, 8), // "backward"
QT_MOC_LITERAL(28, 482, 7), // "forward"
QT_MOC_LITERAL(29, 490, 35), // "on_currentTab_continuousModeC..."
QT_MOC_LITERAL(30, 526, 14), // "continuousMode"
QT_MOC_LITERAL(31, 541, 31), // "on_currentTab_layoutModeChanged"
QT_MOC_LITERAL(32, 573, 10), // "LayoutMode"
QT_MOC_LITERAL(33, 584, 10), // "layoutMode"
QT_MOC_LITERAL(34, 595, 36), // "on_currentTab_rightToLeftMode..."
QT_MOC_LITERAL(35, 632, 15), // "rightToLeftMode"
QT_MOC_LITERAL(36, 648, 30), // "on_currentTab_scaleModeChanged"
QT_MOC_LITERAL(37, 679, 9), // "ScaleMode"
QT_MOC_LITERAL(38, 689, 9), // "scaleMode"
QT_MOC_LITERAL(39, 699, 32), // "on_currentTab_scaleFactorChanged"
QT_MOC_LITERAL(40, 732, 11), // "scaleFactor"
QT_MOC_LITERAL(41, 744, 29), // "on_currentTab_rotationChanged"
QT_MOC_LITERAL(42, 774, 8), // "Rotation"
QT_MOC_LITERAL(43, 783, 8), // "rotation"
QT_MOC_LITERAL(44, 792, 25), // "on_currentTab_linkClicked"
QT_MOC_LITERAL(45, 818, 6), // "newTab"
QT_MOC_LITERAL(46, 825, 32), // "on_currentTab_renderFlagsChanged"
QT_MOC_LITERAL(47, 858, 21), // "qpdfview::RenderFlags"
QT_MOC_LITERAL(48, 880, 11), // "renderFlags"
QT_MOC_LITERAL(49, 892, 33), // "on_currentTab_invertColorsCha..."
QT_MOC_LITERAL(50, 926, 12), // "invertColors"
QT_MOC_LITERAL(51, 939, 39), // "on_currentTab_convertToGraysc..."
QT_MOC_LITERAL(52, 979, 18), // "convertToGrayscale"
QT_MOC_LITERAL(53, 998, 32), // "on_currentTab_trimMarginsChanged"
QT_MOC_LITERAL(54, 1031, 11), // "trimMargins"
QT_MOC_LITERAL(55, 1043, 36), // "on_currentTab_compositionMode..."
QT_MOC_LITERAL(56, 1080, 15), // "CompositionMode"
QT_MOC_LITERAL(57, 1096, 15), // "compositionMode"
QT_MOC_LITERAL(58, 1112, 33), // "on_currentTab_highlightAllCha..."
QT_MOC_LITERAL(59, 1146, 12), // "highlightAll"
QT_MOC_LITERAL(60, 1159, 35), // "on_currentTab_rubberBandModeC..."
QT_MOC_LITERAL(61, 1195, 14), // "RubberBandMode"
QT_MOC_LITERAL(62, 1210, 14), // "rubberBandMode"
QT_MOC_LITERAL(63, 1225, 28), // "on_currentTab_searchFinished"
QT_MOC_LITERAL(64, 1254, 35), // "on_currentTab_searchProgressC..."
QT_MOC_LITERAL(65, 1290, 8), // "progress"
QT_MOC_LITERAL(66, 1299, 40), // "on_currentTab_customContextMe..."
QT_MOC_LITERAL(67, 1340, 3), // "pos"
QT_MOC_LITERAL(68, 1344, 40), // "on_splitView_splitHorizontall..."
QT_MOC_LITERAL(69, 1385, 38), // "on_splitView_splitVertically_..."
QT_MOC_LITERAL(70, 1424, 28), // "on_splitView_split_triggered"
QT_MOC_LITERAL(71, 1453, 15), // "Qt::Orientation"
QT_MOC_LITERAL(72, 1469, 11), // "orientation"
QT_MOC_LITERAL(73, 1481, 35), // "on_splitView_closeCurrent_tri..."
QT_MOC_LITERAL(74, 1517, 33), // "on_splitView_currentWidgetCha..."
QT_MOC_LITERAL(75, 1551, 8), // "QWidget*"
QT_MOC_LITERAL(76, 1560, 13), // "currentWidget"
QT_MOC_LITERAL(77, 1574, 30), // "on_currentPage_editingFinished"
QT_MOC_LITERAL(78, 1605, 28), // "on_currentPage_returnPressed"
QT_MOC_LITERAL(79, 1634, 24), // "on_scaleFactor_activated"
QT_MOC_LITERAL(80, 1659, 30), // "on_scaleFactor_editingFinished"
QT_MOC_LITERAL(81, 1690, 28), // "on_scaleFactor_returnPressed"
QT_MOC_LITERAL(82, 1719, 17), // "on_open_triggered"
QT_MOC_LITERAL(83, 1737, 25), // "on_openInNewTab_triggered"
QT_MOC_LITERAL(84, 1763, 29), // "on_openCopyInNewTab_triggered"
QT_MOC_LITERAL(85, 1793, 19), // "const DocumentView*"
QT_MOC_LITERAL(86, 1813, 3), // "tab"
QT_MOC_LITERAL(87, 1817, 32), // "on_openCopyInNewWindow_triggered"
QT_MOC_LITERAL(88, 1850, 33), // "on_openContainingFolder_trigg..."
QT_MOC_LITERAL(89, 1884, 27), // "on_moveToInstance_triggered"
QT_MOC_LITERAL(90, 1912, 13), // "DocumentView*"
QT_MOC_LITERAL(91, 1926, 20), // "on_refresh_triggered"
QT_MOC_LITERAL(92, 1947, 17), // "on_save_triggered"
QT_MOC_LITERAL(93, 1965, 19), // "on_saveAs_triggered"
QT_MOC_LITERAL(94, 1985, 21), // "on_saveCopy_triggered"
QT_MOC_LITERAL(95, 2007, 18), // "on_print_triggered"
QT_MOC_LITERAL(96, 2026, 29), // "on_recentlyUsed_openTriggered"
QT_MOC_LITERAL(97, 2056, 25), // "on_previousPage_triggered"
QT_MOC_LITERAL(98, 2082, 21), // "on_nextPage_triggered"
QT_MOC_LITERAL(99, 2104, 22), // "on_firstPage_triggered"
QT_MOC_LITERAL(100, 2127, 21), // "on_lastPage_triggered"
QT_MOC_LITERAL(101, 2149, 25), // "on_setFirstPage_triggered"
QT_MOC_LITERAL(102, 2175, 23), // "on_jumpToPage_triggered"
QT_MOC_LITERAL(103, 2199, 25), // "on_jumpBackward_triggered"
QT_MOC_LITERAL(104, 2225, 24), // "on_jumpForward_triggered"
QT_MOC_LITERAL(105, 2250, 19), // "on_search_triggered"
QT_MOC_LITERAL(106, 2270, 25), // "on_findPrevious_triggered"
QT_MOC_LITERAL(107, 2296, 21), // "on_findNext_triggered"
QT_MOC_LITERAL(108, 2318, 25), // "on_cancelSearch_triggered"
QT_MOC_LITERAL(109, 2344, 32), // "on_copyToClipboardMode_triggered"
QT_MOC_LITERAL(110, 2377, 7), // "checked"
QT_MOC_LITERAL(111, 2385, 30), // "on_addAnnotationMode_triggered"
QT_MOC_LITERAL(112, 2416, 21), // "on_settings_triggered"
QT_MOC_LITERAL(113, 2438, 27), // "on_continuousMode_triggered"
QT_MOC_LITERAL(114, 2466, 25), // "on_twoPagesMode_triggered"
QT_MOC_LITERAL(115, 2492, 38), // "on_twoPagesWithCoverPageMode_..."
QT_MOC_LITERAL(116, 2531, 30), // "on_multiplePagesMode_triggered"
QT_MOC_LITERAL(117, 2562, 28), // "on_rightToLeftMode_triggered"
QT_MOC_LITERAL(118, 2591, 19), // "on_zoomIn_triggered"
QT_MOC_LITERAL(119, 2611, 20), // "on_zoomOut_triggered"
QT_MOC_LITERAL(120, 2632, 25), // "on_originalSize_triggered"
QT_MOC_LITERAL(121, 2658, 31), // "on_fitToPageWidthMode_triggered"
QT_MOC_LITERAL(122, 2690, 30), // "on_fitToPageSizeMode_triggered"
QT_MOC_LITERAL(123, 2721, 23), // "on_rotateLeft_triggered"
QT_MOC_LITERAL(124, 2745, 24), // "on_rotateRight_triggered"
QT_MOC_LITERAL(125, 2770, 25), // "on_invertColors_triggered"
QT_MOC_LITERAL(126, 2796, 31), // "on_convertToGrayscale_triggered"
QT_MOC_LITERAL(127, 2828, 24), // "on_trimMargins_triggered"
QT_MOC_LITERAL(128, 2853, 33), // "on_darkenWithPaperColor_trigg..."
QT_MOC_LITERAL(129, 2887, 34), // "on_lightenWithPaperColor_trig..."
QT_MOC_LITERAL(130, 2922, 18), // "on_fonts_triggered"
QT_MOC_LITERAL(131, 2941, 23), // "on_fullscreen_triggered"
QT_MOC_LITERAL(132, 2965, 25), // "on_presentation_triggered"
QT_MOC_LITERAL(133, 2991, 24), // "on_previousTab_triggered"
QT_MOC_LITERAL(134, 3016, 20), // "on_nextTab_triggered"
QT_MOC_LITERAL(135, 3037, 21), // "on_closeTab_triggered"
QT_MOC_LITERAL(136, 3059, 25), // "on_closeAllTabs_triggered"
QT_MOC_LITERAL(137, 3085, 38), // "on_closeAllTabsButCurrentTab_..."
QT_MOC_LITERAL(138, 3124, 35), // "on_closeAllTabsButThisOne_tri..."
QT_MOC_LITERAL(139, 3160, 9), // "thisIndex"
QT_MOC_LITERAL(140, 3170, 34), // "on_closeAllTabsToTheLeft_trig..."
QT_MOC_LITERAL(141, 3205, 7), // "ofIndex"
QT_MOC_LITERAL(142, 3213, 35), // "on_closeAllTabsToTheRight_tri..."
QT_MOC_LITERAL(143, 3249, 22), // "on_closeTabs_triggered"
QT_MOC_LITERAL(144, 3272, 22), // "QVector<DocumentView*>"
QT_MOC_LITERAL(145, 3295, 4), // "tabs"
QT_MOC_LITERAL(146, 3300, 41), // "on_restoreMostRecentlyClosedT..."
QT_MOC_LITERAL(147, 3342, 36), // "on_recentlyClosed_tabActionTr..."
QT_MOC_LITERAL(148, 3379, 8), // "QAction*"
QT_MOC_LITERAL(149, 3388, 9), // "tabAction"
QT_MOC_LITERAL(150, 3398, 22), // "on_tabAction_triggered"
QT_MOC_LITERAL(151, 3421, 24), // "on_tabShortcut_activated"
QT_MOC_LITERAL(152, 3446, 29), // "on_previousBookmark_triggered"
QT_MOC_LITERAL(153, 3476, 25), // "on_nextBookmark_triggered"
QT_MOC_LITERAL(154, 3502, 24), // "on_addBookmark_triggered"
QT_MOC_LITERAL(155, 3527, 27), // "on_removeBookmark_triggered"
QT_MOC_LITERAL(156, 3555, 31), // "on_removeAllBookmarks_triggered"
QT_MOC_LITERAL(157, 3587, 28), // "on_bookmarksMenu_aboutToShow"
QT_MOC_LITERAL(158, 3616, 25), // "on_bookmark_openTriggered"
QT_MOC_LITERAL(159, 3642, 16), // "absoluteFilePath"
QT_MOC_LITERAL(160, 3659, 33), // "on_bookmark_openInNewTabTrigg..."
QT_MOC_LITERAL(161, 3693, 31), // "on_bookmark_jumpToPageTriggered"
QT_MOC_LITERAL(162, 3725, 35), // "on_bookmark_removeBookmarkTri..."
QT_MOC_LITERAL(163, 3761, 21), // "on_contents_triggered"
QT_MOC_LITERAL(164, 3783, 18), // "on_about_triggered"
QT_MOC_LITERAL(165, 3802, 29), // "on_focusCurrentPage_activated"
QT_MOC_LITERAL(166, 3832, 29), // "on_focusScaleFactor_activated"
QT_MOC_LITERAL(167, 3862, 27), // "on_toggleToolBars_triggered"
QT_MOC_LITERAL(168, 3890, 26), // "on_toggleMenuBar_triggered"
QT_MOC_LITERAL(169, 3917, 18), // "on_searchInitiated"
QT_MOC_LITERAL(170, 3936, 8), // "modified"
QT_MOC_LITERAL(171, 3945, 23), // "on_highlightAll_clicked"
QT_MOC_LITERAL(172, 3969, 27), // "on_dock_dockLocationChanged"
QT_MOC_LITERAL(173, 3997, 18), // "Qt::DockWidgetArea"
QT_MOC_LITERAL(174, 4016, 4), // "area"
QT_MOC_LITERAL(175, 4021, 30), // "on_outline_sectionCountChanged"
QT_MOC_LITERAL(176, 4052, 18), // "on_outline_clicked"
QT_MOC_LITERAL(177, 4071, 33), // "on_properties_sectionCountCha..."
QT_MOC_LITERAL(178, 4105, 33), // "on_thumbnails_dockLocationCha..."
QT_MOC_LITERAL(179, 4139, 44), // "on_thumbnails_verticalScrollB..."
QT_MOC_LITERAL(180, 4184, 5), // "value"
QT_MOC_LITERAL(181, 4190, 32), // "on_bookmarks_sectionCountChanged"
QT_MOC_LITERAL(182, 4223, 20), // "on_bookmarks_clicked"
QT_MOC_LITERAL(183, 4244, 33), // "on_bookmarks_contextMenuReque..."
QT_MOC_LITERAL(184, 4278, 29), // "on_search_sectionCountChanged"
QT_MOC_LITERAL(185, 4308, 29), // "on_search_dockLocationChanged"
QT_MOC_LITERAL(186, 4338, 27), // "on_search_visibilityChanged"
QT_MOC_LITERAL(187, 4366, 7), // "visible"
QT_MOC_LITERAL(188, 4374, 17), // "on_search_clicked"
QT_MOC_LITERAL(189, 4392, 22), // "on_search_rowsInserted"
QT_MOC_LITERAL(190, 4415, 6), // "parent"
QT_MOC_LITERAL(191, 4422, 5), // "first"
QT_MOC_LITERAL(192, 4428, 4), // "last"
QT_MOC_LITERAL(193, 4433, 23) // "on_saveDatabase_timeout"

    },
    "qpdfview::MainWindow\0show\0\0open\0"
    "filePath\0page\0highlight\0quiet\0"
    "openInNewTab\0jumpToPageOrOpenInNewTab\0"
    "refreshBeforeJump\0startSearch\0text\0"
    "saveDatabase\0on_tabWidget_currentChanged\0"
    "on_tabWidget_tabCloseRequested\0index\0"
    "on_tabWidget_tabDragRequested\0"
    "on_tabWidget_tabContextMenuRequested\0"
    "globalPos\0on_currentTab_documentChanged\0"
    "on_currentTab_documentModified\0"
    "on_currentTab_numberOfPagesChaned\0"
    "numberOfPages\0on_currentTab_currentPageChanged\0"
    "currentPage\0on_currentTab_canJumpChanged\0"
    "backward\0forward\0on_currentTab_continuousModeChanged\0"
    "continuousMode\0on_currentTab_layoutModeChanged\0"
    "LayoutMode\0layoutMode\0"
    "on_currentTab_rightToLeftModeChanged\0"
    "rightToLeftMode\0on_currentTab_scaleModeChanged\0"
    "ScaleMode\0scaleMode\0"
    "on_currentTab_scaleFactorChanged\0"
    "scaleFactor\0on_currentTab_rotationChanged\0"
    "Rotation\0rotation\0on_currentTab_linkClicked\0"
    "newTab\0on_currentTab_renderFlagsChanged\0"
    "qpdfview::RenderFlags\0renderFlags\0"
    "on_currentTab_invertColorsChanged\0"
    "invertColors\0on_currentTab_convertToGrayscaleChanged\0"
    "convertToGrayscale\0on_currentTab_trimMarginsChanged\0"
    "trimMargins\0on_currentTab_compositionModeChanged\0"
    "CompositionMode\0compositionMode\0"
    "on_currentTab_highlightAllChanged\0"
    "highlightAll\0on_currentTab_rubberBandModeChanged\0"
    "RubberBandMode\0rubberBandMode\0"
    "on_currentTab_searchFinished\0"
    "on_currentTab_searchProgressChanged\0"
    "progress\0on_currentTab_customContextMenuRequested\0"
    "pos\0on_splitView_splitHorizontally_triggered\0"
    "on_splitView_splitVertically_triggered\0"
    "on_splitView_split_triggered\0"
    "Qt::Orientation\0orientation\0"
    "on_splitView_closeCurrent_triggered\0"
    "on_splitView_currentWidgetChanged\0"
    "QWidget*\0currentWidget\0"
    "on_currentPage_editingFinished\0"
    "on_currentPage_returnPressed\0"
    "on_scaleFactor_activated\0"
    "on_scaleFactor_editingFinished\0"
    "on_scaleFactor_returnPressed\0"
    "on_open_triggered\0on_openInNewTab_triggered\0"
    "on_openCopyInNewTab_triggered\0"
    "const DocumentView*\0tab\0"
    "on_openCopyInNewWindow_triggered\0"
    "on_openContainingFolder_triggered\0"
    "on_moveToInstance_triggered\0DocumentView*\0"
    "on_refresh_triggered\0on_save_triggered\0"
    "on_saveAs_triggered\0on_saveCopy_triggered\0"
    "on_print_triggered\0on_recentlyUsed_openTriggered\0"
    "on_previousPage_triggered\0"
    "on_nextPage_triggered\0on_firstPage_triggered\0"
    "on_lastPage_triggered\0on_setFirstPage_triggered\0"
    "on_jumpToPage_triggered\0"
    "on_jumpBackward_triggered\0"
    "on_jumpForward_triggered\0on_search_triggered\0"
    "on_findPrevious_triggered\0"
    "on_findNext_triggered\0on_cancelSearch_triggered\0"
    "on_copyToClipboardMode_triggered\0"
    "checked\0on_addAnnotationMode_triggered\0"
    "on_settings_triggered\0on_continuousMode_triggered\0"
    "on_twoPagesMode_triggered\0"
    "on_twoPagesWithCoverPageMode_triggered\0"
    "on_multiplePagesMode_triggered\0"
    "on_rightToLeftMode_triggered\0"
    "on_zoomIn_triggered\0on_zoomOut_triggered\0"
    "on_originalSize_triggered\0"
    "on_fitToPageWidthMode_triggered\0"
    "on_fitToPageSizeMode_triggered\0"
    "on_rotateLeft_triggered\0"
    "on_rotateRight_triggered\0"
    "on_invertColors_triggered\0"
    "on_convertToGrayscale_triggered\0"
    "on_trimMargins_triggered\0"
    "on_darkenWithPaperColor_triggered\0"
    "on_lightenWithPaperColor_triggered\0"
    "on_fonts_triggered\0on_fullscreen_triggered\0"
    "on_presentation_triggered\0"
    "on_previousTab_triggered\0on_nextTab_triggered\0"
    "on_closeTab_triggered\0on_closeAllTabs_triggered\0"
    "on_closeAllTabsButCurrentTab_triggered\0"
    "on_closeAllTabsButThisOne_triggered\0"
    "thisIndex\0on_closeAllTabsToTheLeft_triggered\0"
    "ofIndex\0on_closeAllTabsToTheRight_triggered\0"
    "on_closeTabs_triggered\0QVector<DocumentView*>\0"
    "tabs\0on_restoreMostRecentlyClosedTab_triggered\0"
    "on_recentlyClosed_tabActionTriggered\0"
    "QAction*\0tabAction\0on_tabAction_triggered\0"
    "on_tabShortcut_activated\0"
    "on_previousBookmark_triggered\0"
    "on_nextBookmark_triggered\0"
    "on_addBookmark_triggered\0"
    "on_removeBookmark_triggered\0"
    "on_removeAllBookmarks_triggered\0"
    "on_bookmarksMenu_aboutToShow\0"
    "on_bookmark_openTriggered\0absoluteFilePath\0"
    "on_bookmark_openInNewTabTriggered\0"
    "on_bookmark_jumpToPageTriggered\0"
    "on_bookmark_removeBookmarkTriggered\0"
    "on_contents_triggered\0on_about_triggered\0"
    "on_focusCurrentPage_activated\0"
    "on_focusScaleFactor_activated\0"
    "on_toggleToolBars_triggered\0"
    "on_toggleMenuBar_triggered\0"
    "on_searchInitiated\0modified\0"
    "on_highlightAll_clicked\0"
    "on_dock_dockLocationChanged\0"
    "Qt::DockWidgetArea\0area\0"
    "on_outline_sectionCountChanged\0"
    "on_outline_clicked\0on_properties_sectionCountChanged\0"
    "on_thumbnails_dockLocationChanged\0"
    "on_thumbnails_verticalScrollBar_valueChanged\0"
    "value\0on_bookmarks_sectionCountChanged\0"
    "on_bookmarks_clicked\0"
    "on_bookmarks_contextMenuRequested\0"
    "on_search_sectionCountChanged\0"
    "on_search_dockLocationChanged\0"
    "on_search_visibilityChanged\0visible\0"
    "on_search_clicked\0on_search_rowsInserted\0"
    "parent\0first\0last\0on_saveDatabase_timeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qpdfview__MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     151,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  769,    2, 0x0a /* Public */,
       3,    4,  770,    2, 0x0a /* Public */,
       3,    3,  779,    2, 0x2a /* Public | MethodCloned */,
       3,    2,  786,    2, 0x2a /* Public | MethodCloned */,
       3,    1,  791,    2, 0x2a /* Public | MethodCloned */,
       8,    4,  794,    2, 0x0a /* Public */,
       8,    3,  803,    2, 0x2a /* Public | MethodCloned */,
       8,    2,  810,    2, 0x2a /* Public | MethodCloned */,
       8,    1,  815,    2, 0x2a /* Public | MethodCloned */,
       9,    5,  818,    2, 0x0a /* Public */,
       9,    4,  829,    2, 0x2a /* Public | MethodCloned */,
       9,    3,  838,    2, 0x2a /* Public | MethodCloned */,
       9,    2,  845,    2, 0x2a /* Public | MethodCloned */,
       9,    1,  850,    2, 0x2a /* Public | MethodCloned */,
      11,    1,  853,    2, 0x0a /* Public */,
      13,    0,  856,    2, 0x0a /* Public */,
      14,    0,  857,    2, 0x09 /* Protected */,
      15,    1,  858,    2, 0x09 /* Protected */,
      17,    1,  861,    2, 0x09 /* Protected */,
      18,    2,  864,    2, 0x09 /* Protected */,
      20,    0,  869,    2, 0x09 /* Protected */,
      21,    0,  870,    2, 0x09 /* Protected */,
      22,    1,  871,    2, 0x09 /* Protected */,
      24,    1,  874,    2, 0x09 /* Protected */,
      26,    2,  877,    2, 0x09 /* Protected */,
      29,    1,  882,    2, 0x09 /* Protected */,
      31,    1,  885,    2, 0x09 /* Protected */,
      34,    1,  888,    2, 0x09 /* Protected */,
      36,    1,  891,    2, 0x09 /* Protected */,
      39,    1,  894,    2, 0x09 /* Protected */,
      41,    1,  897,    2, 0x09 /* Protected */,
      44,    1,  900,    2, 0x09 /* Protected */,
      44,    3,  903,    2, 0x09 /* Protected */,
      46,    1,  910,    2, 0x09 /* Protected */,
      49,    1,  913,    2, 0x09 /* Protected */,
      51,    1,  916,    2, 0x09 /* Protected */,
      53,    1,  919,    2, 0x09 /* Protected */,
      55,    1,  922,    2, 0x09 /* Protected */,
      58,    1,  925,    2, 0x09 /* Protected */,
      60,    1,  928,    2, 0x09 /* Protected */,
      63,    0,  931,    2, 0x09 /* Protected */,
      64,    1,  932,    2, 0x09 /* Protected */,
      66,    1,  935,    2, 0x09 /* Protected */,
      68,    0,  938,    2, 0x09 /* Protected */,
      69,    0,  939,    2, 0x09 /* Protected */,
      70,    2,  940,    2, 0x09 /* Protected */,
      73,    0,  945,    2, 0x09 /* Protected */,
      73,    1,  946,    2, 0x09 /* Protected */,
      74,    1,  949,    2, 0x09 /* Protected */,
      77,    0,  952,    2, 0x09 /* Protected */,
      78,    0,  953,    2, 0x09 /* Protected */,
      79,    1,  954,    2, 0x09 /* Protected */,
      80,    0,  957,    2, 0x09 /* Protected */,
      81,    0,  958,    2, 0x09 /* Protected */,
      82,    0,  959,    2, 0x09 /* Protected */,
      83,    0,  960,    2, 0x09 /* Protected */,
      84,    0,  961,    2, 0x09 /* Protected */,
      84,    1,  962,    2, 0x09 /* Protected */,
      87,    0,  965,    2, 0x09 /* Protected */,
      87,    1,  966,    2, 0x09 /* Protected */,
      88,    0,  969,    2, 0x09 /* Protected */,
      88,    1,  970,    2, 0x09 /* Protected */,
      89,    0,  973,    2, 0x09 /* Protected */,
      89,    1,  974,    2, 0x09 /* Protected */,
      91,    0,  977,    2, 0x09 /* Protected */,
      92,    0,  978,    2, 0x09 /* Protected */,
      93,    0,  979,    2, 0x09 /* Protected */,
      94,    0,  980,    2, 0x09 /* Protected */,
      95,    0,  981,    2, 0x09 /* Protected */,
      96,    1,  982,    2, 0x09 /* Protected */,
      97,    0,  985,    2, 0x09 /* Protected */,
      98,    0,  986,    2, 0x09 /* Protected */,
      99,    0,  987,    2, 0x09 /* Protected */,
     100,    0,  988,    2, 0x09 /* Protected */,
     101,    0,  989,    2, 0x09 /* Protected */,
     102,    0,  990,    2, 0x09 /* Protected */,
     103,    0,  991,    2, 0x09 /* Protected */,
     104,    0,  992,    2, 0x09 /* Protected */,
     105,    0,  993,    2, 0x09 /* Protected */,
     106,    0,  994,    2, 0x09 /* Protected */,
     107,    0,  995,    2, 0x09 /* Protected */,
     108,    0,  996,    2, 0x09 /* Protected */,
     109,    1,  997,    2, 0x09 /* Protected */,
     111,    1, 1000,    2, 0x09 /* Protected */,
     112,    0, 1003,    2, 0x09 /* Protected */,
     113,    1, 1004,    2, 0x09 /* Protected */,
     114,    1, 1007,    2, 0x09 /* Protected */,
     115,    1, 1010,    2, 0x09 /* Protected */,
     116,    1, 1013,    2, 0x09 /* Protected */,
     117,    1, 1016,    2, 0x09 /* Protected */,
     118,    0, 1019,    2, 0x09 /* Protected */,
     119,    0, 1020,    2, 0x09 /* Protected */,
     120,    0, 1021,    2, 0x09 /* Protected */,
     121,    1, 1022,    2, 0x09 /* Protected */,
     122,    1, 1025,    2, 0x09 /* Protected */,
     123,    0, 1028,    2, 0x09 /* Protected */,
     124,    0, 1029,    2, 0x09 /* Protected */,
     125,    1, 1030,    2, 0x09 /* Protected */,
     126,    1, 1033,    2, 0x09 /* Protected */,
     127,    1, 1036,    2, 0x09 /* Protected */,
     128,    1, 1039,    2, 0x09 /* Protected */,
     129,    1, 1042,    2, 0x09 /* Protected */,
     130,    0, 1045,    2, 0x09 /* Protected */,
     131,    1, 1046,    2, 0x09 /* Protected */,
     132,    0, 1049,    2, 0x09 /* Protected */,
     133,    0, 1050,    2, 0x09 /* Protected */,
     134,    0, 1051,    2, 0x09 /* Protected */,
     135,    0, 1052,    2, 0x09 /* Protected */,
     136,    0, 1053,    2, 0x09 /* Protected */,
     137,    0, 1054,    2, 0x09 /* Protected */,
     138,    1, 1055,    2, 0x09 /* Protected */,
     140,    1, 1058,    2, 0x09 /* Protected */,
     142,    1, 1061,    2, 0x09 /* Protected */,
     143,    1, 1064,    2, 0x09 /* Protected */,
     146,    0, 1067,    2, 0x09 /* Protected */,
     147,    1, 1068,    2, 0x09 /* Protected */,
     150,    0, 1071,    2, 0x09 /* Protected */,
     151,    0, 1072,    2, 0x09 /* Protected */,
     152,    0, 1073,    2, 0x09 /* Protected */,
     153,    0, 1074,    2, 0x09 /* Protected */,
     154,    0, 1075,    2, 0x09 /* Protected */,
     155,    0, 1076,    2, 0x09 /* Protected */,
     156,    0, 1077,    2, 0x09 /* Protected */,
     157,    0, 1078,    2, 0x09 /* Protected */,
     158,    1, 1079,    2, 0x09 /* Protected */,
     160,    1, 1082,    2, 0x09 /* Protected */,
     161,    2, 1085,    2, 0x09 /* Protected */,
     162,    1, 1090,    2, 0x09 /* Protected */,
     163,    0, 1093,    2, 0x09 /* Protected */,
     164,    0, 1094,    2, 0x09 /* Protected */,
     165,    0, 1095,    2, 0x09 /* Protected */,
     166,    0, 1096,    2, 0x09 /* Protected */,
     167,    1, 1097,    2, 0x09 /* Protected */,
     168,    1, 1100,    2, 0x09 /* Protected */,
     169,    2, 1103,    2, 0x09 /* Protected */,
     171,    1, 1108,    2, 0x09 /* Protected */,
     172,    1, 1111,    2, 0x09 /* Protected */,
     175,    0, 1114,    2, 0x09 /* Protected */,
     176,    1, 1115,    2, 0x09 /* Protected */,
     177,    0, 1118,    2, 0x09 /* Protected */,
     178,    1, 1119,    2, 0x09 /* Protected */,
     179,    1, 1122,    2, 0x09 /* Protected */,
     181,    0, 1125,    2, 0x09 /* Protected */,
     182,    1, 1126,    2, 0x09 /* Protected */,
     183,    1, 1129,    2, 0x09 /* Protected */,
     184,    0, 1132,    2, 0x09 /* Protected */,
     185,    1, 1133,    2, 0x09 /* Protected */,
     186,    1, 1136,    2, 0x09 /* Protected */,
     188,    1, 1139,    2, 0x09 /* Protected */,
     189,    3, 1142,    2, 0x09 /* Protected */,
     193,    0, 1149,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::QRectF, QMetaType::Bool,    4,    5,    6,    7,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::QRectF,    4,    5,    6,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int,    4,    5,
    QMetaType::Bool, QMetaType::QString,    4,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::QRectF, QMetaType::Bool,    4,    5,    6,    7,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::QRectF,    4,    5,    6,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int,    4,    5,
    QMetaType::Bool, QMetaType::QString,    4,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::Bool, QMetaType::QRectF, QMetaType::Bool,    4,    5,   10,    6,    7,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::Bool, QMetaType::QRectF,    4,    5,   10,    6,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::Bool,    4,    5,   10,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int,    4,    5,
    QMetaType::Bool, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::QPoint, QMetaType::Int,   19,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   27,   28,
    QMetaType::Void, QMetaType::Bool,   30,
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, 0x80000000 | 37,   38,
    QMetaType::Void, QMetaType::QReal,   40,
    QMetaType::Void, 0x80000000 | 42,   43,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::Int,   45,    4,    5,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Void, QMetaType::Bool,   50,
    QMetaType::Void, QMetaType::Bool,   52,
    QMetaType::Void, QMetaType::Bool,   54,
    QMetaType::Void, 0x80000000 | 56,   57,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::Void, 0x80000000 | 61,   62,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   65,
    QMetaType::Void, QMetaType::QPoint,   67,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 71, QMetaType::Int,   72,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, 0x80000000 | 75,   76,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 85,   86,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 85,   86,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 85,   86,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 90,   86,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
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
    QMetaType::Void, QMetaType::Bool,  110,
    QMetaType::Void, QMetaType::Bool,  110,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  110,
    QMetaType::Void, QMetaType::Bool,  110,
    QMetaType::Void, QMetaType::Bool,  110,
    QMetaType::Void, QMetaType::Bool,  110,
    QMetaType::Void, QMetaType::Bool,  110,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  110,
    QMetaType::Void, QMetaType::Bool,  110,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  110,
    QMetaType::Void, QMetaType::Bool,  110,
    QMetaType::Void, QMetaType::Bool,  110,
    QMetaType::Void, QMetaType::Bool,  110,
    QMetaType::Void, QMetaType::Bool,  110,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  110,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  139,
    QMetaType::Void, QMetaType::Int,  141,
    QMetaType::Void, QMetaType::Int,  141,
    QMetaType::Void, 0x80000000 | 144,  145,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 148,  149,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  159,
    QMetaType::Void, QMetaType::QString,  159,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,  159,    5,
    QMetaType::Void, QMetaType::QString,  159,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  110,
    QMetaType::Void, QMetaType::Bool,  110,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   12,  170,
    QMetaType::Void, QMetaType::Bool,  110,
    QMetaType::Void, 0x80000000 | 173,  174,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   16,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 173,  174,
    QMetaType::Void, QMetaType::Int,  180,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   16,
    QMetaType::Void, QMetaType::QPoint,   67,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 173,  174,
    QMetaType::Void, QMetaType::Bool,  187,
    QMetaType::Void, QMetaType::QModelIndex,   16,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,  190,  191,  192,
    QMetaType::Void,

       0        // eod
};

void qpdfview::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->show(); break;
        case 1: { bool _r = _t->open((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QRectF(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->open((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QRectF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->open((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->open((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->openInNewTab((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QRectF(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->openInNewTab((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QRectF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->openInNewTab((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->openInNewTab((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->jumpToPageOrOpenInNewTab((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< const QRectF(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->jumpToPageOrOpenInNewTab((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< const QRectF(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->jumpToPageOrOpenInNewTab((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->jumpToPageOrOpenInNewTab((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->jumpToPageOrOpenInNewTab((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->startSearch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->saveDatabase(); break;
        case 16: _t->on_tabWidget_currentChanged(); break;
        case 17: _t->on_tabWidget_tabCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->on_tabWidget_tabDragRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->on_tabWidget_tabContextMenuRequested((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 20: _t->on_currentTab_documentChanged(); break;
        case 21: _t->on_currentTab_documentModified(); break;
        case 22: _t->on_currentTab_numberOfPagesChaned((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->on_currentTab_currentPageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->on_currentTab_canJumpChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 25: _t->on_currentTab_continuousModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->on_currentTab_layoutModeChanged((*reinterpret_cast< LayoutMode(*)>(_a[1]))); break;
        case 27: _t->on_currentTab_rightToLeftModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->on_currentTab_scaleModeChanged((*reinterpret_cast< ScaleMode(*)>(_a[1]))); break;
        case 29: _t->on_currentTab_scaleFactorChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 30: _t->on_currentTab_rotationChanged((*reinterpret_cast< Rotation(*)>(_a[1]))); break;
        case 31: _t->on_currentTab_linkClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->on_currentTab_linkClicked((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 33: _t->on_currentTab_renderFlagsChanged((*reinterpret_cast< qpdfview::RenderFlags(*)>(_a[1]))); break;
        case 34: _t->on_currentTab_invertColorsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->on_currentTab_convertToGrayscaleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->on_currentTab_trimMarginsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->on_currentTab_compositionModeChanged((*reinterpret_cast< CompositionMode(*)>(_a[1]))); break;
        case 38: _t->on_currentTab_highlightAllChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->on_currentTab_rubberBandModeChanged((*reinterpret_cast< RubberBandMode(*)>(_a[1]))); break;
        case 40: _t->on_currentTab_searchFinished(); break;
        case 41: _t->on_currentTab_searchProgressChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->on_currentTab_customContextMenuRequested((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 43: _t->on_splitView_splitHorizontally_triggered(); break;
        case 44: _t->on_splitView_splitVertically_triggered(); break;
        case 45: _t->on_splitView_split_triggered((*reinterpret_cast< Qt::Orientation(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 46: _t->on_splitView_closeCurrent_triggered(); break;
        case 47: _t->on_splitView_closeCurrent_triggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 48: _t->on_splitView_currentWidgetChanged((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 49: _t->on_currentPage_editingFinished(); break;
        case 50: _t->on_currentPage_returnPressed(); break;
        case 51: _t->on_scaleFactor_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 52: _t->on_scaleFactor_editingFinished(); break;
        case 53: _t->on_scaleFactor_returnPressed(); break;
        case 54: _t->on_open_triggered(); break;
        case 55: _t->on_openInNewTab_triggered(); break;
        case 56: _t->on_openCopyInNewTab_triggered(); break;
        case 57: _t->on_openCopyInNewTab_triggered((*reinterpret_cast< const DocumentView*(*)>(_a[1]))); break;
        case 58: _t->on_openCopyInNewWindow_triggered(); break;
        case 59: _t->on_openCopyInNewWindow_triggered((*reinterpret_cast< const DocumentView*(*)>(_a[1]))); break;
        case 60: _t->on_openContainingFolder_triggered(); break;
        case 61: _t->on_openContainingFolder_triggered((*reinterpret_cast< const DocumentView*(*)>(_a[1]))); break;
        case 62: _t->on_moveToInstance_triggered(); break;
        case 63: _t->on_moveToInstance_triggered((*reinterpret_cast< DocumentView*(*)>(_a[1]))); break;
        case 64: _t->on_refresh_triggered(); break;
        case 65: _t->on_save_triggered(); break;
        case 66: _t->on_saveAs_triggered(); break;
        case 67: _t->on_saveCopy_triggered(); break;
        case 68: _t->on_print_triggered(); break;
        case 69: _t->on_recentlyUsed_openTriggered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 70: _t->on_previousPage_triggered(); break;
        case 71: _t->on_nextPage_triggered(); break;
        case 72: _t->on_firstPage_triggered(); break;
        case 73: _t->on_lastPage_triggered(); break;
        case 74: _t->on_setFirstPage_triggered(); break;
        case 75: _t->on_jumpToPage_triggered(); break;
        case 76: _t->on_jumpBackward_triggered(); break;
        case 77: _t->on_jumpForward_triggered(); break;
        case 78: _t->on_search_triggered(); break;
        case 79: _t->on_findPrevious_triggered(); break;
        case 80: _t->on_findNext_triggered(); break;
        case 81: _t->on_cancelSearch_triggered(); break;
        case 82: _t->on_copyToClipboardMode_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 83: _t->on_addAnnotationMode_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 84: _t->on_settings_triggered(); break;
        case 85: _t->on_continuousMode_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 86: _t->on_twoPagesMode_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 87: _t->on_twoPagesWithCoverPageMode_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 88: _t->on_multiplePagesMode_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 89: _t->on_rightToLeftMode_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 90: _t->on_zoomIn_triggered(); break;
        case 91: _t->on_zoomOut_triggered(); break;
        case 92: _t->on_originalSize_triggered(); break;
        case 93: _t->on_fitToPageWidthMode_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 94: _t->on_fitToPageSizeMode_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 95: _t->on_rotateLeft_triggered(); break;
        case 96: _t->on_rotateRight_triggered(); break;
        case 97: _t->on_invertColors_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 98: _t->on_convertToGrayscale_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 99: _t->on_trimMargins_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 100: _t->on_darkenWithPaperColor_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 101: _t->on_lightenWithPaperColor_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 102: _t->on_fonts_triggered(); break;
        case 103: _t->on_fullscreen_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 104: _t->on_presentation_triggered(); break;
        case 105: _t->on_previousTab_triggered(); break;
        case 106: _t->on_nextTab_triggered(); break;
        case 107: _t->on_closeTab_triggered(); break;
        case 108: _t->on_closeAllTabs_triggered(); break;
        case 109: _t->on_closeAllTabsButCurrentTab_triggered(); break;
        case 110: _t->on_closeAllTabsButThisOne_triggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 111: _t->on_closeAllTabsToTheLeft_triggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 112: _t->on_closeAllTabsToTheRight_triggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 113: _t->on_closeTabs_triggered((*reinterpret_cast< const QVector<DocumentView*>(*)>(_a[1]))); break;
        case 114: _t->on_restoreMostRecentlyClosedTab_triggered(); break;
        case 115: _t->on_recentlyClosed_tabActionTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 116: _t->on_tabAction_triggered(); break;
        case 117: _t->on_tabShortcut_activated(); break;
        case 118: _t->on_previousBookmark_triggered(); break;
        case 119: _t->on_nextBookmark_triggered(); break;
        case 120: _t->on_addBookmark_triggered(); break;
        case 121: _t->on_removeBookmark_triggered(); break;
        case 122: _t->on_removeAllBookmarks_triggered(); break;
        case 123: _t->on_bookmarksMenu_aboutToShow(); break;
        case 124: _t->on_bookmark_openTriggered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 125: _t->on_bookmark_openInNewTabTriggered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 126: _t->on_bookmark_jumpToPageTriggered((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 127: _t->on_bookmark_removeBookmarkTriggered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 128: _t->on_contents_triggered(); break;
        case 129: _t->on_about_triggered(); break;
        case 130: _t->on_focusCurrentPage_activated(); break;
        case 131: _t->on_focusScaleFactor_activated(); break;
        case 132: _t->on_toggleToolBars_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 133: _t->on_toggleMenuBar_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 134: _t->on_searchInitiated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 135: _t->on_highlightAll_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 136: _t->on_dock_dockLocationChanged((*reinterpret_cast< Qt::DockWidgetArea(*)>(_a[1]))); break;
        case 137: _t->on_outline_sectionCountChanged(); break;
        case 138: _t->on_outline_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 139: _t->on_properties_sectionCountChanged(); break;
        case 140: _t->on_thumbnails_dockLocationChanged((*reinterpret_cast< Qt::DockWidgetArea(*)>(_a[1]))); break;
        case 141: _t->on_thumbnails_verticalScrollBar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 142: _t->on_bookmarks_sectionCountChanged(); break;
        case 143: _t->on_bookmarks_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 144: _t->on_bookmarks_contextMenuRequested((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 145: _t->on_search_sectionCountChanged(); break;
        case 146: _t->on_search_dockLocationChanged((*reinterpret_cast< Qt::DockWidgetArea(*)>(_a[1]))); break;
        case 147: _t->on_search_visibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 148: _t->on_search_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 149: _t->on_search_rowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 150: _t->on_saveDatabase_timeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 48:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qpdfview::MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_qpdfview__MainWindow.data,
      qt_meta_data_qpdfview__MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qpdfview::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qpdfview::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qpdfview__MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int qpdfview::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 151)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 151;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 151)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 151;
    }
    return _id;
}
struct qt_meta_stringdata_qpdfview__MainWindowAdaptor_t {
    QByteArrayData data[42];
    char stringdata0[575];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qpdfview__MainWindowAdaptor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qpdfview__MainWindowAdaptor_t qt_meta_stringdata_qpdfview__MainWindowAdaptor = {
    {
QT_MOC_LITERAL(0, 0, 27), // "qpdfview::MainWindowAdaptor"
QT_MOC_LITERAL(1, 28, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 44, 25), // "local.qpdfview.MainWindow"
QT_MOC_LITERAL(3, 70, 16), // "raiseAndActivate"
QT_MOC_LITERAL(4, 87, 9), // "Q_NOREPLY"
QT_MOC_LITERAL(5, 97, 4), // "open"
QT_MOC_LITERAL(6, 102, 0), // ""
QT_MOC_LITERAL(7, 103, 16), // "absoluteFilePath"
QT_MOC_LITERAL(8, 120, 4), // "page"
QT_MOC_LITERAL(9, 125, 9), // "highlight"
QT_MOC_LITERAL(10, 135, 5), // "quiet"
QT_MOC_LITERAL(11, 141, 12), // "openInNewTab"
QT_MOC_LITERAL(12, 154, 24), // "jumpToPageOrOpenInNewTab"
QT_MOC_LITERAL(13, 179, 17), // "refreshBeforeJump"
QT_MOC_LITERAL(14, 197, 11), // "startSearch"
QT_MOC_LITERAL(15, 209, 4), // "text"
QT_MOC_LITERAL(16, 214, 12), // "saveDatabase"
QT_MOC_LITERAL(17, 227, 11), // "currentPage"
QT_MOC_LITERAL(18, 239, 10), // "jumpToPage"
QT_MOC_LITERAL(19, 250, 12), // "previousPage"
QT_MOC_LITERAL(20, 263, 8), // "nextPage"
QT_MOC_LITERAL(21, 272, 9), // "firstPage"
QT_MOC_LITERAL(22, 282, 8), // "lastPage"
QT_MOC_LITERAL(23, 291, 16), // "previousBookmark"
QT_MOC_LITERAL(24, 308, 12), // "nextBookmark"
QT_MOC_LITERAL(25, 321, 14), // "jumpToBookmark"
QT_MOC_LITERAL(26, 336, 5), // "label"
QT_MOC_LITERAL(27, 342, 14), // "continuousMode"
QT_MOC_LITERAL(28, 357, 7), // "checked"
QT_MOC_LITERAL(29, 365, 12), // "twoPagesMode"
QT_MOC_LITERAL(30, 378, 25), // "twoPagesWithCoverPageMode"
QT_MOC_LITERAL(31, 404, 17), // "multiplePagesMode"
QT_MOC_LITERAL(32, 422, 18), // "fitToPageWidthMode"
QT_MOC_LITERAL(33, 441, 17), // "fitToPageSizeMode"
QT_MOC_LITERAL(34, 459, 12), // "invertColors"
QT_MOC_LITERAL(35, 472, 18), // "convertToGrayscale"
QT_MOC_LITERAL(36, 491, 11), // "trimMargins"
QT_MOC_LITERAL(37, 503, 10), // "fullscreen"
QT_MOC_LITERAL(38, 514, 12), // "presentation"
QT_MOC_LITERAL(39, 527, 8), // "closeTab"
QT_MOC_LITERAL(40, 536, 12), // "closeAllTabs"
QT_MOC_LITERAL(41, 549, 25) // "closeAllTabsButCurrentTab"

    },
    "qpdfview::MainWindowAdaptor\0D-Bus Interface\0"
    "local.qpdfview.MainWindow\0raiseAndActivate\0"
    "Q_NOREPLY\0open\0\0absoluteFilePath\0page\0"
    "highlight\0quiet\0openInNewTab\0"
    "jumpToPageOrOpenInNewTab\0refreshBeforeJump\0"
    "startSearch\0text\0saveDatabase\0currentPage\0"
    "jumpToPage\0previousPage\0nextPage\0"
    "firstPage\0lastPage\0previousBookmark\0"
    "nextBookmark\0jumpToBookmark\0label\0"
    "continuousMode\0checked\0twoPagesMode\0"
    "twoPagesWithCoverPageMode\0multiplePagesMode\0"
    "fitToPageWidthMode\0fitToPageSizeMode\0"
    "invertColors\0convertToGrayscale\0"
    "trimMargins\0fullscreen\0presentation\0"
    "closeTab\0closeAllTabs\0closeAllTabsButCurrentTab"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qpdfview__MainWindowAdaptor[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
      40,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // slots: name, argc, parameters, tag, flags
       3,    0,  216,    4, 0x0a /* Public */,
       5,    4,  217,    6, 0x0a /* Public */,
       5,    3,  226,    6, 0x2a /* Public | MethodCloned */,
       5,    2,  233,    6, 0x2a /* Public | MethodCloned */,
       5,    1,  238,    6, 0x2a /* Public | MethodCloned */,
      11,    4,  241,    6, 0x0a /* Public */,
      11,    3,  250,    6, 0x2a /* Public | MethodCloned */,
      11,    2,  257,    6, 0x2a /* Public | MethodCloned */,
      11,    1,  262,    6, 0x2a /* Public | MethodCloned */,
      12,    5,  265,    6, 0x0a /* Public */,
      12,    4,  276,    6, 0x2a /* Public | MethodCloned */,
      12,    3,  285,    6, 0x2a /* Public | MethodCloned */,
      12,    2,  292,    6, 0x2a /* Public | MethodCloned */,
      12,    1,  297,    6, 0x2a /* Public | MethodCloned */,
      14,    1,  300,    4, 0x0a /* Public */,
      16,    0,  303,    4, 0x0a /* Public */,
      17,    0,  304,    6, 0x0a /* Public */,
      18,    1,  305,    4, 0x0a /* Public */,
      19,    0,  308,    4, 0x0a /* Public */,
      20,    0,  309,    4, 0x0a /* Public */,
      21,    0,  310,    4, 0x0a /* Public */,
      22,    0,  311,    4, 0x0a /* Public */,
      23,    0,  312,    4, 0x0a /* Public */,
      24,    0,  313,    4, 0x0a /* Public */,
      25,    1,  314,    6, 0x0a /* Public */,
      27,    1,  317,    4, 0x0a /* Public */,
      29,    1,  320,    4, 0x0a /* Public */,
      30,    1,  323,    4, 0x0a /* Public */,
      31,    1,  326,    4, 0x0a /* Public */,
      32,    1,  329,    4, 0x0a /* Public */,
      33,    1,  332,    4, 0x0a /* Public */,
      34,    1,  335,    4, 0x0a /* Public */,
      35,    1,  338,    4, 0x0a /* Public */,
      36,    1,  341,    4, 0x0a /* Public */,
      37,    1,  344,    4, 0x0a /* Public */,
      38,    0,  347,    4, 0x0a /* Public */,
      39,    0,  348,    4, 0x0a /* Public */,
      40,    0,  349,    4, 0x0a /* Public */,
      41,    0,  350,    4, 0x0a /* Public */,
      39,    1,  351,    6, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::QRectF, QMetaType::Bool,    7,    8,    9,   10,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::QRectF,    7,    8,    9,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int,    7,    8,
    QMetaType::Bool, QMetaType::QString,    7,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::QRectF, QMetaType::Bool,    7,    8,    9,   10,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::QRectF,    7,    8,    9,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int,    7,    8,
    QMetaType::Bool, QMetaType::QString,    7,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::Bool, QMetaType::QRectF, QMetaType::Bool,    7,    8,   13,    9,   10,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::Bool, QMetaType::QRectF,    7,    8,   13,    9,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::Bool,    7,    8,   13,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int,    7,    8,
    QMetaType::Bool, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   26,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,    7,

       0        // eod
};

void qpdfview::MainWindowAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindowAdaptor *_t = static_cast<MainWindowAdaptor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->raiseAndActivate(); break;
        case 1: { bool _r = _t->open((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QRectF(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->open((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QRectF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->open((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->open((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->openInNewTab((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QRectF(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->openInNewTab((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QRectF(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->openInNewTab((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->openInNewTab((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->jumpToPageOrOpenInNewTab((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< const QRectF(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->jumpToPageOrOpenInNewTab((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< const QRectF(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->jumpToPageOrOpenInNewTab((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->jumpToPageOrOpenInNewTab((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->jumpToPageOrOpenInNewTab((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->startSearch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->saveDatabase(); break;
        case 16: { int _r = _t->currentPage();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 17: _t->jumpToPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->previousPage(); break;
        case 19: _t->nextPage(); break;
        case 20: _t->firstPage(); break;
        case 21: _t->lastPage(); break;
        case 22: _t->previousBookmark(); break;
        case 23: _t->nextBookmark(); break;
        case 24: { bool _r = _t->jumpToBookmark((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 25: _t->continuousMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->twoPagesMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->twoPagesWithCoverPageMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->multiplePagesMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->fitToPageWidthMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->fitToPageSizeMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->invertColors((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->convertToGrayscale((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->trimMargins((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->fullscreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->presentation(); break;
        case 36: _t->closeTab(); break;
        case 37: _t->closeAllTabs(); break;
        case 38: _t->closeAllTabsButCurrentTab(); break;
        case 39: { bool _r = _t->closeTab((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qpdfview::MainWindowAdaptor::staticMetaObject = {
    { &QDBusAbstractAdaptor::staticMetaObject, qt_meta_stringdata_qpdfview__MainWindowAdaptor.data,
      qt_meta_data_qpdfview__MainWindowAdaptor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qpdfview::MainWindowAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qpdfview::MainWindowAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qpdfview__MainWindowAdaptor.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int qpdfview::MainWindowAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 40)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 40;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
