#ifndef GPIOROTARYENCODER_H
#define GPIOROTARYENCODER_H

#include <gpiobutton.h>

class GPIORotaryEncoder : public GPIOButton
{
    Q_OBJECT




public:

    ///
    /// \brief GPIORotaryEncoder creates a GPIO Rotary encoder reakting to the pins set.
    ///
    ///  !!!ALL PINS ARE MANDATORY!!!
    /// the default parameters are just the easiest way to make this think work with qml
    ///
    /// \param rotationPin1
    /// \param rotationPin2
    /// \param buttonPin
    /// \param powerPin
    /// \param parent
    ///
    explicit GPIORotaryEncoder(int rotationPin1 = -1, int rotationPin2 = -1, int buttonPin = -1, int powerPin = -1, QObject *parent = 0);

signals:

    void rotationLeft();
    void rotationRight();
    //void click();


public slots:

private slots:

    void pinChanged();



private:

    void logState();

    GPIOPin m_rotationPin;
    GPIOPin m_directionPin;
    int m_oldValue;

};

#endif // GPIOROTARYENCODER_H
