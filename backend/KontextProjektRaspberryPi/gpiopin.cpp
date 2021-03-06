#include "gpiopin.h"
#include <QFile>
#include <QDebug>


const QString GPIOPin::VALUE_PATH = QString("/sys/class/gpio/gpio%1/value");
const QString GPIOPin::DIRECTION_PATH = QString("/sys/class/gpio/gpio%1/direction");
const QString GPIOPin::EDGE_PATH = QString("/sys/class/gpio/gpio%1/direction");

const QString GPIOPin::EXPORT_PATH = QString("/sys/class/gpio/export");
const QString GPIOPin::UNEXPORT_PATH = QString("/sys/class/gpio/unexport");

static QFileDevice::Permissions PERMIT_EVERYTHING = QFileDevice::ReadOwner |
        QFileDevice::WriteOwner |
        QFileDevice::ExeOwner	|
        QFileDevice::ReadUser	|
        QFileDevice::WriteUser|
        QFileDevice::ExeUser	|
        QFileDevice::ReadGroup|
        QFileDevice::WriteGroup|
        QFileDevice::ExeGroup|
        QFileDevice::ReadOther|
        QFileDevice::WriteOther|
        QFileDevice::ExeOther;



GPIOPin::GPIOPin(int pinNumber, bool actor, QObject *parent)
    :   QObject(parent)
    ,   m_on(false)
    ,   m_pinNumber(pinNumber)
    ,   m_pinWatcher(pinNumber)
    ,   m_actor(actor)
{
    init();

}

bool GPIOPin::isOn() const
{
    return m_on;
}

int GPIOPin::pinNumber() const
{
    return m_pinNumber;
}

bool GPIOPin::actor() const
{
    return m_actor;
}

void GPIOPin::setOn(bool on)
{
    if (m_on == on)
        return;

    m_on = on;
    writeValue();
    //    qDebug() << "pin :" << pinNumber() << " is :" << isOn();
    emit onChanged(on);
}

void GPIOPin::setActor(bool actor)
{
    if (m_actor == actor)
        return;

    m_actor = actor;
    writeDirection();


    emit actorChanged(actor);
}



void GPIOPin::init()
{
    exportPin();
    writeDirection();
    writeValue();

}

void GPIOPin::exportPin()
{
    QFile file(EXPORT_PATH);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)){

        qDebug() << "can't open file for GPIO pin export. might not have permission";
    } else {
        QTextStream out(&file);
        out << pinNumber();
    }
    file.close();
}

void GPIOPin::unexportPin()
{
    QFile file(UNEXPORT_PATH);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)){

        qDebug() << "can't open file for GPIO pin unexport. might not have permission";
    } else {
        QTextStream out(&file);
        out << pinNumber();
    }
    file.close();
}

void GPIOPin::writeDirection()
{
    QFile file(DIRECTION_PATH.arg(pinNumber()));
    file.setPermissions(PERMIT_EVERYTHING);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)){

        qDebug() << "can't open file for GPIO pin direction. might not have permission";
    } else {
        QTextStream out(&file);
        actor()?out << "out":out << "in";
    }
    file.close();
    if(!m_actor){


        writeEdge();
        registerObserver();
    } else {
        deregisterObserver();
    }



    //    qDebug() << QString("direction %1 set for pin %2").arg(actor(), pinNumber());
}

void GPIOPin::writeEdge(){
    QFile file(QString(EDGE_PATH).arg(pinNumber()));
    file.setPermissions(PERMIT_EVERYTHING);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)){

        qDebug() << "can't open file for GPIO pin edge. might not have permission";
    } else {
        QTextStream out(&file);
        out <<"both";
    }
    file.close();
    qDebug() << QString("edge written for pin %1").arg( pinNumber());
}


void GPIOPin::writeValue()
{
    if(actor())
    {
        QFile file(QString(VALUE_PATH).arg(pinNumber()));
        file.setPermissions(PERMIT_EVERYTHING);
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text)){

            qDebug() << "can't open file for GPIO pin value. might not have permission";
        } else {
            QTextStream out(&file);
            isOn()? out <<"1": out << "0";
        }
        file.close();
        //    qDebug() << QString("value %1 written for pin %2").arg(isOn(), pinNumber());
    }
}

void GPIOPin::registerObserver(){

//    //    connect(fileWatcher, &QFileSystemWatcher::fileChanged, this, &GPIOPin::fileChanged);
//    //    fileWatcher->addPath(VALUE_PATH.arg(pinNumber()));

//    observed_file = new QFile(VALUE_PATH.arg(pinNumber()));
//    //observed_file->setPermissions(PERMIT_EVERYTHING);
//    observed_file->open(QIODevice::ReadOnly | QIODevice::Text);


//    socket_notifier_read = new QSocketNotifier(observed_file->handle(), QSocketNotifier::Read);

//    connect(socket_notifier_read, &QSocketNotifier::activated, this, &GPIOPin::readyRead);
//    socket_notifier_read->setEnabled(true);
    connect(&m_pinWatcher, &GPIOPinWatcher::onChanged, this, &GPIOPin::setOn);
    m_pinWatcher.start();


}

void GPIOPin::deregisterObserver(){
    disconnect(&m_pinWatcher, &GPIOPinWatcher::onChanged, this, &GPIOPin::setOn);
    m_pinWatcher.exit(0);
}

