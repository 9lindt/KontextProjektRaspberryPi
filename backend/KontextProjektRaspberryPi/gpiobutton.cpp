#include "gpiobutton.h"

GPIOButton::GPIOButton(int pinNumber, int powerPin, QObject *parent)
    : QObject(parent)
    , m_pin(pinNumber, false)
    , m_powerPin(powerPin)
{
    m_powerPin.setOn(true);


    connect(&m_pin, &GPIOPin::onChanged, this ,&GPIOButton::setPressed);
}

bool GPIOButton::pressed() const
{
    return m_pressed;
}


//the pin gets the value 0 when pressed, 1 otherwise, so we need to invert the value
void GPIOButton::setPressed(bool pressed)
{
    if (m_pressed != pressed)
        return;

    m_pressed = !pressed;
    emit pressedChanged(m_pressed);

    //we emit click on button release
    if(!m_pressed){
        emit click();
    }
}
