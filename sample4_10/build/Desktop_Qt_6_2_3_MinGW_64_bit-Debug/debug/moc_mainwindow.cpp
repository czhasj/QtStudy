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
    const uint offsetsAndSize[28];
    char stringdata0[237];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 24), // "on_actFile_New_triggered"
QT_MOC_LITERAL(36, 0), // ""
QT_MOC_LITERAL(37, 25), // "on_textEdit_copyAvailable"
QT_MOC_LITERAL(63, 1), // "b"
QT_MOC_LITERAL(65, 28), // "on_textEdit_selectionChanged"
QT_MOC_LITERAL(94, 25), // "on_actFont_Bold_triggered"
QT_MOC_LITERAL(120, 7), // "checked"
QT_MOC_LITERAL(128, 27), // "on_actFont_ltalic_triggered"
QT_MOC_LITERAL(156, 30), // "on_actFont_UnderLine_triggered"
QT_MOC_LITERAL(187, 19), // "on_fontSize_changed"
QT_MOC_LITERAL(207, 8), // "fontSize"
QT_MOC_LITERAL(216, 15), // "on_font_changed"
QT_MOC_LITERAL(232, 4) // "font"

    },
    "MainWindow\0on_actFile_New_triggered\0"
    "\0on_textEdit_copyAvailable\0b\0"
    "on_textEdit_selectionChanged\0"
    "on_actFont_Bold_triggered\0checked\0"
    "on_actFont_ltalic_triggered\0"
    "on_actFont_UnderLine_triggered\0"
    "on_fontSize_changed\0fontSize\0"
    "on_font_changed\0font"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    1,   63,    2, 0x08,    2 /* Private */,
       5,    0,   66,    2, 0x08,    4 /* Private */,
       6,    1,   67,    2, 0x08,    5 /* Private */,
       8,    1,   70,    2, 0x08,    7 /* Private */,
       9,    1,   73,    2, 0x08,    9 /* Private */,
      10,    1,   76,    2, 0x08,   11 /* Private */,
      12,    1,   79,    2, 0x08,   13 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::QFont,   13,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_actFile_New_triggered(); break;
        case 1: _t->on_textEdit_copyAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_textEdit_selectionChanged(); break;
        case 3: _t->on_actFont_Bold_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_actFont_ltalic_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_actFont_UnderLine_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_fontSize_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_font_changed((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
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
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QFont &, std::false_type>


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
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
