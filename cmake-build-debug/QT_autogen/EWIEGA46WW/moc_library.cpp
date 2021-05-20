/****************************************************************************
** Meta object code from reading C++ file 'library.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../library.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'library.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_library_t {
    QByteArrayData data[9];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_library_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_library_t qt_meta_stringdata_library = {
    {
QT_MOC_LITERAL(0, 0, 7), // "library"
QT_MOC_LITERAL(1, 8, 20), // "on_btn_login_clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 23), // "on_btn_register_clicked"
QT_MOC_LITERAL(4, 54, 23), // "on_btn_retrieve_clicked"
QT_MOC_LITERAL(5, 78, 21), // "on_comboBox_activated"
QT_MOC_LITERAL(6, 100, 5), // "index"
QT_MOC_LITERAL(7, 106, 29), // "on_line_account_returnPressed"
QT_MOC_LITERAL(8, 136, 30) // "on_line_password_returnPressed"

    },
    "library\0on_btn_login_clicked\0\0"
    "on_btn_register_clicked\0on_btn_retrieve_clicked\0"
    "on_comboBox_activated\0index\0"
    "on_line_account_returnPressed\0"
    "on_line_password_returnPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_library[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    1,   47,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void library::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<library *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btn_login_clicked(); break;
        case 1: _t->on_btn_register_clicked(); break;
        case 2: _t->on_btn_retrieve_clicked(); break;
        case 3: _t->on_comboBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_line_account_returnPressed(); break;
        case 5: _t->on_line_password_returnPressed(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject library::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_library.data,
    qt_meta_data_library,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *library::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *library::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_library.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int library::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
