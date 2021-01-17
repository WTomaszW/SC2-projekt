#ifndef INTERFACE_H
#define INTERFACE_H

#include <QMainWindow>
#include <inbox.h>

namespace Ui {
class Interface;
}

class Interface : public QMainWindow
{
    Q_OBJECT

public:
    explicit Interface(QWidget *parent = 0);
    ~Interface();

private slots:
    void on_actionExit_triggered();
    void on_actionReceived_triggered();
    void on_pushButton_clicked();

signals:
    void exit(QString);
    void read(QString);
    void send(QStringList);
    void createInbox();

private:
    Ui::Interface *ui;
};

#endif // INTERFACE_H
