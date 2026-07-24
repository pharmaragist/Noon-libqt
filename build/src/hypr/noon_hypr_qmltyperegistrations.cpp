/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#if __has_include(<HyprBridge.hpp>)
#  include <HyprBridge.hpp>
#endif
#if __has_include(<HyprParser.hpp>)
#  include <HyprParser.hpp>
#endif
#if __has_include(<ScreenTimeManager.hpp>)
#  include <ScreenTimeManager.hpp>
#endif


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_Noon_Hypr()
{
    QT_WARNING_PUSH QT_WARNING_DISABLE_DEPRECATED
    qmlRegisterTypesAndRevisions<HyprBridge>("Noon.Hypr", 1);
    qmlRegisterTypesAndRevisions<HyprParser>("Noon.Hypr", 1);
    qmlRegisterTypesAndRevisions<ScreenTimeManager>("Noon.Hypr", 1);
    QT_WARNING_POP
    qmlRegisterModule("Noon.Hypr", 1, 0);
}

static const QQmlModuleRegistration noonHyprRegistration("Noon.Hypr", qml_register_types_Noon_Hypr);
