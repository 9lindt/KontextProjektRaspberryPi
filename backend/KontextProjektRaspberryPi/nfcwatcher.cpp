#include "nfcwatcher.h"
#include <nfcscanner.h>
#include <QDebug>

NfcWatcher::NfcWatcher(QObject *parent)
    :   BackgroundProcess(parent)
{

}

void NfcWatcher::run()
{

    while(true){
        char * id = NfcScanner::poll_nfc_ids();
        qDebug() << "Id:" << id;
        emit tagFound(id);
        sleep(5);
    }



}
