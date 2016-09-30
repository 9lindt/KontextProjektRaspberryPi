#include "backgroundprocess.h"
#include <QDebug>

BackgroundProcess::BackgroundProcess(QObject *parent) : QThread(parent )
{

}

BackgroundProcess::ProcessState BackgroundProcess::state() const
{
    return m_state;
}

BackgroundProcess::ProcessCondition BackgroundProcess::condition() const
{
    return m_condition;
}

void BackgroundProcess::setState(BackgroundProcess::ProcessState state)
{
    if (m_state == state)
        return;

    m_state = state;
    emit stateChanged(state);
}

void BackgroundProcess::setCondition(BackgroundProcess::ProcessCondition condition)
{
    if (m_condition == condition)
        return;

    qDebug() << "condition changed: " << condition;

    m_condition = condition;
    emit conditionChanged(condition);
}

