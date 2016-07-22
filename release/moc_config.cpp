/****************************************************************************
** Meta object code from reading C++ file 'config.h'
**
** Created: Mon Jan 5 17:38:01 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../config.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'config.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Label[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x0a,
      19,    6,    6,    6, 0x0a,
      31,    6,    6,    6, 0x0a,
      43,    6,    6,    6, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Label[] = {
    "Label\0\0timefunc1()\0timefunc2()\0"
    "timefunc3()\0timefunc_qd()\0"
};

const QMetaObject Label::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_Label,
      qt_meta_data_Label, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Label::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Label::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Label::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Label))
        return static_cast<void*>(const_cast< Label*>(this));
    return QLabel::qt_metacast(_clname);
}

int Label::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: timefunc1(); break;
        case 1: timefunc2(); break;
        case 2: timefunc3(); break;
        case 3: timefunc_qd(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
