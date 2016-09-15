#include <QtQml>
#include <QtQml/QQmlContext>
#include "backend.h"
#include "foodbox.h"
#include "backgroundprocess.h"


void BackendPlugin::registerTypes(const char *uri)
{
    Q_ASSERT(uri == QLatin1String("KontextProjektRaspberryPi"));

    qmlRegisterType<FoodBox>(uri, 1, 0, "FoodBox");
    qmlRegisterType<BackgroundProcess>(uri, 1, 0, "BackgroundProcess");


    qRegisterMetaType<BackgroundProcess::ProcessState>("BackgroundProcess::ProcessState");
    qRegisterMetaType<BackgroundProcess::ProcessCondition>("BackgroundProcess::ProcessCondition");

//    typedef QList<BackgroundProcess*>  ProcessList;

//    qmlRegisterType<ProcessList>(uri, 1, 0, "ProcessList");
}

void BackendPlugin::initializeEngine(QQmlEngine *engine, const char *uri)
{
    QQmlExtensionPlugin::initializeEngine(engine, uri);
}

