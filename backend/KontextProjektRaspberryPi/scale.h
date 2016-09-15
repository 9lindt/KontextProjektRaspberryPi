#ifndef SCALE_H
#define SCALE_H

#include <QObject>
#include<QThread>

///
/// \brief The ReadScaleThread class is the thread that keeps object of the scale class updated
///
class ReadScaleThread: public QThread{
    Q_OBJECT

    Q_PROPERTY(long sleepTime READ sleepTime WRITE setSleepTime NOTIFY sleepTimeChanged)

    long m_sleepTime;

public:

    ReadScaleThread();

    ~ReadScaleThread();

    void run();

    int sleepTime() const;

public slots:
    void setSleepTime(long sleepTime);

signals:
    void newWeight(int weight);

    void sleepTimeChanged(long sleepTime);
};

///
/// \brief The Scale class
///
class Scale : public QObject
{
    Q_OBJECT

    Q_PROPERTY(int weight READ weight NOTIFY weightChanged)
    Q_PROPERTY(unsigned int measurementFrequency READ measurementFrequency WRITE setMeasurementFrequency NOTIFY measurementFrequencyChanged)

    int m_weight;

    unsigned int m_measurementFrequency;

public:
    explicit Scale(QObject *parent = 0);

    int weight() const;

    int measurementFrequency() const;

signals:

    void weightChanged(int weight);

    void measurementFrequencyChanged(unsigned int measurementFrequency);

public slots:
    void setMeasurementFrequency(unsigned int measurementFrequency);

private :
    void setWeight(int weight);
    ReadScaleThread thread;


};



#endif // SCALE_H
