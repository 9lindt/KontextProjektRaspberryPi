#ifndef GPIOPIN_H
#define GPIOPIN_H

#include <QObject>

class GPIOPin : public QObject
{
    Q_OBJECT


    Q_PROPERTY(bool on READ isOn WRITE setOn NOTIFY onChanged)
    Q_PROPERTY(bool actor READ actor WRITE setActor NOTIFY actorChanged)
    Q_PROPERTY(int pinNumber READ pinNumber NOTIFY pinNumberChanged)

    bool m_on;

    static const QString VALUE_PATH ;
    static const QString DIRECTION_PATH   ;
    static const QString EXPORT_PATH      ;
    static const QString UNEXPORT_PATH    ;

    int m_pinNumber;

public:
    explicit GPIOPin(int pinNumber, bool actor= true, QObject *parent = 0);





    bool isOn() const;

    int pinNumber() const;

    bool actor() const;

signals:

    void onChanged(bool on);

    void pinNumberChanged(int pinNumber);

    void actorChanged(bool actor);

public slots:
    void setOn(bool on);

    void setActor(bool actor);

private:
    void init();
    void exportPin();
    void unexportPin();

    void writeDirection();
    void writeValue();

    bool m_actor;
};

#endif // GPIOPIN_H
