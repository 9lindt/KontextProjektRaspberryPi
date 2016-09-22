#include "foodbox.h"
#include "weightwatcher.h"
#include <QtConcurrent/QtConcurrent>
#include <gpiopinwatcher.h>


FoodBox::FoodBox(QObject *parent) :
    QObject(parent),
    m_message("")
{
    m_state = PROCESSING;

    m_lock = new LEDLock();
    addWatcher(new WeightWatcher());

    m_radioDial = new GPIORotaryEncoder(12,16,6, 13);
//    m_backButton = new GPIOButton();



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

GPIORotaryEncoder *FoodBox::radioDial() const
{
    return m_radioDial;
}

GPIOButton *FoodBox::backButton() const
{
    return m_backButton;
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

