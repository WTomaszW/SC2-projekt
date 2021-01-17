#include "interface.h"
#include "ui_interface.h"
#include "inbox.h"

Interface::Interface(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Interface)
{
    ui->setupUi(this);
}

Interface::~Interface()
{
    delete ui;
}

void Interface::on_actionExit_triggered()
{
    emit(exit("exit"));
}

void Interface::on_actionReceived_triggered()
{
    emit(createInbox());

}

void Interface::on_pushButton_clicked()
{
    QStringList msg;
    msg.append("msg_send");
    msg.append(ui->lineEdit->text());
    msg.append(ui->lineEdit_2->text());
    msg.append(ui->plainTextEdit->toPlainText());
    emit(send(msg));


}


