/****************************************************************************
** Meta object code from reading C++ file 'clipboard.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/services/clipboard.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clipboard.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN16ClipboardServiceE_t {};
} // unnamed namespace

template <> constexpr inline auto ClipboardService::qt_create_metaobjectdata<qt_meta_tag_ZN16ClipboardServiceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ClipboardService",
        "QML.Element",
        "auto",
        "QML.Singleton",
        "true",
        "entriesChanged",
        "",
        "entriesRefreshed",
        "maxEntriesChanged",
        "onClipboardChanged",
        "performScheduledReload",
        "init",
        "copyByIndex",
        "index",
        "copy",
        "text",
        "deleteEntry",
        "wipe",
        "isImage",
        "getImagePath",
        "entries",
        "maxEntries"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'entriesChanged'
        QtMocHelpers::SignalData<void()>(5, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'entriesRefreshed'
        QtMocHelpers::SignalData<void()>(7, 6, QMC::AccessPublic, QMetaType::Void),
        // Signal 'maxEntriesChanged'
        QtMocHelpers::SignalData<void()>(8, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onClipboardChanged'
        QtMocHelpers::SlotData<void()>(9, 6, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'performScheduledReload'
        QtMocHelpers::SlotData<void()>(10, 6, QMC::AccessPrivate, QMetaType::Void),
        // Method 'init'
        QtMocHelpers::MethodData<void()>(11, 6, QMC::AccessPublic, QMetaType::Void),
        // Method 'copyByIndex'
        QtMocHelpers::MethodData<void(int)>(12, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 13 },
        }}),
        // Method 'copy'
        QtMocHelpers::MethodData<void(const QString &)>(14, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 15 },
        }}),
        // Method 'deleteEntry'
        QtMocHelpers::MethodData<void(int)>(16, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 13 },
        }}),
        // Method 'wipe'
        QtMocHelpers::MethodData<void()>(17, 6, QMC::AccessPublic, QMetaType::Void),
        // Method 'isImage'
        QtMocHelpers::MethodData<bool(int) const>(18, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 13 },
        }}),
        // Method 'getImagePath'
        QtMocHelpers::MethodData<QString(int) const>(19, 6, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::Int, 13 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'entries'
        QtMocHelpers::PropertyData<QStringList>(20, QMetaType::QStringList, QMC::DefaultPropertyFlags, 0),
        // property 'maxEntries'
        QtMocHelpers::PropertyData<int>(21, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
    });
    return QtMocHelpers::metaObjectData<ClipboardService, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject ClipboardService::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16ClipboardServiceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16ClipboardServiceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16ClipboardServiceE_t>.metaTypes,
    nullptr
} };

void ClipboardService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ClipboardService *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->entriesChanged(); break;
        case 1: _t->entriesRefreshed(); break;
        case 2: _t->maxEntriesChanged(); break;
        case 3: _t->onClipboardChanged(); break;
        case 4: _t->performScheduledReload(); break;
        case 5: _t->init(); break;
        case 6: _t->copyByIndex((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->copy((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->deleteEntry((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->wipe(); break;
        case 10: { bool _r = _t->isImage((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { QString _r = _t->getImagePath((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ClipboardService::*)()>(_a, &ClipboardService::entriesChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ClipboardService::*)()>(_a, &ClipboardService::entriesRefreshed, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ClipboardService::*)()>(_a, &ClipboardService::maxEntriesChanged, 2))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QStringList*>(_v) = _t->entries(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->maxEntries(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setMaxEntries(*reinterpret_cast<int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *ClipboardService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClipboardService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16ClipboardServiceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ClipboardService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ClipboardService::entriesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ClipboardService::entriesRefreshed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ClipboardService::maxEntriesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
