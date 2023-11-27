
#ifndef SERVER_H
#define SERVER_H




#include <QObject>
#include <QCoreApplication>
#include <QUdpSocket>
#include <iostream>
#include "communicator.h"
#include "matrix.h"
#include "squarematrix.h"



class Server : public QCoreApplication
{
    Q_OBJECT

    TCommunicator *comm;

public:
    Server(int, char**);
    ~Server();


public slots:
    void recieve(QByteArray);

};
#endif // SERVER_H
