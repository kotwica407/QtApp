/****************************************************************************
** Meta object code from reading C++ file 'kalendarz.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../kalendarz.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kalendarz.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_kalendarz_t {
    QByteArrayData data[9];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_kalendarz_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_kalendarz_t qt_meta_stringdata_kalendarz = {
    {
QT_MOC_LITERAL(0, 0, 9), // "kalendarz"
QT_MOC_LITERAL(1, 10, 3), // "foo"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 4), // "foo2"
QT_MOC_LITERAL(4, 20, 4), // "foo3"
QT_MOC_LITERAL(5, 25, 4), // "foo4"
QT_MOC_LITERAL(6, 30, 4), // "foo5"
QT_MOC_LITERAL(7, 35, 4), // "foo6"
QT_MOC_LITERAL(8, 40, 4) // "foo7"

    },
    "kalendarz\0foo\0\0foo2\0foo3\0foo4\0foo5\0"
    "foo6\0foo7"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_kalendarz[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void kalendarz::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        kalendarz *_t = static_cast<kalendarz *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->foo(); break;
        case 1: _t->foo2(); break;
        case 2: _t->foo3(); break;
        case 3: _t->foo4(); break;
        case 4: _t->foo5(); break;
        case 5: _t->foo6(); break;
        case 6: _t->foo7(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject kalendarz::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_kalendarz.data,
      qt_meta_data_kalendarz,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *kalendarz::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *kalendarz::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_kalendarz.stringdata0))
        return static_cast<void*>(const_cast< kalendarz*>(this));
    return QDialog::qt_metacast(_clname);
}

int kalendarz::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
