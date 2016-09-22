#include "gpiorotaryencoder.h"

#include "qdebug.h"

GPIORotaryEncoder::GPIORotaryEncoder(int rotationPin1, int rotationPin2, int buttonPin, int powerPin, QObject *parent)
    :   GPIOButton(buttonPin, powerPin, parent)
    ,   m_rotationPin(rotationPin1, false)
    ,   m_directionPin(rotationPin2, false)

{

    connect(&m_rotationPin, &GPIOPin::onChanged, this, &GPIORotaryEncoder::pinChanged);
    connect(&m_directionPin, &GPIOPin::onChanged, this, &GPIORotaryEncoder::pinChanged);

}



void GPIORotaryEncoder::pinChanged()
{

    //basicly no idea why this works
    //based on http://guy.carpenter.id.au/gaugette/2013/01/14/rotary-encoder-library-for-the-raspberry-pi/


    int pin1, pin2;
    m_rotationPin.isOn()? pin1 = 1:pin1 = 0;
    m_directionPin.isOn()? pin2 = 1:pin2 = 0;
    int current_sequence = (pin1 ^ pin2) | pin2 << 1;

    int delta = (current_sequence - m_oldValue) % 4;
        m_oldValue = current_sequence;
        static int rotCounter = 0;
    switch (delta) {
    case 1:

        rotCounter = (rotCounter + 1) % 3;
        if(rotCounter == 0){
            emit rotationRight();
            //qDebug() << "right";
        }
        break;
    case 2:
        //qDebug() << "again";
        break;
    case 3:
        //qDebug() << "left";
        emit rotationLeft();
        break;
    default:
        break;
    }



    //logState();
}

void GPIORotaryEncoder::logState()
{

    int pin1, pin2;
    m_rotationPin.isOn()? pin1 = 1:pin1 = 0;
    m_directionPin.isOn()? pin2 = 1:pin2 = 0;

    qDebug() << pin1 << ":" << pin2;
}

