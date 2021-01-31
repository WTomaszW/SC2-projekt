#ifndef INBOX_H
#define INBOX_H

#include <QMainWindow>

namespace Ui {
class Inbox;
}

class Inbox : public QMainWindow
{
    Q_OBJECT

public:
    explicit Inbox(QStringList, QWidget *parent = nullptr);
    ~Inbox();

private slots:
    void on_actionExit_triggered();
    void on_actionSend_triggered();
    void readMessage(QByteArray);

signals:
    void exit(QString);
    void createInterface();


private:
    Ui::Inbox *ui;
};

#endif // INBOX_H
