/****************************************************************************
** Meta object code from reading C++ file 'documentview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sources/documentview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'documentview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qpdfview__DocumentView_t {
    QByteArrayData data[111];
    char stringdata0[1570];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qpdfview__DocumentView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qpdfview__DocumentView_t qt_meta_stringdata_qpdfview__DocumentView = {
    {
QT_MOC_LITERAL(0, 0, 22), // "qpdfview::DocumentView"
QT_MOC_LITERAL(1, 23, 15), // "documentChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 16), // "documentModified"
QT_MOC_LITERAL(4, 57, 20), // "numberOfPagesChanged"
QT_MOC_LITERAL(5, 78, 13), // "numberOfPages"
QT_MOC_LITERAL(6, 92, 18), // "currentPageChanged"
QT_MOC_LITERAL(7, 111, 11), // "currentPage"
QT_MOC_LITERAL(8, 123, 11), // "trackChange"
QT_MOC_LITERAL(9, 135, 14), // "canJumpChanged"
QT_MOC_LITERAL(10, 150, 8), // "backward"
QT_MOC_LITERAL(11, 159, 7), // "forward"
QT_MOC_LITERAL(12, 167, 21), // "continuousModeChanged"
QT_MOC_LITERAL(13, 189, 14), // "continuousMode"
QT_MOC_LITERAL(14, 204, 17), // "layoutModeChanged"
QT_MOC_LITERAL(15, 222, 10), // "LayoutMode"
QT_MOC_LITERAL(16, 233, 10), // "layoutMode"
QT_MOC_LITERAL(17, 244, 22), // "rightToLeftModeChanged"
QT_MOC_LITERAL(18, 267, 15), // "rightToLeftMode"
QT_MOC_LITERAL(19, 283, 16), // "scaleModeChanged"
QT_MOC_LITERAL(20, 300, 9), // "ScaleMode"
QT_MOC_LITERAL(21, 310, 9), // "scaleMode"
QT_MOC_LITERAL(22, 320, 18), // "scaleFactorChanged"
QT_MOC_LITERAL(23, 339, 11), // "scaleFactor"
QT_MOC_LITERAL(24, 351, 15), // "rotationChanged"
QT_MOC_LITERAL(25, 367, 8), // "Rotation"
QT_MOC_LITERAL(26, 376, 8), // "rotation"
QT_MOC_LITERAL(27, 385, 11), // "linkClicked"
QT_MOC_LITERAL(28, 397, 4), // "page"
QT_MOC_LITERAL(29, 402, 6), // "newTab"
QT_MOC_LITERAL(30, 409, 8), // "filePath"
QT_MOC_LITERAL(31, 418, 18), // "renderFlagsChanged"
QT_MOC_LITERAL(32, 437, 21), // "qpdfview::RenderFlags"
QT_MOC_LITERAL(33, 459, 11), // "renderFlags"
QT_MOC_LITERAL(34, 471, 19), // "invertColorsChanged"
QT_MOC_LITERAL(35, 491, 12), // "invertColors"
QT_MOC_LITERAL(36, 504, 25), // "convertToGrayscaleChanged"
QT_MOC_LITERAL(37, 530, 18), // "convertToGrayscale"
QT_MOC_LITERAL(38, 549, 18), // "trimMarginsChanged"
QT_MOC_LITERAL(39, 568, 11), // "trimMargins"
QT_MOC_LITERAL(40, 580, 22), // "compositionModeChanged"
QT_MOC_LITERAL(41, 603, 15), // "CompositionMode"
QT_MOC_LITERAL(42, 619, 15), // "compositionMode"
QT_MOC_LITERAL(43, 635, 19), // "highlightAllChanged"
QT_MOC_LITERAL(44, 655, 12), // "highlightAll"
QT_MOC_LITERAL(45, 668, 21), // "rubberBandModeChanged"
QT_MOC_LITERAL(46, 690, 14), // "RubberBandMode"
QT_MOC_LITERAL(47, 705, 14), // "rubberBandMode"
QT_MOC_LITERAL(48, 720, 14), // "searchFinished"
QT_MOC_LITERAL(49, 735, 21), // "searchProgressChanged"
QT_MOC_LITERAL(50, 757, 8), // "progress"
QT_MOC_LITERAL(51, 766, 4), // "show"
QT_MOC_LITERAL(52, 771, 4), // "open"
QT_MOC_LITERAL(53, 776, 7), // "refresh"
QT_MOC_LITERAL(54, 784, 4), // "save"
QT_MOC_LITERAL(55, 789, 11), // "withChanges"
QT_MOC_LITERAL(56, 801, 5), // "print"
QT_MOC_LITERAL(57, 807, 9), // "QPrinter*"
QT_MOC_LITERAL(58, 817, 7), // "printer"
QT_MOC_LITERAL(59, 825, 12), // "PrintOptions"
QT_MOC_LITERAL(60, 838, 12), // "printOptions"
QT_MOC_LITERAL(61, 851, 12), // "previousPage"
QT_MOC_LITERAL(62, 864, 8), // "nextPage"
QT_MOC_LITERAL(63, 873, 9), // "firstPage"
QT_MOC_LITERAL(64, 883, 8), // "lastPage"
QT_MOC_LITERAL(65, 892, 10), // "jumpToPage"
QT_MOC_LITERAL(66, 903, 7), // "newLeft"
QT_MOC_LITERAL(67, 911, 6), // "newTop"
QT_MOC_LITERAL(68, 918, 15), // "canJumpBackward"
QT_MOC_LITERAL(69, 934, 12), // "jumpBackward"
QT_MOC_LITERAL(70, 947, 14), // "canJumpForward"
QT_MOC_LITERAL(71, 962, 11), // "jumpForward"
QT_MOC_LITERAL(72, 974, 18), // "temporaryHighlight"
QT_MOC_LITERAL(73, 993, 9), // "highlight"
QT_MOC_LITERAL(74, 1003, 11), // "startSearch"
QT_MOC_LITERAL(75, 1015, 4), // "text"
QT_MOC_LITERAL(76, 1020, 9), // "matchCase"
QT_MOC_LITERAL(77, 1030, 10), // "wholeWords"
QT_MOC_LITERAL(78, 1041, 12), // "cancelSearch"
QT_MOC_LITERAL(79, 1054, 12), // "clearResults"
QT_MOC_LITERAL(80, 1067, 12), // "findPrevious"
QT_MOC_LITERAL(81, 1080, 8), // "findNext"
QT_MOC_LITERAL(82, 1089, 10), // "findResult"
QT_MOC_LITERAL(83, 1100, 5), // "index"
QT_MOC_LITERAL(84, 1106, 6), // "zoomIn"
QT_MOC_LITERAL(85, 1113, 7), // "zoomOut"
QT_MOC_LITERAL(86, 1121, 12), // "originalSize"
QT_MOC_LITERAL(87, 1134, 10), // "rotateLeft"
QT_MOC_LITERAL(88, 1145, 11), // "rotateRight"
QT_MOC_LITERAL(89, 1157, 17), // "startPresentation"
QT_MOC_LITERAL(90, 1175, 33), // "on_verticalScrollBar_valueCha..."
QT_MOC_LITERAL(91, 1209, 22), // "on_autoRefresh_timeout"
QT_MOC_LITERAL(92, 1232, 19), // "on_prefetch_timeout"
QT_MOC_LITERAL(93, 1252, 29), // "on_temporaryHighlight_timeout"
QT_MOC_LITERAL(94, 1282, 29), // "on_searchTask_progressChanged"
QT_MOC_LITERAL(95, 1312, 26), // "on_searchTask_resultsReady"
QT_MOC_LITERAL(96, 1339, 13), // "QList<QRectF>"
QT_MOC_LITERAL(97, 1353, 7), // "results"
QT_MOC_LITERAL(98, 1361, 24), // "on_pages_cropRectChanged"
QT_MOC_LITERAL(99, 1386, 29), // "on_thumbnails_cropRectChanged"
QT_MOC_LITERAL(100, 1416, 20), // "on_pages_linkClicked"
QT_MOC_LITERAL(101, 1437, 4), // "left"
QT_MOC_LITERAL(102, 1442, 3), // "top"
QT_MOC_LITERAL(103, 1446, 8), // "fileName"
QT_MOC_LITERAL(104, 1455, 3), // "url"
QT_MOC_LITERAL(105, 1459, 27), // "on_pages_rubberBandFinished"
QT_MOC_LITERAL(106, 1487, 24), // "on_pages_zoomToSelection"
QT_MOC_LITERAL(107, 1512, 4), // "rect"
QT_MOC_LITERAL(108, 1517, 27), // "on_pages_openInSourceEditor"
QT_MOC_LITERAL(109, 1545, 3), // "pos"
QT_MOC_LITERAL(110, 1549, 20) // "on_pages_wasModified"

    },
    "qpdfview::DocumentView\0documentChanged\0"
    "\0documentModified\0numberOfPagesChanged\0"
    "numberOfPages\0currentPageChanged\0"
    "currentPage\0trackChange\0canJumpChanged\0"
    "backward\0forward\0continuousModeChanged\0"
    "continuousMode\0layoutModeChanged\0"
    "LayoutMode\0layoutMode\0rightToLeftModeChanged\0"
    "rightToLeftMode\0scaleModeChanged\0"
    "ScaleMode\0scaleMode\0scaleFactorChanged\0"
    "scaleFactor\0rotationChanged\0Rotation\0"
    "rotation\0linkClicked\0page\0newTab\0"
    "filePath\0renderFlagsChanged\0"
    "qpdfview::RenderFlags\0renderFlags\0"
    "invertColorsChanged\0invertColors\0"
    "convertToGrayscaleChanged\0convertToGrayscale\0"
    "trimMarginsChanged\0trimMargins\0"
    "compositionModeChanged\0CompositionMode\0"
    "compositionMode\0highlightAllChanged\0"
    "highlightAll\0rubberBandModeChanged\0"
    "RubberBandMode\0rubberBandMode\0"
    "searchFinished\0searchProgressChanged\0"
    "progress\0show\0open\0refresh\0save\0"
    "withChanges\0print\0QPrinter*\0printer\0"
    "PrintOptions\0printOptions\0previousPage\0"
    "nextPage\0firstPage\0lastPage\0jumpToPage\0"
    "newLeft\0newTop\0canJumpBackward\0"
    "jumpBackward\0canJumpForward\0jumpForward\0"
    "temporaryHighlight\0highlight\0startSearch\0"
    "text\0matchCase\0wholeWords\0cancelSearch\0"
    "clearResults\0findPrevious\0findNext\0"
    "findResult\0index\0zoomIn\0zoomOut\0"
    "originalSize\0rotateLeft\0rotateRight\0"
    "startPresentation\0on_verticalScrollBar_valueChanged\0"
    "on_autoRefresh_timeout\0on_prefetch_timeout\0"
    "on_temporaryHighlight_timeout\0"
    "on_searchTask_progressChanged\0"
    "on_searchTask_resultsReady\0QList<QRectF>\0"
    "results\0on_pages_cropRectChanged\0"
    "on_thumbnails_cropRectChanged\0"
    "on_pages_linkClicked\0left\0top\0fileName\0"
    "url\0on_pages_rubberBandFinished\0"
    "on_pages_zoomToSelection\0rect\0"
    "on_pages_openInSourceEditor\0pos\0"
    "on_pages_wasModified"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qpdfview__DocumentView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      69,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      23,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  359,    2, 0x06 /* Public */,
       3,    0,  360,    2, 0x06 /* Public */,
       4,    1,  361,    2, 0x06 /* Public */,
       6,    2,  364,    2, 0x06 /* Public */,
       6,    1,  369,    2, 0x26 /* Public | MethodCloned */,
       9,    2,  372,    2, 0x06 /* Public */,
      12,    1,  377,    2, 0x06 /* Public */,
      14,    1,  380,    2, 0x06 /* Public */,
      17,    1,  383,    2, 0x06 /* Public */,
      19,    1,  386,    2, 0x06 /* Public */,
      22,    1,  389,    2, 0x06 /* Public */,
      24,    1,  392,    2, 0x06 /* Public */,
      27,    1,  395,    2, 0x06 /* Public */,
      27,    3,  398,    2, 0x06 /* Public */,
      31,    1,  405,    2, 0x06 /* Public */,
      34,    1,  408,    2, 0x06 /* Public */,
      36,    1,  411,    2, 0x06 /* Public */,
      38,    1,  414,    2, 0x06 /* Public */,
      40,    1,  417,    2, 0x06 /* Public */,
      43,    1,  420,    2, 0x06 /* Public */,
      45,    1,  423,    2, 0x06 /* Public */,
      48,    0,  426,    2, 0x06 /* Public */,
      49,    1,  427,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      51,    0,  430,    2, 0x0a /* Public */,
      52,    1,  431,    2, 0x0a /* Public */,
      53,    0,  434,    2, 0x0a /* Public */,
      54,    2,  435,    2, 0x0a /* Public */,
      56,    2,  440,    2, 0x0a /* Public */,
      56,    1,  445,    2, 0x2a /* Public | MethodCloned */,
      61,    0,  448,    2, 0x0a /* Public */,
      62,    0,  449,    2, 0x0a /* Public */,
      63,    0,  450,    2, 0x0a /* Public */,
      64,    0,  451,    2, 0x0a /* Public */,
      65,    4,  452,    2, 0x0a /* Public */,
      65,    3,  461,    2, 0x2a /* Public | MethodCloned */,
      65,    2,  468,    2, 0x2a /* Public | MethodCloned */,
      65,    1,  473,    2, 0x2a /* Public | MethodCloned */,
      68,    0,  476,    2, 0x0a /* Public */,
      69,    0,  477,    2, 0x0a /* Public */,
      70,    0,  478,    2, 0x0a /* Public */,
      71,    0,  479,    2, 0x0a /* Public */,
      72,    2,  480,    2, 0x0a /* Public */,
      74,    3,  485,    2, 0x0a /* Public */,
      78,    0,  492,    2, 0x0a /* Public */,
      79,    0,  493,    2, 0x0a /* Public */,
      80,    0,  494,    2, 0x0a /* Public */,
      81,    0,  495,    2, 0x0a /* Public */,
      82,    1,  496,    2, 0x0a /* Public */,
      84,    0,  499,    2, 0x0a /* Public */,
      85,    0,  500,    2, 0x0a /* Public */,
      86,    0,  501,    2, 0x0a /* Public */,
      87,    0,  502,    2, 0x0a /* Public */,
      88,    0,  503,    2, 0x0a /* Public */,
      89,    0,  504,    2, 0x0a /* Public */,
      90,    0,  505,    2, 0x09 /* Protected */,
      91,    0,  506,    2, 0x09 /* Protected */,
      92,    0,  507,    2, 0x09 /* Protected */,
      93,    0,  508,    2, 0x09 /* Protected */,
      94,    1,  509,    2, 0x09 /* Protected */,
      95,    2,  512,    2, 0x09 /* Protected */,
      98,    0,  517,    2, 0x09 /* Protected */,
      99,    0,  518,    2, 0x09 /* Protected */,
     100,    4,  519,    2, 0x09 /* Protected */,
     100,    3,  528,    2, 0x09 /* Protected */,
     100,    1,  535,    2, 0x09 /* Protected */,
     105,    0,  538,    2, 0x09 /* Protected */,
     106,    2,  539,    2, 0x09 /* Protected */,
     108,    2,  544,    2, 0x09 /* Protected */,
     110,    0,  549,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    7,    8,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   10,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, QMetaType::QReal,   23,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::Int,   29,   30,   28,
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Bool,   39,
    QMetaType::Void, 0x80000000 | 41,   42,
    QMetaType::Void, QMetaType::Bool,   44,
    QMetaType::Void, 0x80000000 | 46,   47,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   50,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   30,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString, QMetaType::Bool,   30,   55,
    QMetaType::Bool, 0x80000000 | 57, 0x80000000 | 59,   58,   60,
    QMetaType::Bool, 0x80000000 | 57,   58,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool, QMetaType::QReal, QMetaType::QReal,   28,    8,   66,   67,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool, QMetaType::QReal,   28,    8,   66,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   28,    8,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QRectF,   28,   73,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,   75,   76,   77,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   83,
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
    QMetaType::Void, QMetaType::Int,   50,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 96,   83,   97,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::QReal, QMetaType::QReal,   29,   28,  101,  102,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::Int,   29,  103,   28,
    QMetaType::Void, QMetaType::QString,  104,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QRectF,   28,  107,
    QMetaType::Void, QMetaType::Int, QMetaType::QPointF,   28,  109,
    QMetaType::Void,

       0        // eod
};

void qpdfview::DocumentView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DocumentView *_t = static_cast<DocumentView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->documentChanged(); break;
        case 1: _t->documentModified(); break;
        case 2: _t->numberOfPagesChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->currentPageChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->currentPageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->canJumpChanged((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->continuousModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->layoutModeChanged((*reinterpret_cast< LayoutMode(*)>(_a[1]))); break;
        case 8: _t->rightToLeftModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->scaleModeChanged((*reinterpret_cast< ScaleMode(*)>(_a[1]))); break;
        case 10: _t->scaleFactorChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 11: _t->rotationChanged((*reinterpret_cast< Rotation(*)>(_a[1]))); break;
        case 12: _t->linkClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->linkClicked((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 14: _t->renderFlagsChanged((*reinterpret_cast< qpdfview::RenderFlags(*)>(_a[1]))); break;
        case 15: _t->invertColorsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->convertToGrayscaleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->trimMarginsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->compositionModeChanged((*reinterpret_cast< CompositionMode(*)>(_a[1]))); break;
        case 19: _t->highlightAllChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->rubberBandModeChanged((*reinterpret_cast< RubberBandMode(*)>(_a[1]))); break;
        case 21: _t->searchFinished(); break;
        case 22: _t->searchProgressChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->show(); break;
        case 24: { bool _r = _t->open((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 25: { bool _r = _t->refresh();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 26: { bool _r = _t->save((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 27: { bool _r = _t->print((*reinterpret_cast< QPrinter*(*)>(_a[1])),(*reinterpret_cast< const PrintOptions(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 28: { bool _r = _t->print((*reinterpret_cast< QPrinter*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 29: _t->previousPage(); break;
        case 30: _t->nextPage(); break;
        case 31: _t->firstPage(); break;
        case 32: _t->lastPage(); break;
        case 33: _t->jumpToPage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        case 34: _t->jumpToPage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 35: _t->jumpToPage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 36: _t->jumpToPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: { bool _r = _t->canJumpBackward();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 38: _t->jumpBackward(); break;
        case 39: { bool _r = _t->canJumpForward();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 40: _t->jumpForward(); break;
        case 41: _t->temporaryHighlight((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2]))); break;
        case 42: _t->startSearch((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 43: _t->cancelSearch(); break;
        case 44: _t->clearResults(); break;
        case 45: _t->findPrevious(); break;
        case 46: _t->findNext(); break;
        case 47: _t->findResult((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 48: _t->zoomIn(); break;
        case 49: _t->zoomOut(); break;
        case 50: _t->originalSize(); break;
        case 51: _t->rotateLeft(); break;
        case 52: _t->rotateRight(); break;
        case 53: _t->startPresentation(); break;
        case 54: _t->on_verticalScrollBar_valueChanged(); break;
        case 55: _t->on_autoRefresh_timeout(); break;
        case 56: _t->on_prefetch_timeout(); break;
        case 57: _t->on_temporaryHighlight_timeout(); break;
        case 58: _t->on_searchTask_progressChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 59: _t->on_searchTask_resultsReady((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QList<QRectF>(*)>(_a[2]))); break;
        case 60: _t->on_pages_cropRectChanged(); break;
        case 61: _t->on_thumbnails_cropRectChanged(); break;
        case 62: _t->on_pages_linkClicked((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        case 63: _t->on_pages_linkClicked((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 64: _t->on_pages_linkClicked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 65: _t->on_pages_rubberBandFinished(); break;
        case 66: _t->on_pages_zoomToSelection((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QRectF(*)>(_a[2]))); break;
        case 67: _t->on_pages_openInSourceEditor((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        case 68: _t->on_pages_wasModified(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 59:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QRectF> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DocumentView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentView::documentChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DocumentView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentView::documentModified)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DocumentView::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentView::numberOfPagesChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DocumentView::*_t)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentView::currentPageChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (DocumentView::*_t)(bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentView::canJumpChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (DocumentView::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentView::continuousModeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (DocumentView::*_t)(LayoutMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentView::layoutModeChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (DocumentView::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentView::rightToLeftModeChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (DocumentView::*_t)(ScaleMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentView::scaleModeChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (DocumentView::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentView::scaleFactorChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (DocumentView::*_t)(Rotation );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentView::rotationChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (DocumentView::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentView::linkClicked)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (DocumentView::*_t)(bool , const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentView::linkClicked)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (DocumentView::*_t)(qpdfview::RenderFlags );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentView::renderFlagsChanged)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (DocumentView::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentView::invertColorsChanged)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (DocumentView::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentView::convertToGrayscaleChanged)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (DocumentView::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentView::trimMarginsChanged)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (DocumentView::*_t)(CompositionMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentView::compositionModeChanged)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (DocumentView::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentView::highlightAllChanged)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (DocumentView::*_t)(RubberBandMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentView::rubberBandModeChanged)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (DocumentView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentView::searchFinished)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (DocumentView::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DocumentView::searchProgressChanged)) {
                *result = 22;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qpdfview::DocumentView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_qpdfview__DocumentView.data,
      qt_meta_data_qpdfview__DocumentView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qpdfview::DocumentView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qpdfview::DocumentView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qpdfview__DocumentView.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int qpdfview::DocumentView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 69)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 69;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 69)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 69;
    }
    return _id;
}

// SIGNAL 0
void qpdfview::DocumentView::documentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void qpdfview::DocumentView::documentModified()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void qpdfview::DocumentView::numberOfPagesChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void qpdfview::DocumentView::currentPageChanged(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 5
void qpdfview::DocumentView::canJumpChanged(bool _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void qpdfview::DocumentView::continuousModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void qpdfview::DocumentView::layoutModeChanged(LayoutMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void qpdfview::DocumentView::rightToLeftModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void qpdfview::DocumentView::scaleModeChanged(ScaleMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void qpdfview::DocumentView::scaleFactorChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void qpdfview::DocumentView::rotationChanged(Rotation _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void qpdfview::DocumentView::linkClicked(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void qpdfview::DocumentView::linkClicked(bool _t1, const QString & _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void qpdfview::DocumentView::renderFlagsChanged(qpdfview::RenderFlags _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void qpdfview::DocumentView::invertColorsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void qpdfview::DocumentView::convertToGrayscaleChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void qpdfview::DocumentView::trimMarginsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void qpdfview::DocumentView::compositionModeChanged(CompositionMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void qpdfview::DocumentView::highlightAllChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void qpdfview::DocumentView::rubberBandModeChanged(RubberBandMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void qpdfview::DocumentView::searchFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void qpdfview::DocumentView::searchProgressChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
