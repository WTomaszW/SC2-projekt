/********************************************************************************
** Form generated from reading UI file 'interface.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACE_H
#define UI_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
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
    QListWidget *listWidget;
    QLabel *label;
    QLabel *label_4;
    QToolBar *toolBar;
    QStatusBar *statusbar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *Interface)
    {
        if (Interface->objectName().isEmpty())
            Interface->setObjectName(QStringLiteral("Interface"));
        Interface->resize(800, 600);
        actionReceived = new QAction(Interface);
        actionReceived->setObjectName(QStringLiteral("actionReceived"));
        actionReceived->setChecked(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/IMG/received.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReceived->setIcon(icon);
        actionReceived->setVisible(true);
        actionNew_message = new QAction(Interface);
        actionNew_message->setObjectName(QStringLiteral("actionNew_message"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/rec/IMG/send.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_message->setIcon(icon1);
        actionExit = new QAction(Interface);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/rec/IMG/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon2);
        centralwidget = new QWidget(Interface);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_1 = new QLabel(centralwidget);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(20, 10, 67, 21));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(60, 10, 521, 25));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(60, 50, 521, 25));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 50, 71, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 90, 67, 17));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(490, 300, 89, 25));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(60, 90, 521, 201));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 60, 481, 331));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 0, 151, 17));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 40, 67, 17));
        Interface->setCentralWidget(centralwidget);
        listWidget->raise();
        label_1->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        label_3->raise();
        label_2->raise();
        pushButton->raise();
        plainTextEdit->raise();
        label->raise();
        label_4->raise();
        toolBar = new QToolBar(Interface);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        Interface->addToolBar(Qt::LeftToolBarArea, toolBar);
        statusbar = new QStatusBar(Interface);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Interface->setStatusBar(statusbar);
        menuBar = new QMenuBar(Interface);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 22));
        Interface->setMenuBar(menuBar);

        toolBar->addAction(actionReceived);
        toolBar->addAction(actionNew_message);
        toolBar->addAction(actionExit);

        retranslateUi(Interface);

        QMetaObject::connectSlotsByName(Interface);
    } // setupUi

    void retranslateUi(QMainWindow *Interface)
    {
        Interface->setWindowTitle(QApplication::translate("Interface", "MainWindow", Q_NULLPTR));
        actionReceived->setText(QApplication::translate("Interface", "Received", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionReceived->setToolTip(QApplication::translate("Interface", "Received", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionNew_message->setText(QApplication::translate("Interface", "New message", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionNew_message->setToolTip(QApplication::translate("Interface", "New message", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionExit->setText(QApplication::translate("Interface", "Exit", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionExit->setToolTip(QApplication::translate("Interface", "Exir", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_1->setText(QApplication::translate("Interface", "Do:", Q_NULLPTR));
        label_3->setText(QApplication::translate("Interface", "Tytu\305\202:", Q_NULLPTR));
        label_2->setText(QApplication::translate("Interface", "Tre\305\233\304\207:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Interface", "Wy\305\233lij", Q_NULLPTR));
        plainTextEdit->setPlainText(QString());
        label->setText(QApplication::translate("Interface", "Odebrane wiadmo\305\233ci", Q_NULLPTR));
        label_4->setText(QApplication::translate("Interface", "Tytu\305\202", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("Interface", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Interface: public Ui_Interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACE_H
