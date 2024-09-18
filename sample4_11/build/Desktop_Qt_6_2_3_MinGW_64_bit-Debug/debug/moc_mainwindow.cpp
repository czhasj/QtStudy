/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[40];
    char stringdata0[400];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 23), // "on_actListIni_triggered"
QT_MOC_LITERAL(35, 0), // ""
QT_MOC_LITERAL(36, 25), // "on_actListClear_triggered"
QT_MOC_LITERAL(62, 26), // "on_actLIstInsert_triggered"
QT_MOC_LITERAL(89, 26), // "on_actListAppend_triggered"
QT_MOC_LITERAL(116, 26), // "on_actListDelete_triggered"
QT_MOC_LITERAL(143, 22), // "on_actSelALL_triggered"
QT_MOC_LITERAL(166, 23), // "on_actSelNone_triggered"
QT_MOC_LITERAL(190, 23), // "on_actSelInvs_triggered"
QT_MOC_LITERAL(214, 32), // "on_listWidget_currentItemChanged"
QT_MOC_LITERAL(247, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(264, 7), // "current"
QT_MOC_LITERAL(272, 8), // "previous"
QT_MOC_LITERAL(281, 19), // "on_checkBox_clicked"
QT_MOC_LITERAL(301, 7), // "checked"
QT_MOC_LITERAL(309, 22), // "on_tBtnSortAsc_clicked"
QT_MOC_LITERAL(332, 22), // "on_tBtnSortDes_clicked"
QT_MOC_LITERAL(355, 40), // "on_listWidget_customContextMe..."
QT_MOC_LITERAL(396, 3) // "pos"

    },
    "MainWindow\0on_actListIni_triggered\0\0"
    "on_actListClear_triggered\0"
    "on_actLIstInsert_triggered\0"
    "on_actListAppend_triggered\0"
    "on_actListDelete_triggered\0"
    "on_actSelALL_triggered\0on_actSelNone_triggered\0"
    "on_actSelInvs_triggered\0"
    "on_listWidget_currentItemChanged\0"
    "QListWidgetItem*\0current\0previous\0"
    "on_checkBox_clicked\0checked\0"
    "on_tBtnSortAsc_clicked\0on_tBtnSortDes_clicked\0"
    "on_listWidget_customContextMenuRequested\0"
    "pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x08,    1 /* Private */,
       3,    0,   93,    2, 0x08,    2 /* Private */,
       4,    0,   94,    2, 0x08,    3 /* Private */,
       5,    0,   95,    2, 0x08,    4 /* Private */,
       6,    0,   96,    2, 0x08,    5 /* Private */,
       7,    0,   97,    2, 0x08,    6 /* Private */,
       8,    0,   98,    2, 0x08,    7 /* Private */,
       9,    0,   99,    2, 0x08,    8 /* Private */,
      10,    2,  100,    2, 0x08,    9 /* Private */,
      14,    1,  105,    2, 0x08,   12 /* Private */,
      16,    0,  108,    2, 0x08,   14 /* Private */,
      17,    0,  109,    2, 0x08,   15 /* Private */,
      18,    1,  110,    2, 0x08,   16 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11,   12,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   19,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_actListIni_triggered(); break;
        case 1: _t->on_actListClear_triggered(); break;
        case 2: _t->on_actLIstInsert_triggered(); break;
        case 3: _t->on_actListAppend_triggered(); break;
        case 4: _t->on_actListDelete_triggered(); break;
        case 5: _t->on_actSelALL_triggered(); break;
        case 6: _t->on_actSelNone_triggered(); break;
        case 7: _t->on_actSelInvs_triggered(); break;
        case 8: _t->on_listWidget_currentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 9: _t->on_checkBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_tBtnSortAsc_clicked(); break;
        case 11: _t->on_tBtnSortDes_clicked(); break;
        case 12: _t->on_listWidget_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
