#ifndef MYTYPE_H
#define MYTYPE_H

#include <QObject>
#include <backgroundprocess.h>
#include<QQmlListProperty>



class FoodBox : public QObject
{
    Q_OBJECT
    Q_ENUMS(FoodBoxStateEnum)
    Q_PROPERTY( QString helloWorld READ helloWorld WRITE setHelloWorld NOTIFY helloWorldChanged )


    Q_PROPERTY(FoodBoxStateEnum state READ state WRITE setState NOTIFY stateChanged)
    Q_PROPERTY(QQmlListProperty<BackgroundProcess> watchers READ watchers NOTIFY watchersChanged)






    QList<BackgroundProcess *> m_watchers;
    QQmlListProperty<BackgroundProcess> m_qmlListWatchers;

public:
    explicit FoodBox(QObject *parent = 0);
    ~FoodBox();

    enum FoodBoxStateEnum { OPEN =0, CLOSED =1, PROCESSING=2};

    FoodBoxStateEnum state() const;

    QQmlListProperty<BackgroundProcess> watchers();

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

