#include "server.h"
#include<QNetworkRequest>
#include<QNetworkReply>

#include <QDebug>

Server::Server(QObject *parent)
    :   QObject(parent)
    ,   m_remoteAddress("fdepot.herokuapp.com")
    ,   m_username("max@mustermann.de")
    ,   m_password("123567")
{

}

QString Server::remoteAddress() const
{
    return m_remoteAddress;
}

QString Server::username() const
{
    return m_username;
}

QString Server::password() const
{
    return m_password;
}

void Server::queryAuthorization(QString authCode)
{
    qDebug() << "querying authorization";

    QNetworkRequest request(QUrl::fromEncoded(QString("http://" + m_remoteAddress + "/openBox?tagId=" + authCode).toStdString().c_str()));
    QByteArray authString = QString(username() + ":" + password()).toStdString().c_str();
    request.setRawHeader(QString("Authorization").toStdString().c_str(), "Basic " + authString.toBase64());
    qDebug() << request.url();
    qDebug() << request.rawHeader("Authorization");
    lastReply = qnam.get(request);
    connect(lastReply, &QNetworkReply::finished, this, &Server::authQueryFinished);
    //    connect(lastReply, &QIODevice::readyRead, this, &Server::httpReadyRead);
}


void Server::processTransaction(Transaction * transaction)
{
    qDebug() << "querying authorization";

    QNetworkRequest request(QUrl::fromEncoded(QString("http://" + m_remoteAddress + "/sendTransaction?clientId=" + "1234" + "&quantity=" + transaction->weightDelta).toStdString().c_str()));
    QByteArray authString = QString(username() + ":" + password()).toStdString().c_str();
    request.setRawHeader(QString("Authorization").toStdString().c_str(), "Basic " + authString.toBase64());
    lastReply = qnam.get(request);
    connect(lastReply, &QNetworkReply::finished, this, &Server::transactionQueryFinished);
    //    connect(lastReply, &QIODevice::readyRead, this, &Server::httpReadyRead);

}




void Server::setRemoteAddress(QString remoteAddress)
{
    if (m_remoteAddress == remoteAddress)
        return;

    m_remoteAddress = remoteAddress;
    emit remoteAddressChanged(remoteAddress);
}

void Server::setUsername(QString username)
{
    if (m_username == username)
        return;

    m_username = username;
    emit usernameChanged(username);
}

void Server::setPassword(QString password)
{
    if (m_password == password)
        return;

    m_password = password;
    emit passwordChanged(password);
}

void Server::authQueryFinished()
{

    QByteArray responseContent = lastReply->readAll();
    qDebug() << "authQueryFinished:" << responseContent  << " error:" <<     lastReply->error();

    QUrl redirectUrl = lastReply->attribute(QNetworkRequest::RedirectionTargetAttribute).toUrl();
    qDebug() <<  redirectUrl;

    if (lastReply->error() == QNetworkReply::NoError) {
        int statusCode = lastReply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
        if(statusCode == 200 ) {
            if(responseContent.startsWith("{\"success\":true")){
               emit transactionAuthorized();
            } else {
                emit transactionDenied();
            }

        } else {
            emit transactionDenied();
        }

    }
}

void Server::transactionQueryFinished()
{
    qDebug() << "authQueryFinished:" << lastReply->readAll() << " error:" <<     lastReply->error();

    QUrl redirectUrl = lastReply->attribute(QNetworkRequest::RedirectionTargetAttribute).toUrl();
    qDebug() <<  redirectUrl;

//    if (lastReply->error() == QNetworkReply::NoError) {
//        int statusCode = lastReply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
//        if(statusCode == 200 ) {
//            emit transactionAuthorized();
//        } else {
//            emit transactionDenied();
//        }

//    }



}
