/****************************************************************************
** Meta object code from reading C++ file 'statuswidget.h'
**
** Created: Fri Feb 3 20:51:06 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Src/Ui/StatusWidget/statuswidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statuswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StatusWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      36,   13,   13,   13, 0x05,
      53,   13,   13,   13, 0x05,
      81,   13,   13,   13, 0x05,
      99,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     117,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_StatusWidget[] = {
    "StatusWidget\0\0signalOpenVideoFile()\0"
    "signalPreVideo()\0signalPlayOrStopVideo(bool)\0"
    "signalNextVideo()\0signalStopVideo()\0"
    "slotPlayOrPose()\0"
};

void StatusWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StatusWidget *_t = static_cast<StatusWidget *>(_o);
        switch (_id) {
        case 0: _t->signalOpenVideoFile(); break;
        case 1: _t->signalPreVideo(); break;
        case 2: _t->signalPlayOrStopVideo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->signalNextVideo(); break;
        case 4: _t->signalStopVideo(); break;
        case 5: _t->slotPlayOrPose(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StatusWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StatusWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_StatusWidget,
      qt_meta_data_StatusWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StatusWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StatusWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StatusWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StatusWidget))
        return static_cast<void*>(const_cast< StatusWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int StatusWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void StatusWidget::signalOpenVideoFile()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void StatusWidget::signalPreVideo()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void StatusWidget::signalPlayOrStopVideo(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void StatusWidget::signalNextVideo()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void StatusWidget::signalStopVideo()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
