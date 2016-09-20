#include "foodbox.h"
#include "weightwatcher.h"
#include <QtConcurrent/QtConcurrent>

FoodBox::FoodBox(QObject *parent) :
    QObject(parent),
    m_message("")
{
    m_state = PROCESSING;
    addWatcher(new WeightWatcher());
    m_lock = new LEDLock();

    runWatchers();

}

FoodBox::~FoodBox() {

}

FoodBox::FoodBoxStateEnum FoodBox::state() const
{
    return m_state;
}

QQmlListProperty<BackgroundProcess> FoodBox::watchers()
{
    return QQmlListProperty<BackgroundProcess>(this, m_watchers);
}

LEDLock *FoodBox::lock() const
{
    return m_lock;
}

void FoodBox::setState(FoodBox::FoodBoxStateEnum state)
{
    if (m_state == state)
        return;

    m_state = state;
    emit stateChanged(state);
}

void FoodBox::addWatcher(BackgroundProcess * watcher)
{
    m_watchers.append(watcher);
    emit watchersChanged(QQmlListProperty<BackgroundProcess>(this, m_watchers));
}

void FoodBox::removeWatcher(BackgroundProcess *watcher)
{
    m_watchers.removeOne(watcher);
    emit watchersChanged(QQmlListProperty<BackgroundProcess>(this, m_watchers));
}



void FoodBox::setHelloWorld(QString msg) { m_message = msg; Q_EMIT helloWorldChanged(); }

void FoodBox::runWatchers()
{
    foreach(BackgroundProcess * watcher , m_watchers){
        watcher->start();
    }
}

