#ifndef BACKGROUNDPROCESS_H
#define BACKGROUNDPROCESS_H

//#include <QObject>
#include <QThread>

class BackgroundProcess : public QThread
{
    Q_OBJECT
    Q_ENUMS(ProcessCondition)
    Q_ENUMS(ProcessState)


    Q_PROPERTY(ProcessState state READ state WRITE setState NOTIFY stateChanged)
    Q_PROPERTY(ProcessCondition condition READ condition WRITE setCondition NOTIFY conditionChanged)



public:
    explicit BackgroundProcess(QObject *parent = 0);

    enum ProcessState {UNDEFINED_STATE, STARTING, RUNNING, FINISHING};
    enum ProcessCondition {UNDEFINED_CONDITION, GREEN, ORANGE, RED };

    BackgroundProcess::ProcessState state() const;
    BackgroundProcess::ProcessCondition condition() const;


signals:

    void stateChanged(BackgroundProcess::ProcessState state);

    void conditionChanged(BackgroundProcess::ProcessCondition condition);

public slots:



void setState(ProcessState state);
void setCondition(ProcessCondition condition);

private:


ProcessState m_state;
ProcessCondition m_condition;

};



#endif // BACKGROUNDPROCESS_H
