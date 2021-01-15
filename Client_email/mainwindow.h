#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork>
#include <loginregister.h>
#include <interface.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
  void on_pushButton_clicked();
  void Connected();
  void SendToServer(QStringList);
  void mySocketRead();
  void Message(QString);
  void CreateInterface();


signals:
  void back_login(QByteArray);

private:
    Ui::MainWindow *ui;
    QTcpSocket *tcpSocket;
    LoginRegister *loginRegister;
    Interface *interface;
};

#endif // MAINWINDOW_H
