#include <QtQml>
#include <QtQml/QQmlContext>
#include "backend.h"
#include "foodbox.h"
#include "ledlock.h"
#include "backgroundprocess.h"


void BackendPlugin::registerTypes(const char *uri)
{
    Q_ASSERT(uri == QLatin1String("KontextProjektRaspberryPi"));

    qmlRegisterType<FoodBox>(uri, 1, 0, "FoodBox");
    qmlRegisterType<BackgroundProcess>(uri, 1, 0, "BackgroundProcess");

    qRegisterMetaType<BackgroundProcess::ProcessState>("BackgroundProcess::ProcessState");
    qRegisterMetaType<BackgroundProcess::ProcessCondition>("BackgroundProcess::ProcessCondition");


    qmlRegisterType<LEDLock>(uri, 1, 0, "LEDLock");
    qmlRegisterType<GPIOButton>(uri, 1, 0, "GPIOButton");
    qmlRegisterType<GPIORotaryEncoder>(uri, 1, 0, "GPIORotaryEncoder");




//    typedef QList<BackgroundProcess*>  ProcessList;

//    qmlRegisterType<ProcessList>(uri, 1, 0, "ProcessList");
}

void BackendPlugin::initializeEngine(QQmlEngine *engine, const char *uri)
{
    QQmlExtensionPlugin::initializeEngine(engine, uri);
}

