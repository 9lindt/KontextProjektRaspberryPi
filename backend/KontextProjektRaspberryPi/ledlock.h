#ifndef LEDLOCK_H
#define LEDLOCK_H

#include <QObject>
#include <gpiopin.h>

class LEDLock : public QObject
{
    Q_OBJECT

    Q_PROPERTY(bool locked READ isLocked WRITE setLocked NOTIFY lockedChanged)

    bool m_locked;

    GPIOPin m_redPin;
    GPIOPin m_greenPin;



public:
    explicit LEDLock(QObject *parent = 0);

    bool isLocked() const;

signals:

    void lockedChanged(bool locked);

public slots:
    void setLocked(bool locked);

private:
    void updateLEDs();

};

#endif // LEDLOCK_H
