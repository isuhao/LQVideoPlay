/****************************************************************************
** Meta object code from reading C++ file 'contentwidget.h'
**
** Created: Fri Feb 3 20:51:08 2017
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Src/Ui/ContentWidget/contentwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'contentwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ContentWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      37,   14,   14,   14, 0x05,
      75,   57,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     117,  111,   14,   14, 0x08,
     140,   14,   14,   14, 0x08,
     160,   14,   14,   14, 0x08,
     185,   14,   14,   14, 0x08,
     206,   14,   14,   14, 0x08,
     221,   14,   14,   14, 0x08,
     245,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ContentWidget[] = {
    "ContentWidget\0\0signalShowFullScree()\0"
    "signalPlayOrPause()\0curTime,totalTime\0"
    "signalSendPlayTime(quint64,quint64)\0"
    "video\0slotPlayVideo(QString)\0"
    "slotGeVideoLenght()\0slotSetPlayProgress(int)\0"
    "slotUpdatePlayTime()\0slotBackward()\0"
    "slotSetPlayOrPose(bool)\0slotForward()\0"
};

void ContentWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ContentWidget *_t = static_cast<ContentWidget *>(_o);
        switch (_id) {
        case 0: _t->signalShowFullScree(); break;
        case 1: _t->signalPlayOrPause(); break;
        case 2: _t->signalSendPlayTime((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 3: _t->slotPlayVideo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->slotGeVideoLenght(); break;
        case 5: _t->slotSetPlayProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slotUpdatePlayTime(); break;
        case 7: _t->slotBackward(); break;
        case 8: _t->slotSetPlayOrPose((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->slotForward(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ContentWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ContentWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ContentWidget,
      qt_meta_data_ContentWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ContentWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ContentWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ContentWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ContentWidget))
        return static_cast<void*>(const_cast< ContentWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ContentWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void ContentWidget::signalShowFullScree()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void ContentWidget::signalPlayOrPause()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void ContentWidget::signalSendPlayTime(quint64 _t1, quint64 _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
