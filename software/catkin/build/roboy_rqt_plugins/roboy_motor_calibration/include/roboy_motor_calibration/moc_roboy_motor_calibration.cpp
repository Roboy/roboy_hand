/****************************************************************************
** Meta object code from reading C++ file 'roboy_motor_calibration.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/roboy_rqt_plugins/roboy_motor_calibration/include/roboy_motor_calibration/roboy_motor_calibration.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'roboy_motor_calibration.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RoboyMotorCalibration_t {
    QByteArrayData data[11];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RoboyMotorCalibration_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RoboyMotorCalibration_t qt_meta_stringdata_RoboyMotorCalibration = {
    {
QT_MOC_LITERAL(0, 0, 21), // "RoboyMotorCalibration"
QT_MOC_LITERAL(1, 22, 7), // "newData"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 20), // "stopButtonAllClicked"
QT_MOC_LITERAL(4, 52, 16), // "MotorCalibration"
QT_MOC_LITERAL(5, 69, 8), // "plotData"
QT_MOC_LITERAL(6, 78, 10), // "loadConfig"
QT_MOC_LITERAL(7, 89, 8), // "fitCurve"
QT_MOC_LITERAL(8, 98, 19), // "zeroTestrigPosition"
QT_MOC_LITERAL(9, 118, 14), // "winchAngleZero"
QT_MOC_LITERAL(10, 133, 14) // "motorAngleZero"

    },
    "RoboyMotorCalibration\0newData\0\0"
    "stopButtonAllClicked\0MotorCalibration\0"
    "plotData\0loadConfig\0fitCurve\0"
    "zeroTestrigPosition\0winchAngleZero\0"
    "motorAngleZero"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RoboyMotorCalibration[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RoboyMotorCalibration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RoboyMotorCalibration *_t = static_cast<RoboyMotorCalibration *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newData(); break;
        case 1: _t->stopButtonAllClicked(); break;
        case 2: _t->MotorCalibration(); break;
        case 3: _t->plotData(); break;
        case 4: _t->loadConfig(); break;
        case 5: _t->fitCurve(); break;
        case 6: _t->zeroTestrigPosition(); break;
        case 7: _t->winchAngleZero(); break;
        case 8: _t->motorAngleZero(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (RoboyMotorCalibration::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RoboyMotorCalibration::newData)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject RoboyMotorCalibration::staticMetaObject = {
    { &rqt_gui_cpp::Plugin::staticMetaObject, qt_meta_stringdata_RoboyMotorCalibration.data,
      qt_meta_data_RoboyMotorCalibration,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RoboyMotorCalibration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RoboyMotorCalibration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RoboyMotorCalibration.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "MotorConfig"))
        return static_cast< MotorConfig*>(this);
    return rqt_gui_cpp::Plugin::qt_metacast(_clname);
}

int RoboyMotorCalibration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rqt_gui_cpp::Plugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void RoboyMotorCalibration::newData()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
