#ifndef INTERFACE_H
#define INTERFACE_H

#include <QMainWindow>

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

signals:
    void exit(QString);

private:
    Ui::Interface *ui;
};

#endif // INTERFACE_H
