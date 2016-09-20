#ifndef MYTYPE_H
#define MYTYPE_H

#include <QObject>
#include <backgroundprocess.h>
#include <ledlock.h>
#include<QQmlListProperty>



class FoodBox : public QObject
{
    Q_OBJECT
    Q_ENUMS(FoodBoxStateEnum)
    Q_PROPERTY( QString helloWorld READ helloWorld WRITE setHelloWorld NOTIFY helloWorldChanged )


    Q_PROPERTY(FoodBoxStateEnum state READ state WRITE setState NOTIFY stateChanged)
    Q_PROPERTY(QQmlListProperty<BackgroundProcess> watchers READ watchers NOTIFY watchersChanged)

    Q_PROPERTY(LEDLock * lock READ lock)





    QList<BackgroundProcess *> m_watchers;
    QQmlListProperty<BackgroundProcess> m_qmlListWatchers;

    LEDLock * m_lock;
    GPIOPin * pin12, * pin13,* pin16;

public:
    explicit FoodBox(QObject *parent = 0);
    ~FoodBox();

    enum FoodBoxStateEnum { OPEN =0, CLOSED =1, PROCESSING=2};

    FoodBoxStateEnum state() const;

    QQmlListProperty<BackgroundProcess> watchers();

    LEDLock * lock() const;

public slots:
    void setState(FoodBoxStateEnum state);
    void addWatcher(BackgroundProcess *watcher);
    void removeWatcher(BackgroundProcess * watcher);

Q_SIGNALS:
    void helloWorldChanged();

    void stateChanged(FoodBoxStateEnum state);

    void watchersChanged(QQmlListProperty<BackgroundProcess> watchers);

protected:
    QString helloWorld() { return m_message; }
    void setHelloWorld(QString msg);

    QString m_message;
    FoodBoxStateEnum m_state;

    void runWatchers();

};

#endif // MYTYPE_H

