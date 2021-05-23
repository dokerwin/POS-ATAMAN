/****************************************************************************
** Meta object code from reading C++ file 'pos_main_window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../pos_main_window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pos_main_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestModel_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestModel_t qt_meta_stringdata_TestModel = {
    {
QT_MOC_LITERAL(0, 0, 9) // "TestModel"

    },
    "TestModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void TestModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TestModel::staticMetaObject = { {
    &QAbstractTableModel::staticMetaObject,
    qt_meta_stringdata_TestModel.data,
    qt_meta_data_TestModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TestModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int TestModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_POS_MAIN_WINDOW_t {
    QByteArrayData data[7];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_POS_MAIN_WINDOW_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_POS_MAIN_WINDOW_t qt_meta_stringdata_POS_MAIN_WINDOW = {
    {
QT_MOC_LITERAL(0, 0, 15), // "POS_MAIN_WINDOW"
QT_MOC_LITERAL(1, 16, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 22), // "on_topMenu_btn_clicked"
QT_MOC_LITERAL(4, 64, 31), // "on_tableView_readonly_activated"
QT_MOC_LITERAL(5, 96, 11), // "QModelIndex"
QT_MOC_LITERAL(6, 108, 5) // "index"

    },
    "POS_MAIN_WINDOW\0on_pushButton_2_clicked\0"
    "\0on_topMenu_btn_clicked\0"
    "on_tableView_readonly_activated\0"
    "QModelIndex\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_POS_MAIN_WINDOW[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    1,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void POS_MAIN_WINDOW::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<POS_MAIN_WINDOW *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_2_clicked(); break;
        case 1: _t->on_topMenu_btn_clicked(); break;
        case 2: _t->on_tableView_readonly_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject POS_MAIN_WINDOW::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_POS_MAIN_WINDOW.data,
    qt_meta_data_POS_MAIN_WINDOW,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *POS_MAIN_WINDOW::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *POS_MAIN_WINDOW::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_POS_MAIN_WINDOW.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int POS_MAIN_WINDOW::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
