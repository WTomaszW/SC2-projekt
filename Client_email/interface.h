#ifndef INTERFACE_H
#define INTERFACE_H

#include <QMainWindow>
#include <inbox.h>
#include <QStringListModel>


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
    void on_actionNew_message_triggered();
    void DisplayMessage(QStringList);
    void runn(const QModelIndex &index);

signals:
    void exit(QString);
    void read(QString);
    void send(QStringList);
    void createInbox();
    void readMessages(QString);

private:
    Ui::Interface *ui;
    Inbox * inbox;
};

#endif // INTERFACE_H
