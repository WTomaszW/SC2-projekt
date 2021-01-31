#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QThread>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    tcpSocket(new QTcpSocket(this)),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString adress=ui->lineEdit->text();
    qint16 port = ui->lineEdit_2->text().toShort();
    tcpSocket->connectToHost(adress, port);

    connect(tcpSocket,SIGNAL(connected()),this,SLOT(Connected()));

    ui->label_2->setText("Failed to connect!");
    ui->label_2->setStyleSheet("QLabel {color: blue}");

}

void MainWindow :: Connected(){

    hide();
    loginRegister = new LoginRegister;
    loginRegister->show();
    connect(loginRegister,SIGNAL(login(QStringList)),this,SLOT(SendToServer(QStringList)));
    connect(this,SIGNAL(back_login(QByteArray)),loginRegister, SLOT(logged(QByteArray)));
    connect(tcpSocket,SIGNAL(readyRead()), this, SLOT( mySocketRead()));
    connect(loginRegister,SIGNAL(createInterface()),this,SLOT(CreateInterface()));

}

void MainWindow :: SendToServer(QStringList details){

    QByteArray output;

    foreach (const QString &str, details)
    {
        output.append(str);
        output.append("-");
    }

    tcpSocket->write(output);


}

void MainWindow :: Message(QString message){
      QByteArray output;
      output.append(message);
      tcpSocket->write(output);

}

void MainWindow :: CreateInterface(){

    interface = new Interface();
    interface->show();
    connect(interface,SIGNAL(exit(QString)),this,SLOT(Message(QString)));
    connect(interface,SIGNAL(read(QString)),this,SLOT(Message(QString)));
    connect(interface,SIGNAL(send(QStringList)),this,SLOT(SendMessage(QStringList)));
    connect(interface, SIGNAL(createInbox()),this,SLOT(CreateInbox()));
    connect(interface,SIGNAL(readMessages(QString)),this,SLOT(Message(QString)));
    connect(this,SIGNAL(message(QStringList)),interface,SLOT(DisplayMessage(QStringList)));


}


void MainWindow :: mySocketRead(){

    QByteArray data = tcpSocket->readAll();
    QString msg(data);
    QStringList listMsg = msg.split("-");
    if(listMsg.contains("Read")){
        emit message(listMsg);
    }
    else if(msg.contains("Done")){


     tcpSocket->close();
     QApplication ::quit();
    }

    else{

    emit back_login(data);
    }
}

void MainWindow :: SendMessage(QStringList details){

    QByteArray output;

    foreach (const QString &str, details)
    {
        output.append(str);
        output.append("-");
    }

    tcpSocket->write(output);

}



