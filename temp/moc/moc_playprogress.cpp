/****************************************************************************
** Meta object code from reading C++ file 'playprogress.h'
**
** Created: Fri Feb 3 20:51:13 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Src/Ui/playprogress.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playprogress.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PlayProgress[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      69,   51,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PlayProgress[] = {
    "PlayProgress\0\0value\0signalProgressValueChange(int)\0"
    "curTime,TotalTime\0"
    "slotUpdatePlayProgress(quint64,quint64)\0"
};

void PlayProgress::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PlayProgress *_t = static_cast<PlayProgress *>(_o);
        switch (_id) {
        case 0: _t->signalProgressValueChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slotUpdatePlayProgress((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PlayProgress::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PlayProgress::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PlayProgress,
      qt_meta_data_PlayProgress, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PlayProgress::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PlayProgress::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PlayProgress::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PlayProgress))
        return static_cast<void*>(const_cast< PlayProgress*>(this));
    return QWidget::qt_metacast(_clname);
}

int PlayProgress::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void PlayProgress::signalProgressValueChange(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
