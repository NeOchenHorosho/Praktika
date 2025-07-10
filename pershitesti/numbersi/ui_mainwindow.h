/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit_first;
    QTextEdit *textEdit_second;
    QTextEdit *textEdit_result;
    QPushButton *pushButton_GCD;
    QPushButton *pushButton_is_prime;
    QLabel *label_is_prime;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        textEdit_first = new QTextEdit(centralwidget);
        textEdit_first->setObjectName("textEdit_first");
        textEdit_first->setGeometry(QRect(160, 80, 151, 41));
        textEdit_second = new QTextEdit(centralwidget);
        textEdit_second->setObjectName("textEdit_second");
        textEdit_second->setGeometry(QRect(160, 130, 151, 41));
        textEdit_result = new QTextEdit(centralwidget);
        textEdit_result->setObjectName("textEdit_result");
        textEdit_result->setGeometry(QRect(160, 180, 151, 41));
        textEdit_result->setReadOnly(true);
        pushButton_GCD = new QPushButton(centralwidget);
        pushButton_GCD->setObjectName("pushButton_GCD");
        pushButton_GCD->setGeometry(QRect(320, 80, 81, 25));
        pushButton_is_prime = new QPushButton(centralwidget);
        pushButton_is_prime->setObjectName("pushButton_is_prime");
        pushButton_is_prime->setGeometry(QRect(70, 80, 81, 25));
        label_is_prime = new QLabel(centralwidget);
        label_is_prime->setObjectName("label_is_prime");
        label_is_prime->setGeometry(QRect(210, 40, 54, 17));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_GCD->setText(QCoreApplication::translate("MainWindow", "\320\235\320\236\320\232", nullptr));
        pushButton_is_prime->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\321\202\320\276\320\265?", nullptr));
        label_is_prime->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
