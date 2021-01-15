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
    qInfo() << tcpSocket->socketDescriptor();

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
}

void MainWindow :: mySocketRead(){

    qDebug() <<"here C1 bytes = " << tcpSocket->bytesAvailable();
    QByteArray data = tcpSocket->readAll();
    qInfo() << data;
    emit back_login(data);



}
