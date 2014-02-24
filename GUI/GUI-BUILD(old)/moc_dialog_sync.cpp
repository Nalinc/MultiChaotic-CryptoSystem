/****************************************************************************
** Meta object code from reading C++ file 'dialog_sync.h'
**
** Created: Mon Dec 9 19:21:37 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../GUI/dialog_sync.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog_sync.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dialog_sync[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      38,   12,   12,   12, 0x08,
      62,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dialog_sync[] = {
    "Dialog_sync\0\0on_btn_rossler_clicked()\0"
    "on_btn_arnold_clicked()\0on_btn_clear_clicked()\0"
};

void Dialog_sync::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Dialog_sync *_t = static_cast<Dialog_sync *>(_o);
        switch (_id) {
        case 0: _t->on_btn_rossler_clicked(); break;
        case 1: _t->on_btn_arnold_clicked(); break;
        case 2: _t->on_btn_clear_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Dialog_sync::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dialog_sync::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog_sync,
      qt_meta_data_Dialog_sync, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dialog_sync::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dialog_sync::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dialog_sync::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog_sync))
        return static_cast<void*>(const_cast< Dialog_sync*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog_sync::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
