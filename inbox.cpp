#include "inbox.h"
#include "ui_inbox.h"

Inbox::Inbox(QStringList arg, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Inbox)
{
    ui->setupUi(this);
    ui->label_4->setText(arg.at(3));
    ui->label_5->setText(arg.at(1));
    ui->textBrowser->setText(arg.at(2));
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
