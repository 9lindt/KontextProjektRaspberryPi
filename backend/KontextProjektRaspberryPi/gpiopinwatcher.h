#ifndef GPIOPINWATCHER_H
#define GPIOPINWATCHER_H

#include <backgroundprocess.h>

class GPIOPinWatcher : public BackgroundProcess
{
    Q_OBJECT

    Q_PROPERTY(bool on READ isOn WRITE setOn NOTIFY onChanged)

    bool m_on;

public:
    explicit GPIOPinWatcher(QObject *parent = 0);

    void run();

bool isOn() const;

signals:

void onChanged(bool on);

public slots:

void setOn(bool on);


private:
    QString m_oldValue;

};

#endif // GPIOPINWATCHER_H
