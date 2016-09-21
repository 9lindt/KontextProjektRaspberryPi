#ifndef GPIOBUTTON_H
#define GPIOBUTTON_H

#include <QObject>
#include <gpiopin.h>

class GPIOButton : public QObject
{
    Q_OBJECT

    Q_PROPERTY(bool pressed READ pressed NOTIFY pressedChanged)


public:
    ///
    /// \brief GPIOButton allows to use a button connected to the given gpio pin
    ///
    ///     !!!PIN NUMBERS ARE MANDATORY!!!
    ///
    /// the default value is just a quick fix to make it work with qml
    ///
    /// \param pinNumber
    /// \param parent
    ///
    explicit GPIOButton(int pinNumber = -1, int powerPin = -1, QObject *parent = 0);

    bool pressed() const;

signals:

    void pressedChanged(bool pressed);
    void click();

private slots:


void setPressed(bool pressed);

private:
    GPIOPin m_pin;
    GPIOPin m_powerPin;

    bool m_pressed;
};

#endif // GPIOBUTTON_H
