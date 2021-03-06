#include "ledlock.h"
#include <QDebug>

LEDLock::LEDLock(QObject *parent)
    :   QObject(parent)
    ,   m_redPin(21)
    ,   m_greenPin(26)
{
    setLocked(true);
}

bool LEDLock::isLocked() const
{
    return m_locked;
}

void LEDLock::setLocked(bool locked)
{
    if (m_locked == locked)
        return;
    m_locked = locked;
    updateLEDs();
    emit lockedChanged(locked);
}

void LEDLock::updateLEDs(){
    m_redPin.setOn(m_locked);
    m_greenPin.setOn(!m_locked);

}
