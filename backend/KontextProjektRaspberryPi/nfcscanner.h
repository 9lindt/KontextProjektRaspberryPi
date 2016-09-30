#ifndef NFCSCANNER_H
#define NFCSCANNER_H



#include <QObject>

class NfcScanner : public QObject
{
    Q_OBJECT
public:
    explicit NfcScanner(QObject *parent = 0);


    static char * poll_nfc_ids();

signals:

public slots:
    void targetConnected();
    void targetLost();


private:

};

#endif // NFCSCANNER_H
