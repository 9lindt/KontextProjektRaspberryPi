#include "ledlock.h"
#include <QDebug>

LEDLock::LEDLock(QObject *parent)
    :   QObject(parent)
    ,   m_redPin(21)
    ,   m_greenPin(26)
{

}

bool LEDLock::isLocked() const
{
    return m_locked;
    qDebug() << "lock checked";
}

void LEDLock::setLocked(bool locked)
{
    qDebug() << "lock works";
    if (m_locked == locked)
        return;
    qDebug() << "lock works changes";
    m_locked = locked;
    updateLEDs();
    emit lockedChanged(locked);
}

void LEDLock::updateLEDs(){
qDebug() << "updating leds";
    m_redPin.setOn(m_locked);
    m_greenPin.setOn(!m_locked);

}
