#ifndef LOGINREGISTER_H
#define LOGINREGISTER_H

#include <QDialog>
#include <interface.h>

namespace Ui {
class LoginRegister;
}

class LoginRegister : public QDialog
{
    Q_OBJECT

public:
    explicit LoginRegister(QWidget *parent = 0);
    ~LoginRegister();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
public slots:
    void logged(QByteArray);

signals:
    void login(QStringList);
    void createInterface();

private:
    Ui::LoginRegister *ui;

};

#endif // LOGINREGISTER_H
