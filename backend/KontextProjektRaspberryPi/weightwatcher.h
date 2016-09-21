#ifndef WEIGHTWATCHER_H
#define WEIGHTWATCHER_H

#include <QObject>
#include "backgroundprocess.h"
//#include "scale.h"

class WeightWatcher : public BackgroundProcess
{
    Q_OBJECT
public:
    WeightWatcher(QObject *parent = 0);
    virtual void run();
};

#endif // WEIGHTWATCHER_H
