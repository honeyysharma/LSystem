/****************************************************************************
** Meta object code from reading C++ file 'GLWindow.h'
**
** Created: Tue Dec 11 01:56:31 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../include/GLWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GLWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GLWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   10,    9,    9, 0x0a,
      41,   10,    9,    9, 0x0a,
      75,   62,    9,    9, 0x0a,
     107,   95,    9,    9, 0x0a,
     132,  129,    9,    9, 0x0a,
     156,  153,    9,    9, 0x0a,
     180,  177,    9,    9, 0x0a,
     201,    9,    9,    9, 0x0a,
     291,  213,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GLWindow[] = {
    "GLWindow\0\0_angle\0setHeadingAngle(double)\0"
    "setTurnAngle(double)\0_generations\0"
    "setGenerations(int)\0_stepLength\0"
    "setStepLength(double)\0_x\0setXPosition(double)\0"
    "_y\0setYPosition(double)\0_z\0"
    "setZPosition(double)\0setColour()\0"
    "_filename,_headingAngle,_turnAngle,_stepLength,_generations,_position,"
    "_colour\0"
    "generateLSystem(QString,double,double,double,int,ngl::Vec3,ngl::Vec3)\0"
};

void GLWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GLWindow *_t = static_cast<GLWindow *>(_o);
        switch (_id) {
        case 0: _t->setHeadingAngle((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setTurnAngle((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->setGenerations((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setStepLength((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setXPosition((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setYPosition((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setZPosition((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->setColour(); break;
        case 8: _t->generateLSystem((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< ngl::Vec3(*)>(_a[6])),(*reinterpret_cast< ngl::Vec3(*)>(_a[7]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GLWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GLWindow::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_GLWindow,
      qt_meta_data_GLWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GLWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GLWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GLWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GLWindow))
        return static_cast<void*>(const_cast< GLWindow*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int GLWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
