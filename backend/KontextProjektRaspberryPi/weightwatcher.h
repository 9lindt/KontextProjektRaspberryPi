#ifndef WEIGHTWATCHER_H
#define WEIGHTWATCHER_H

#include <QObject>
#include "backgroundprocess.h"
#include "scale.h"

#include <netinet/in.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>


struct products{
    char name[20];
    int gewicht;
    int abweichung;
    int preis;
    int einheit;
};


class WeightWatcher : public BackgroundProcess
{
    Q_OBJECT
    int saver();
    int save(char val[]);
    int json();
    int date();
    int client();
    int weigh();
    int stage1(int weight, int ref);
    int stage2(int weight);
    int fruitstage(int weight);
    int stage3(int weight);
    void *weightloop();



    int wlog[10000][3];

    char dlog[10000][30];
    int opened = 0;
    FILE *datei;

    char day[100];

    int counter;

    int sockfd, portno, n;

    struct tm *ts;
    time_t sek;




    struct products product;

//sockaddr struct mit den socket-informationen
    struct sockaddr_in servadd;
    struct hostent *server;

    Scale * m_scale;

public:
    WeightWatcher(QObject *parent = 0);
    virtual void run();



};

#endif // WEIGHTWATCHER_H
