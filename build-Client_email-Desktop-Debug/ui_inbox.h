/********************************************************************************
** Form generated from reading UI file 'inbox.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INBOX_H
#define UI_INBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
            Inbox->setObjectName(QStringLiteral("Inbox"));
        Inbox->resize(800, 600);
        actionReceived = new QAction(Inbox);
        actionReceived->setObjectName(QStringLiteral("actionReceived"));
        QIcon icon;
        icon.addFile(QStringLiteral("IMG/received.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReceived->setIcon(icon);
        actionSend = new QAction(Inbox);
        actionSend->setObjectName(QStringLiteral("actionSend"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("IMG/send.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSend->setIcon(icon1);
        actionExit = new QAction(Inbox);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("IMG/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon2);
        centralwidget = new QWidget(Inbox);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 131, 17));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 57, 67, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 90, 67, 17));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 30, 251, 17));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(90, 60, 181, 17));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(60, 120, 561, 331));
        Inbox->setCentralWidget(centralwidget);

        retranslateUi(Inbox);

        QMetaObject::connectSlotsByName(Inbox);
    } // setupUi

    void retranslateUi(QMainWindow *Inbox)
    {
        Inbox->setWindowTitle(QApplication::translate("Inbox", "MainWindow", Q_NULLPTR));
        actionReceived->setText(QApplication::translate("Inbox", "Received", Q_NULLPTR));
        actionSend->setText(QApplication::translate("Inbox", "Send", Q_NULLPTR));
        actionExit->setText(QApplication::translate("Inbox", "Exit", Q_NULLPTR));
        label->setText(QApplication::translate("Inbox", "Nadawca:", Q_NULLPTR));
        label_2->setText(QApplication::translate("Inbox", "Tytu\305\202:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Inbox", "Tre\305\233\304\207:", Q_NULLPTR));
        label_4->setText(QString());
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Inbox: public Ui_Inbox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INBOX_H
