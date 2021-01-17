#include "inbox.h"
#include "ui_inbox.h"

Inbox::Inbox(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Inbox)
{
    ui->setupUi(this);
}

Inbox::~Inbox()
{
    delete ui;
}

void Inbox::on_actionExit_triggered()
{
    emit(exit("exit"));
}

void Inbox::on_actionSend_triggered()
{
    hide();
    emit(createInterface());

}

void Inbox::readMessage(QByteArray msg){
    QString::fromStdString(msg.toStdString());
    ui->label_2->setText(msg);
    ui->label_2->setStyleSheet("QLabel {color: blue}");

}
