#ifndef REGISTER_LOGIN_H
#define REGISTER_LOGIN_H

#include <QDialog>

namespace Ui {
class register_login;
}

class register_login : public QDialog
{
    Q_OBJECT

public:
    explicit register_login(QWidget *parent = 0);
    ~register_login();

private:
    Ui::register_login *ui;
};

#endif // REGISTER_LOGIN_H
