#ifndef SERVER_H
#define SERVER_H

#include <QObject>

#include <QNetworkAccessManager>
#include <transaction.h>


class Server : public QObject
{
    Q_OBJECT


    Q_PROPERTY(QString remoteAddress READ remoteAddress WRITE setRemoteAddress NOTIFY remoteAddressChanged)
    Q_PROPERTY(QString username READ username WRITE setUsername NOTIFY usernameChanged)
    Q_PROPERTY(QString password READ password WRITE setPassword NOTIFY passwordChanged)


    QString m_remoteAddress;
    QString m_username;
    QString m_password;

public:
    explicit Server(QObject *parent = 0);



    QString remoteAddress() const;
    QString username() const;
    QString password() const;

signals:

    void remoteAddressChanged(QString remoteAddress);
    void usernameChanged(QString username);
    void passwordChanged(QString password);

    void transactionAuthorized();
    void transactionDenied();


public slots:

    void queryAuthorization(QString authCode);
    void processTransaction(Transaction * transcation);
    void alertProvider();

    void setRemoteAddress(QString remoteAddress);
    void setUsername(QString username);
    void setPassword(QString password);

private:
    QNetworkAccessManager qnam;
    QNetworkReply * lastReply;

    void authQueryFinished();
    void transactionQueryFinished();

};

#endif // SERVER_H
