#include "foodbox.h"
#include "weightwatcher.h"
#include <QtConcurrent/QtConcurrent>
#include <gpiopinwatcher.h>
#include <nfcwatcher.h>


FoodBox::FoodBox(QObject *parent) :
    QObject(parent),
    m_message("")
{
    m_state = PROCESSING;

    m_lock = new LEDLock();
    addWatcher(new WeightWatcher());


    m_radioDial = new GPIORotaryEncoder(12,16,6, 13);
    m_lidButton = new GPIOButton( 20, 19);
    m_nfcWatcher = new NfcWatcher(this);
    m_server = new Server();


    connect(m_nfcWatcher, &NfcWatcher::tagFound, this, &FoodBox::tryTransaction);
    connect(m_server, &Server::transactionDenied, this, &FoodBox::transactionDenied);

    addWatcher(m_nfcWatcher);

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

GPIOButton *FoodBox::lidButton() const
{
    return m_lidButton;
}

Server *FoodBox::server() const
{
    return m_server;
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

void FoodBox::tryTransaction(char *tagId)
{

    //benoetig thread security
    setState(PROCESSING);
    m_server->queryAuthorization(QString(tagId));

    connect(m_server, &Server::transactionAuthorized, this, &FoodBox::serverHasAuthorizedTransaction);






}


void FoodBox::serverHasAuthorizedTransaction()
{
    connect(m_lidButton, &GPIOButton::pressedChanged, this, &FoodBox::beginTransaction);
            m_lock->setLocked(false);
            setState(OPEN);

            emit transactionAuthorized();
}



void FoodBox::setHelloWorld(QString msg) { m_message = msg; Q_EMIT helloWorldChanged(); }

void FoodBox::beginTransaction()
{
    this->disconnect(m_lidButton, &GPIOButton::pressedChanged, this, &FoodBox::beginTransaction );
       //hole start gewicht.
    connect(m_lidButton, &GPIOButton::pressedChanged, this, &FoodBox::finishTransaction);
    qDebug() << "start of transaction";

}

void FoodBox::finishTransaction()
{
        disconnect(m_lidButton, &GPIOButton::pressedChanged, this, &FoodBox::finishTransaction);
        m_lock->setLocked(true);
        setState(CLOSED);

        //calc whightDelta

        Transaction * transaction = new Transaction();
        transaction->weightDelta = 5;

        m_server->processTransaction(transaction);
            qDebug() << "end of transaction";
}

void FoodBox::runWatchers()
{
    foreach(BackgroundProcess * watcher , m_watchers){
        watcher->start();
    }
}

