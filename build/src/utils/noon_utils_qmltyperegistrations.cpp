/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#if __has_include(<CavaWatcher.hpp>)
#  include <CavaWatcher.hpp>
#endif
#if __has_include(<EnvManager.hpp>)
#  include <EnvManager.hpp>
#endif
#if __has_include(<FileSystemWatcher.hpp>)
#  include <FileSystemWatcher.hpp>
#endif
#if __has_include(<MpvPlayer.hpp>)
#  include <MpvPlayer.hpp>
#endif
#if __has_include(<QMLCrawler.hpp>)
#  include <QMLCrawler.hpp>
#endif
#if __has_include(<QrCode.hpp>)
#  include <QrCode.hpp>
#endif
#if __has_include(<ResourcesWatcher.hpp>)
#  include <ResourcesWatcher.hpp>
#endif
#if __has_include(<SQLReader.hpp>)
#  include <SQLReader.hpp>
#endif
#if __has_include(<TaskManager.hpp>)
#  include <TaskManager.hpp>
#endif
#if __has_include(<TomlParser.hpp>)
#  include <TomlParser.hpp>
#endif


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_Noon_Utils()
{
    QT_WARNING_PUSH QT_WARNING_DISABLE_DEPRECATED
    qmlRegisterTypesAndRevisions<CavaWatcher>("Noon.Utils", 1);
    qmlRegisterTypesAndRevisions<EnvManager>("Noon.Utils", 1);
    qmlRegisterTypesAndRevisions<FileSystemWatcher>("Noon.Utils", 1);
    qmlRegisterTypesAndRevisions<MpvPlayer>("Noon.Utils", 1);
    qmlRegisterTypesAndRevisions<QmlCrawler>("Noon.Utils", 1);
    qmlRegisterTypesAndRevisions<QrCode>("Noon.Utils", 1);
    qmlRegisterAnonymousType<QQuickItem, 254>("Noon.Utils", 1);
    qmlRegisterTypesAndRevisions<ResourcesWatcher>("Noon.Utils", 1);
    qmlRegisterTypesAndRevisions<SQLReader>("Noon.Utils", 1);
    qmlRegisterTypesAndRevisions<TaskManager>("Noon.Utils", 1);
    qmlRegisterTypesAndRevisions<TomlParser>("Noon.Utils", 1);
    QT_WARNING_POP
    qmlRegisterModule("Noon.Utils", 1, 0);
}

static const QQmlModuleRegistration noonUtilsRegistration("Noon.Utils", qml_register_types_Noon_Utils);
