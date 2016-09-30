#ifndef NFCWATCHER_H
#define NFCWATCHER_H


#include <backgroundprocess.h>


class NfcWatcher : public BackgroundProcess
{
    Q_OBJECT
public:
    NfcWatcher(QObject * parent = 0);


    virtual void run();


signals:
    void tagFound(char * tagId);

};

#endif // NFCWATCHER_H
