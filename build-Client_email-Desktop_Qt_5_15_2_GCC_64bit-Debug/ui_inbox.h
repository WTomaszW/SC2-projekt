/********************************************************************************
** Form generated from reading UI file 'inbox.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INBOX_H
#define UI_INBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Inbox
{
public:
    QAction *actionReceived;
    QAction *actionSend;
    QAction *actionExit;
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QTextBrowser *textBrowser;

    void setupUi(QMainWindow *Inbox)
    {
        if (Inbox->objectName().isEmpty())
            Inbox->setObjectName(QString::fromUtf8("Inbox"));
        Inbox->resize(800, 600);
        actionReceived = new QAction(Inbox);
        actionReceived->setObjectName(QString::fromUtf8("actionReceived"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("IMG/received.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReceived->setIcon(icon);
        actionSend = new QAction(Inbox);
        actionSend->setObjectName(QString::fromUtf8("actionSend"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("IMG/send.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSend->setIcon(icon1);
        actionExit = new QAction(Inbox);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("IMG/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon2);
        centralwidget = new QWidget(Inbox);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 131, 17));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 57, 67, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 90, 67, 17));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(110, 30, 251, 17));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 60, 181, 17));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(60, 120, 561, 331));
        Inbox->setCentralWidget(centralwidget);

        retranslateUi(Inbox);

        QMetaObject::connectSlotsByName(Inbox);
    } // setupUi

    void retranslateUi(QMainWindow *Inbox)
    {
        Inbox->setWindowTitle(QCoreApplication::translate("Inbox", "MainWindow", nullptr));
        actionReceived->setText(QCoreApplication::translate("Inbox", "Received", nullptr));
        actionSend->setText(QCoreApplication::translate("Inbox", "Send", nullptr));
        actionExit->setText(QCoreApplication::translate("Inbox", "Exit", nullptr));
        label->setText(QCoreApplication::translate("Inbox", "Nadawca:", nullptr));
        label_2->setText(QCoreApplication::translate("Inbox", "Tytu\305\202:", nullptr));
        label_3->setText(QCoreApplication::translate("Inbox", "Tre\305\233\304\207:", nullptr));
        label_4->setText(QString());
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Inbox: public Ui_Inbox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INBOX_H
