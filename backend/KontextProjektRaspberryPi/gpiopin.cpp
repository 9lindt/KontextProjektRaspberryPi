#include "gpiopin.h"
#include <QFile>
#include <QDebug>


const QString GPIOPin::VALUE_PATH = QString("/sys/class/gpio/gpio%d/value");
const QString GPIOPin::DIRECTION_PATH = QString("/sys/class/gpio/gpio%d/direction");
const QString GPIOPin::EXPORT_PATH = QString("/sys/class/gpio/export");
const QString GPIOPin::UNEXPORT_PATH = QString("/sys/class/gpio/unexport");



GPIOPin::GPIOPin(int pinNumber, bool actor, QObject *parent)
    :   QObject(parent)
    ,   m_on(false)
    ,   m_pinNumber(pinNumber)
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
    emit onChanged(on);
}

void GPIOPin::setActor(bool actor)
{
    if (m_actor == actor)
        return;

    m_actor = actor;
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
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)){

        qDebug() << "can't open file for GPIO pin direction. might not have permission";
    } else {
        QTextStream out(&file);
        out << pinNumber();
    }
    file.close();
}

void GPIOPin::writeValue()
{
    QFile file(QString(VALUE_PATH).arg(pinNumber()));
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)){

        qDebug() << "can't open file for GPIO pin value. might not have permission";
    } else {
        QTextStream out(&file);
        isOn()? out <<"1": out << "0";
    }
    file.close();
}

