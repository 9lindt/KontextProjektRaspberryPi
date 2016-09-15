#ifndef WEIGHTWATCHER_H
#define WEIGHTWATCHER_H

#include <QObject>
#include "backgroundprocess.h"
//#include "scale.h"

class WeightWatcher : public BackgroundProcess
{
public:
    WeightWatcher();
    virtual void run();
};

#endif // WEIGHTWATCHER_H
