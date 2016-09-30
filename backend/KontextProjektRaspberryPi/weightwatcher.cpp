#include "weightwatcher.h"
#include <QDebug>
#include <QThread>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

#include <termios.h>
#include <fcntl.h>

#include <dirent.h>
#include <time.h>

#include <pthread.h>

#include <netinet/in.h>
#include <netdb.h>
#include <sys/types.h>
#include <sys/socket.h>

//#include "sorter.hpp"
//#include "printCat.hpp"

#define tolerance 5
#define intervall 10000



WeightWatcher::WeightWatcher(QObject * parent)
    :   BackgroundProcess( parent)
{
    setCondition(GREEN);
    m_scale = new Scale();
}

int WeightWatcher::saver()
{
//	date();
    printf("*saver* \n");

    //Der Name der Datei wird generiert
    char title[19] = "foodlog2.txt";

    datei = fopen (title, "a+");
    if (datei == NULL)
    {
        printf("Fehler beim öffnen der Datei");
        return 0;
    }
    printf("datei erfolgreich ge�ffnet \n");
    //In die Datei wird geschrieben
    fprintf(datei, "\n /anfang/ \n \n");
    return 1;
}


int WeightWatcher::save(char val[10000])
{
    printf("*save* ? pointer:     %d \n", datei);
    fprintf(datei, "%s", val);
}

int WeightWatcher::json()
{
printf("*json* \n");
/**
    char id[20] = "00000000000000000000";
    char weight[20] = "00000000000000000000";
    char errorcode[2] = "00";

    sprintf(id, "%d", counter);
    sprintf(weight, "%s", wlog[counter][0]);
    sprintf(errorcode, "%s", wlog[counter][1]);

    save('{ \n}');
    save("id : ");
    save(id);
    save(", \n");

    save("errorcode :");
    save(errorcode);
    save(", \n");

    save("weight :");
    save(weight);
    save(", \n");

    save("time : ");
    save(date());
    save(", \n }";
**/
    char json[10000];
    memset(json, 0, sizeof(json));

    sprintf(json, "{ \n id : %d, \n errorcode : %d, \n weight : %d, \n time : %s, \n}", counter, wlog[counter][0], wlog[counter][1], day);
    printf("{ \n id : %d, \n errorcode : %d, \n weight : %d, \n time : %s, \n}\n", counter, wlog[counter][1], wlog[counter][0], day);
    save(json);
    write(sockfd, json, strlen(json));
}

int WeightWatcher::date()
{
    sek = time(NULL);
    ts = localtime(&sek);

    printf("date(): %d \n",strftime(day, 100, "%Y.%m.%d  %T", ts));
    strftime(day, 100, "%Y.%m.%d-%T", ts);


    return 0;
}


//F�llt die Socket-Strukturen auf und verbindet mit dem Server
int WeightWatcher::client()
{
    //Konsolen-Ausgabe, um Fortschritt des Programms zu beurteilen
    printf("\n on --client-- \n");

        //Konsolen-Ausgabe, um Fortschritt des Programms zu beurteilen
        printf("\n off0 --client-- \n");

    // "argv[2] enth�lt den Port, das prinzipiell als String, der muss daher mit atoi konvertiert werden
    //um dann als int in "portno" gespeichert zu werden.
    portno = atoi("2333");
    sockfd = socket(AF_INET, SOCK_STREAM, 0);

    //Hier wird der Servername in die Variable geschrieben, "gethostbyname" wird gebraucht, damit auch
    //Servernamen statt IP-Adressen angegeben werden k�nnen (z.B. "localhost").
    server = gethostbyname("localhost");

        //Konsolen-Ausgabe, um Fortschritt des Programms zu beurteilen
        printf("\n off1 --client-- \n");

    //AF_INET ist teil der Protokolldefinition, nicht weiter von belang
    servadd.sin_family = AF_INET;
    bcopy((char *)server->h_addr, (char *)&servadd.sin_addr.s_addr,	server->h_length);
        //Konsolen-Ausgabe, um Fortschritt des Programms zu beurteilen
        printf("\n off2 --client-- \n");

    //konvertiert von host- und network-byteorder, bevor der Port in die servadd-Struktur geschrieben wird.
    servadd.sin_port = htons(portno);

//if(connect(sockfd, &servadd, sizeof(servadd)) < 0)
//        printf("cannot connect");

//printf("\n off --client-- \n");


}


//int makefoto()
//{
//    printf("photo");
//    date();
//    char fswebcam[100];
//    memset(fswebcam, 0, sizeof(fswebcam));
//    strcat(fswebcam, "fswebcam -r \"1280x720\" ");
//    strcat(fswebcam, day);

//    system(fswebcam);

//    printf("made \n");
//}

//Bei �nderungen des Wertes der Waage, die keine ungef�hren Vielfachen des Produktgewichtes sind, wird der Fehlerwert um die Differenz vergr��ert. Dabe ist es wichtig zwei Werte zu haben, damit sich positive und negative Fehler nicht aufheben k�nnen.
int posfail = 0;
int negfail = 0;

int WeightWatcher::weigh()
{	/*int iweight = 0;
    char cweight[11] = "0000000000";
    printf("*weigh*        type weight: ");
    scanf("%s", &cweight);
    iweight = atoi(cweight);
    //makefoto();
    return iweight;*/

    return m_scale->weight();
}



int WeightWatcher::stage1(int weight, int ref)
{
    printf("*stage1*        ref - tolerance = %d \n", (ref-tolerance));
    if((ref - tolerance) < weight && weight < (ref + tolerance))
    {
        printf("*stage1*        1 \n");
        return 1;
    }
    else
    {
        printf("*stage1*        0 \n");
        return 0;
    }
}
int WeightWatcher::fruitstage(int weight)
{
    if((product.gewicht - product.abweichung) < weight < (product.gewicht + product.abweichung))
        return 1;
    else
        return 0;
}

int WeightWatcher::stage2(int weight)
{
    printf("stage2 \n");
    int count = 0;
    int list[100];
    memset(list, 0, sizeof(list));
    list[count] = weight;
    int test = 0;

    while(1)
    {
        int val = weigh();

        if(stage1(val, list[count]))
        {
            test++;
            printf("*stage2*         test: %d \n", test);

            if(test >= 4)
            return val;
        }
        else
        {
            test = 0;
            printf("*stage2*    else test: %d \n", test);
        }

        if(!stage1(val, list[count]) && val > list[count])
        {
    //		wlog[counter+1][1] += 10;
        }

    count++;
    list[count] = val;
    usleep(intervall);
    }



}

int WeightWatcher::stage3(int weight)
{
    printf("stage3 \n");
    if(weight > wlog[counter][0])
    {
        negfail += weight - wlog[counter][0];
        wlog[counter+1][0] = weight;
        wlog[counter+1][1] += 9;
        date();
        strcpy(dlog[counter+1], day);
        setCondition(RED);

    }
    else
    {
        wlog[counter+1][0] = weight;
        if(fruitstage(!weight))
        {
            negfail += wlog[counter][0] - weight;
            wlog[counter+1][1] += 6;
            setCondition(RED);
            //strcpy(dlog[counter+1], date());
        }
    }
    printf("stage3 end* \n");
}

void *WeightWatcher::weightloop()
    {
        printf("thread started \n");
        while (1)
        {

            int weight = weigh();
            printf("*loop*           wlog counter: %d \n", wlog[counter][0]);

            if(!stage1(weight, wlog[counter][0]))
            {
                printf("*loop*               stage1 test checked \n");
                weight = stage2(weight);
                stage3(weight);
            //	wlog[counter][0] = weight;
                counter++;
                json();
            }

            else
            {
                printf("*loop*              no change \n");
            }


            printf("*loop*               counter: %d \n", counter);
            date();
            strcpy(dlog[counter+1], day);
            printf("test************************************************************* \n");
            //makefoto();

        }
    }

void WeightWatcher::run()
{
    //hole gewicht()
    setState(RUNNING);
    setCondition(GREEN);
    counter = 0;

    memset(wlog, 0, sizeof(wlog));
    memset(dlog, 0, sizeof(dlog));

        memset(day, 0, sizeof(day));

        memset(&servadd, 0, sizeof(servadd));


        /** Diese Struktur speichert das Produkt, das im Kasten angeboten wird. Es enth�lt den Namen, das Gewicht, das das Produkt �blicherweise hat, und die �bliche Abweichung. Des weiteren den Preis, und ob das Produkt nacht Gewicht 		oder pro Einheit verkauft wird. **/


        memset(product.name, 0, sizeof(product.name));
        product.gewicht = 1000;
        product.abweichung = 100;
        product.preis = 100;
        product.einheit = 999;

        //Zeitvariablen




    saver();
    date();
    client();
    printf("day %s: \n", day);
    wlog[counter][0] = weigh();
    printf("main        wlog: %d \n", wlog[counter][0]);
    strcpy(dlog[counter], day);

    pthread_t thread = NULL;
    //pthread_create(&thread, NULL, &WeightWatcher::weightloop, NULL);
    weightloop();



}

