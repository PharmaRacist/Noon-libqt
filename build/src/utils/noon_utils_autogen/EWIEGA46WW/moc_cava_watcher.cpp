/****************************************************************************
** Meta object code from reading C++ file 'cava_watcher.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/utils/cava_watcher.hpp"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cava_watcher.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN11CavaWatcherE_t {};
} // unnamed namespace

template <> constexpr inline auto CavaWatcher::qt_create_metaobjectdata<qt_meta_tag_ZN11CavaWatcherE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "CavaWatcher",
        "QML.Element",
        "auto",
        "dataChanged",
        "",
        "smoothingChanged",
        "activeChanged",
        "configPathChanged",
        "onReadyRead",
        "onProcessError",
        "QProcess::ProcessError",
        "error",
        "onProcessFinished",
        "exitCode",
        "QProcess::ExitStatus",
        "exitStatus",
        "data",
        "QList<double>",
        "smoothing",
        "active",
        "barCount",
        "configPath"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'dataChanged'
        QtMocHelpers::SignalData<void()>(3, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'smoothingChanged'
        QtMocHelpers::SignalData<void()>(5, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'activeChanged'
        QtMocHelpers::SignalData<void()>(6, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'configPathChanged'
        QtMocHelpers::SignalData<void()>(7, 4, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onReadyRead'
        QtMocHelpers::SlotData<void()>(8, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onProcessError'
        QtMocHelpers::SlotData<void(QProcess::ProcessError)>(9, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 10, 11 },
        }}),
        // Slot 'onProcessFinished'
        QtMocHelpers::SlotData<void(int, QProcess::ExitStatus)>(12, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 13 }, { 0x80000000 | 14, 15 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'data'
        QtMocHelpers::PropertyData<QList<double>>(16, 0x80000000 | 17, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 0),
        // property 'smoothing'
        QtMocHelpers::PropertyData<int>(18, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 1),
        // property 'active'
        QtMocHelpers::PropertyData<bool>(19, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'barCount'
        QtMocHelpers::PropertyData<int>(20, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'configPath'
        QtMocHelpers::PropertyData<QString>(21, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<CavaWatcher, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject CavaWatcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11CavaWatcherE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11CavaWatcherE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11CavaWatcherE_t>.metaTypes,
    nullptr
} };

void CavaWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CavaWatcher *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->dataChanged(); break;
        case 1: _t->smoothingChanged(); break;
        case 2: _t->activeChanged(); break;
        case 3: _t->configPathChanged(); break;
        case 4: _t->onReadyRead(); break;
        case 5: _t->onProcessError((*reinterpret_cast<std::add_pointer_t<QProcess::ProcessError>>(_a[1]))); break;
        case 6: _t->onProcessFinished((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QProcess::ExitStatus>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CavaWatcher::*)()>(_a, &CavaWatcher::dataChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (CavaWatcher::*)()>(_a, &CavaWatcher::smoothingChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (CavaWatcher::*)()>(_a, &CavaWatcher::activeChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (CavaWatcher::*)()>(_a, &CavaWatcher::configPathChanged, 3))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<double> >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QList<double>*>(_v) = _t->data(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->smoothing(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->active(); break;
        case 3: *reinterpret_cast<int*>(_v) = _t->barCount(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->configPath(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setSmoothing(*reinterpret_cast<int*>(_v)); break;
        case 2: _t->setActive(*reinterpret_cast<bool*>(_v)); break;
        case 4: _t->setConfigPath(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *CavaWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CavaWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11CavaWatcherE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CavaWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void CavaWatcher::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CavaWatcher::smoothingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CavaWatcher::activeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void CavaWatcher::configPathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
