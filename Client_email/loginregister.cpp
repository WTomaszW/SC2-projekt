#include "loginregister.h"
#include "ui_loginregister.h"

LoginRegister::LoginRegister(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginRegister)
{
    ui->setupUi(this);


}

LoginRegister::~LoginRegister()
{
    delete ui;
}


void LoginRegister::on_pushButton_clicked()
{
    QStringList details;
    details.append("1");
    details.append(ui->lineEdit->text());
    details.append(ui->lineEdit_2->text());
    emit login(details);
}

void LoginRegister::on_pushButton_2_clicked()
{
    QStringList details;
    details.append("2");
    details.append(ui->lineEdit->text());
    details.append(ui->lineEdit_2->text());
    emit login(details);
}

void LoginRegister :: logged(QByteArray log){

    QString::fromStdString(log.toStdString());

    ui->label_3->setText(log);
    ui->label_3->setStyleSheet("QLabel {color: blue}");

    if(log.contains("Logged correctly!"))
    {
        hide();
        emit(createInterface());

    }



}
