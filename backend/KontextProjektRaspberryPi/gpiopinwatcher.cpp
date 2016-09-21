#include "gpiopinwatcher.h"
#include <QFile>
#include <QDebug>

GPIOPinWatcher::GPIOPinWatcher(QObject *parent)
    : BackgroundProcess(parent)
    , m_on(false)
{

}

void GPIOPinWatcher::run()
{
    while(true){
        QFile file("/sys/class/gpio/gpio16/value");
        file.open(QIODevice::ReadOnly | QIODevice::Text);
        QByteArray newValue =  file.readAll();
        if(newValue != m_oldValue){
            setOn(!isOn());
            m_oldValue = newValue;
        }
        file.close();
    }
}

bool GPIOPinWatcher::isOn() const
{
    return m_on;
}

void GPIOPinWatcher::setOn(bool on)
{
    if (m_on == on)
        return;
    qDebug() << "pressed";
    m_on = on;
    emit onChanged(on);
}
