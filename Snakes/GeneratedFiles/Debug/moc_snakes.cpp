/****************************************************************************
** Meta object code from reading C++ file 'snakes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../snakes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'snakes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Snakes_t {
    QByteArrayData data[10];
    char stringdata[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Snakes_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Snakes_t qt_meta_stringdata_Snakes = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 21),
QT_MOC_LITERAL(2, 29, 0),
QT_MOC_LITERAL(3, 30, 21),
QT_MOC_LITERAL(4, 52, 23),
QT_MOC_LITERAL(5, 76, 27),
QT_MOC_LITERAL(6, 104, 31),
QT_MOC_LITERAL(7, 136, 16),
QT_MOC_LITERAL(8, 153, 4),
QT_MOC_LITERAL(9, 158, 37)
    },
    "Snakes\0on_quitButton_clicked\0\0"
    "on_drawButton_clicked\0on_browseButton_clicked\0"
    "on_loadScriptButton_clicked\0"
    "on_scriptListWidget_itemClicked\0"
    "QListWidgetItem*\0item\0"
    "on_scriptListWidget_itemDoubleClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Snakes[] = {

 // content:
       7,       // revision
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
       5,    0,   47,    2, 0x08 /* Private */,
       6,    1,   48,    2, 0x08 /* Private */,
       9,    1,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void Snakes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Snakes *_t = static_cast<Snakes *>(_o);
        switch (_id) {
        case 0: _t->on_quitButton_clicked(); break;
        case 1: _t->on_drawButton_clicked(); break;
        case 2: _t->on_browseButton_clicked(); break;
        case 3: _t->on_loadScriptButton_clicked(); break;
        case 4: _t->on_scriptListWidget_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->on_scriptListWidget_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Snakes::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Snakes.data,
      qt_meta_data_Snakes,  qt_static_metacall, 0, 0}
};


const QMetaObject *Snakes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Snakes::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Snakes.stringdata))
        return static_cast<void*>(const_cast< Snakes*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Snakes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE