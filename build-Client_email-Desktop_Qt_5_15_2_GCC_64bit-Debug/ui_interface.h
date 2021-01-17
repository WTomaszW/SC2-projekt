/********************************************************************************
** Form generated from reading UI file 'interface.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACE_H
#define UI_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Interface
{
public:
    QAction *actionReceived;
    QAction *actionNew_message;
    QAction *actionExit;
    QWidget *centralwidget;
    QLabel *label_1;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *pushButton;
    QPlainTextEdit *plainTextEdit;
    QToolBar *toolBar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Interface)
    {
        if (Interface->objectName().isEmpty())
            Interface->setObjectName(QString::fromUtf8("Interface"));
        Interface->resize(800, 600);
        actionReceived = new QAction(Interface);
        actionReceived->setObjectName(QString::fromUtf8("actionReceived"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/IMG/received.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReceived->setIcon(icon);
        actionReceived->setVisible(true);
        actionNew_message = new QAction(Interface);
        actionNew_message->setObjectName(QString::fromUtf8("actionNew_message"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rec/IMG/send.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_message->setIcon(icon1);
        actionExit = new QAction(Interface);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rec/IMG/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon2);
        centralwidget = new QWidget(Interface);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_1 = new QLabel(centralwidget);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(20, 10, 67, 21));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(60, 10, 521, 25));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(60, 50, 521, 25));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 50, 71, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 90, 67, 17));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(490, 300, 89, 25));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(60, 90, 521, 201));
        Interface->setCentralWidget(centralwidget);
        toolBar = new QToolBar(Interface);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Interface->addToolBar(Qt::LeftToolBarArea, toolBar);
        statusbar = new QStatusBar(Interface);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Interface->setStatusBar(statusbar);

        toolBar->addAction(actionReceived);
        toolBar->addAction(actionNew_message);
        toolBar->addAction(actionExit);

        retranslateUi(Interface);

        QMetaObject::connectSlotsByName(Interface);
    } // setupUi

    void retranslateUi(QMainWindow *Interface)
    {
        Interface->setWindowTitle(QCoreApplication::translate("Interface", "MainWindow", nullptr));
        actionReceived->setText(QCoreApplication::translate("Interface", "Received", nullptr));
#if QT_CONFIG(tooltip)
        actionReceived->setToolTip(QCoreApplication::translate("Interface", "Received", nullptr));
#endif // QT_CONFIG(tooltip)
        actionNew_message->setText(QCoreApplication::translate("Interface", "New message", nullptr));
#if QT_CONFIG(tooltip)
        actionNew_message->setToolTip(QCoreApplication::translate("Interface", "New message", nullptr));
#endif // QT_CONFIG(tooltip)
        actionExit->setText(QCoreApplication::translate("Interface", "Exit", nullptr));
#if QT_CONFIG(tooltip)
        actionExit->setToolTip(QCoreApplication::translate("Interface", "Exir", nullptr));
#endif // QT_CONFIG(tooltip)
        label_1->setText(QCoreApplication::translate("Interface", "Do:", nullptr));
        label_3->setText(QCoreApplication::translate("Interface", "Tytu\305\202:", nullptr));
        label_2->setText(QCoreApplication::translate("Interface", "Tre\305\233\304\207:", nullptr));
        pushButton->setText(QCoreApplication::translate("Interface", "Wy\305\233lij", nullptr));
        plainTextEdit->setPlainText(QString());
        toolBar->setWindowTitle(QCoreApplication::translate("Interface", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Interface: public Ui_Interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACE_H
