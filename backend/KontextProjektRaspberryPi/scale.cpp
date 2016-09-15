#include "scale.h"
#include<scaleApi/readscale.h>

#include<QFile>
#include<QDebug>




Scale::Scale(QObject *parent) : QObject(parent)
{

}

int Scale::weight() const
{
    return m_weight;
}

int Scale::measurementFrequency() const
{
    return m_measurementFrequency;
}

void Scale::setWeight(int weight)
{
    if (m_weight == weight)
        return;

    m_weight = weight;
    emit weightChanged(weight);
}

void Scale::setMeasurementFrequency(unsigned int measurementFrequency)
{
    if (m_measurementFrequency == measurementFrequency)
        return;

    m_measurementFrequency = measurementFrequency;
    emit measurementFrequencyChanged(measurementFrequency);
}


ReadScaleThread::ReadScaleThread()
    :   QThread()
    ,   m_sleepTime(1)
{
    QFile scaleConfigFile("./.scaleName");
    if (!scaleConfigFile.open(QIODevice::ReadOnly | QIODevice::Text))
        qDebug() << "can't find scale configuration file at ./.scaleName";
    exit(1);

    QByteArray line = scaleConfigFile.readLine();



    openScaleDevice(QString(line).toStdString().c_str());
}

ReadScaleThread::~ReadScaleThread(){
    closeScaleDevice();
}

void ReadScaleThread::run(){
    while(true){
        emit newWeight(value());
        this->sleep( m_sleepTime);
    }


}

int ReadScaleThread::sleepTime() const
{
    return m_sleepTime;
}

void ReadScaleThread::setSleepTime(long sleepTime)
{
    if (m_sleepTime == sleepTime)
        return;

    m_sleepTime = sleepTime;
    emit sleepTimeChanged(sleepTime);
}
