#include "register_login.h"
#include "ui_register_login.h"

register_login::register_login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::register_login)
{
    ui->setupUi(this);
}

register_login::~register_login()
{
    delete ui;
}
