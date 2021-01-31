/********************************************************************************
** Form generated from reading UI file 'loginregister.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINREGISTER_H
#define UI_LOGINREGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginRegister
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_3;

    void setupUi(QDialog *LoginRegister)
    {
        if (LoginRegister->objectName().isEmpty())
            LoginRegister->setObjectName(QStringLiteral("LoginRegister"));
        LoginRegister->resize(400, 300);
        lineEdit = new QLineEdit(LoginRegister);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(210, 40, 113, 25));
        lineEdit_2 = new QLineEdit(LoginRegister);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(210, 80, 113, 25));
        label = new QLabel(LoginRegister);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 40, 67, 17));
        label_2 = new QLabel(LoginRegister);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 80, 67, 17));
        pushButton = new QPushButton(LoginRegister);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 160, 89, 25));
        pushButton_2 = new QPushButton(LoginRegister);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 160, 111, 25));
        label_3 = new QLabel(LoginRegister);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 120, 281, 20));

        retranslateUi(LoginRegister);

        QMetaObject::connectSlotsByName(LoginRegister);
    } // setupUi

    void retranslateUi(QDialog *LoginRegister)
    {
        LoginRegister->setWindowTitle(QApplication::translate("LoginRegister", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("LoginRegister", "Login", Q_NULLPTR));
        label_2->setText(QApplication::translate("LoginRegister", "Password", Q_NULLPTR));
        pushButton->setText(QApplication::translate("LoginRegister", "Log in", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("LoginRegister", "Register", Q_NULLPTR));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginRegister: public Ui_LoginRegister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINREGISTER_H
