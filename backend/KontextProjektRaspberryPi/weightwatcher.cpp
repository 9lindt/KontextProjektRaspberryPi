#include "weightwatcher.h"
#include <QDebug>
#include <QThread>

WeightWatcher::WeightWatcher():BackgroundProcess()
{
    setCondition(GREEN);
}

void WeightWatcher::run()
{
    //hole gewicht()
    setState(RUNNING);
    int i = 0;
    while(true){

        QThread::sleep(5);
        //ueberpruefe gewicht
        if(i > 1){
            setCondition(RED);
            //setState(FINISHING);
            //break;
            i = 0;
        } else {
            qDebug() << "weight is ok";
            setCondition(GREEN);
        }
        i++;
    }

}

