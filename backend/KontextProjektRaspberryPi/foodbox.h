#ifndef MYTYPE_H
#define MYTYPE_H

#include "gpiorotaryencoder.h"

#include <QObject>
#include <backgroundprocess.h>
#include <ledlock.h>
#include<QQmlListProperty>
#include<nfcwatcher.h>
#include <server.h>



class FoodBox : public QObject
{
    Q_OBJECT
    Q_ENUMS(FoodBoxStateEnum)
    Q_PROPERTY( QString helloWorld READ helloWorld WRITE setHelloWorld NOTIFY helloWorldChanged )


    Q_PROPERTY(FoodBoxStateEnum state READ state WRITE setState NOTIFY stateChanged)
    Q_PROPERTY(QQmlListProperty<BackgroundProcess> watchers READ watchers NOTIFY watchersChanged)

    Q_PROPERTY(LEDLock * lock READ lock)

    Q_PROPERTY(GPIORotaryEncoder * radioDial READ radioDial)



    Q_PROPERTY(GPIOButton * lidButton READ lidButton)
    Q_PROPERTY(Server * server READ server)





    QList<BackgroundProcess *> m_watchers;
    QQmlListProperty<BackgroundProcess> m_qmlListWatchers;

    LEDLock * m_lock;
    GPIORotaryEncoder * m_radioDial;
    GPIOButton * m_lidButton;
    NfcWatcher * m_nfcWatcher;


    Server * m_server;

public:
    explicit FoodBox(QObject *parent = 0);
    ~FoodBox();

    enum FoodBoxStateEnum { OPEN =0, CLOSED =1, PROCESSING=2};

    FoodBoxStateEnum state() const;
    QQmlListProperty<BackgroundProcess> watchers();
    LEDLock * lock() const;
    GPIORotaryEncoder * radioDial() const;
    GPIOButton * lidButton() const;
    Server * server() const;


public slots:
    void setState(FoodBoxStateEnum state);
    void addWatcher(BackgroundProcess *watcher);
    void removeWatcher(BackgroundProcess * watcher);
    void tryTransaction(char * tagId);

Q_SIGNALS:
    void helloWorldChanged();

    void stateChanged(FoodBoxStateEnum state);

    void watchersChanged(QQmlListProperty<BackgroundProcess> watchers);

    void transactionAuthorized();
    void transactionDenied();


protected:
    QString helloWorld() { return m_message; }
    void setHelloWorld(QString msg);

    QString m_message;
    FoodBoxStateEnum m_state;

    void serverHasAuthorizedTransaction();
    void beginTransaction();
    void finishTransaction();
    void runWatchers();

};

#endif // MYTYPE_H

