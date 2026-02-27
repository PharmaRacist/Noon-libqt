/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#if __has_include(<clipboard.hpp>)
#  include <clipboard.hpp>
#endif
#if __has_include(<resources.hpp>)
#  include <resources.hpp>
#endif


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_Noon_Services()
{
    QT_WARNING_PUSH QT_WARNING_DISABLE_DEPRECATED
    qmlRegisterTypesAndRevisions<ClipboardService>("Noon.Services", 1);
    qmlRegisterTypesAndRevisions<ResourcesService>("Noon.Services", 1);
    QT_WARNING_POP
    qmlRegisterModule("Noon.Services", 1, 0);
}

static const QQmlModuleRegistration noonServicesRegistration("Noon.Services", qml_register_types_Noon_Services);
