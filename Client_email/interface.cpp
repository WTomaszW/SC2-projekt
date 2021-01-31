#include "interface.h"
#include "ui_interface.h"
#include "inbox.h"
#include <QStringListModel>
#include <QAbstractListModel>
#include <QDebug>

QList<QStringList> msg;
int num=0;

Interface::Interface(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Interface)
{
    ui->setupUi(this);
    ui->listWidget->hide();
    ui->label->hide();
    ui->label_4->hide();
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
    ui->listWidget->clear();
    emit(readMessages("msg_read"));
}

void Interface::on_pushButton_clicked()
{
    ui->listWidget->clear();
    QStringList msg;
    msg.append("msg_send");
    msg.append(ui->lineEdit->text());
    msg.append(ui->lineEdit_2->text());
    msg.append(ui->plainTextEdit->toPlainText());
    emit(send(msg));

}



void Interface::on_actionNew_message_triggered()
{
    ui->listWidget->hide();
    ui->label->hide();
    ui->label_1->show();
    ui->label_2->show();
    ui->label_3->show();
    ui->label_4->hide();

    ui->lineEdit->show();
    ui->lineEdit_2->show();
    ui->plainTextEdit->show();
    ui->pushButton->show();
}

void Interface :: DisplayMessage(QStringList message){

    if(message.length()>1){
    msg.append(message);
    ui->listWidget->setCurrentRow(num);
    ui->listWidget->addItem(message.at(1));

    if(num<1){
    connect( ui->listWidget, SIGNAL(doubleClicked(const QModelIndex &)), this, SLOT( runn(const QModelIndex &)));
    }
    num=num+1;

    }
    ui->listWidget->show();
    ui->label->show();
    ui->label_1->hide();
    ui->label_2->hide();
    ui->label_3->hide();
    ui->label_4->show();
    ui->lineEdit->hide();
    ui->lineEdit_2->hide();
    ui->plainTextEdit->hide();
    ui->pushButton->hide();
    emit(exit("already,done"));

}

void Interface :: runn(const QModelIndex &index){

    inbox = new Inbox(msg.at(index.row()));
    inbox->show();

}
