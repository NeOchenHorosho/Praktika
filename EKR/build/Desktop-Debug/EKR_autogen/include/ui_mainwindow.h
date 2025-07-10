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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_comp_load;
    QPushButton *pushButton_comp_save;
    QPushButton *pushButton_comp_unite;
    QPushButton *pushButton_comp_find;
    QTextEdit *textEdit_comp_find_name;
    QTextEdit *textEdit_comp_find_result;
    QLabel *label_comp_united;
    QLabel *label_comp_second;
    QLabel *label_comp_first;
    QPushButton *pushButton_bag_unite;
    QTableWidget *tableWidget_bag_united;
    QTextEdit *textEdit_bag_find_result;
    QLabel *label_bag_second;
    QPushButton *pushButton_bag_load;
    QTextEdit *textEdit_bag_find_name;
    QLabel *label_bag_first;
    QPushButton *pushButton_bag_find;
    QTableWidget *tableWidget_bag_first;
    QPushButton *pushButton_bag_save;
    QTableWidget *tableWidget_bag_second;
    QLabel *label_bag_united;
    QTableView *tableView_comp_first;
    QTableView *tableView_comp_second;
    QTableView *tableView_comp_united;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1250, 880);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton_comp_load = new QPushButton(centralwidget);
        pushButton_comp_load->setObjectName("pushButton_comp_load");
        pushButton_comp_load->setGeometry(QRect(40, 60, 91, 31));
        pushButton_comp_save = new QPushButton(centralwidget);
        pushButton_comp_save->setObjectName("pushButton_comp_save");
        pushButton_comp_save->setGeometry(QRect(40, 100, 91, 31));
        pushButton_comp_unite = new QPushButton(centralwidget);
        pushButton_comp_unite->setObjectName("pushButton_comp_unite");
        pushButton_comp_unite->setGeometry(QRect(140, 100, 91, 31));
        pushButton_comp_find = new QPushButton(centralwidget);
        pushButton_comp_find->setObjectName("pushButton_comp_find");
        pushButton_comp_find->setGeometry(QRect(140, 60, 91, 31));
        textEdit_comp_find_name = new QTextEdit(centralwidget);
        textEdit_comp_find_name->setObjectName("textEdit_comp_find_name");
        textEdit_comp_find_name->setGeometry(QRect(250, 60, 251, 31));
        textEdit_comp_find_result = new QTextEdit(centralwidget);
        textEdit_comp_find_result->setObjectName("textEdit_comp_find_result");
        textEdit_comp_find_result->setGeometry(QRect(250, 100, 251, 31));
        textEdit_comp_find_result->setReadOnly(true);
        label_comp_united = new QLabel(centralwidget);
        label_comp_united->setObjectName("label_comp_united");
        label_comp_united->setGeometry(QRect(40, 610, 451, 20));
        label_comp_second = new QLabel(centralwidget);
        label_comp_second->setObjectName("label_comp_second");
        label_comp_second->setGeometry(QRect(40, 370, 451, 20));
        label_comp_first = new QLabel(centralwidget);
        label_comp_first->setObjectName("label_comp_first");
        label_comp_first->setGeometry(QRect(40, 150, 451, 20));
        pushButton_bag_unite = new QPushButton(centralwidget);
        pushButton_bag_unite->setObjectName("pushButton_bag_unite");
        pushButton_bag_unite->setGeometry(QRect(680, 100, 91, 31));
        tableWidget_bag_united = new QTableWidget(centralwidget);
        tableWidget_bag_united->setObjectName("tableWidget_bag_united");
        tableWidget_bag_united->setGeometry(QRect(580, 640, 461, 192));
        textEdit_bag_find_result = new QTextEdit(centralwidget);
        textEdit_bag_find_result->setObjectName("textEdit_bag_find_result");
        textEdit_bag_find_result->setGeometry(QRect(790, 100, 251, 31));
        textEdit_bag_find_result->setReadOnly(true);
        label_bag_second = new QLabel(centralwidget);
        label_bag_second->setObjectName("label_bag_second");
        label_bag_second->setGeometry(QRect(580, 370, 451, 20));
        pushButton_bag_load = new QPushButton(centralwidget);
        pushButton_bag_load->setObjectName("pushButton_bag_load");
        pushButton_bag_load->setGeometry(QRect(580, 60, 91, 31));
        textEdit_bag_find_name = new QTextEdit(centralwidget);
        textEdit_bag_find_name->setObjectName("textEdit_bag_find_name");
        textEdit_bag_find_name->setGeometry(QRect(790, 60, 251, 31));
        label_bag_first = new QLabel(centralwidget);
        label_bag_first->setObjectName("label_bag_first");
        label_bag_first->setGeometry(QRect(580, 150, 451, 20));
        pushButton_bag_find = new QPushButton(centralwidget);
        pushButton_bag_find->setObjectName("pushButton_bag_find");
        pushButton_bag_find->setGeometry(QRect(680, 60, 91, 31));
        tableWidget_bag_first = new QTableWidget(centralwidget);
        tableWidget_bag_first->setObjectName("tableWidget_bag_first");
        tableWidget_bag_first->setGeometry(QRect(580, 181, 461, 181));
        pushButton_bag_save = new QPushButton(centralwidget);
        pushButton_bag_save->setObjectName("pushButton_bag_save");
        pushButton_bag_save->setGeometry(QRect(580, 100, 91, 31));
        tableWidget_bag_second = new QTableWidget(centralwidget);
        tableWidget_bag_second->setObjectName("tableWidget_bag_second");
        tableWidget_bag_second->setGeometry(QRect(580, 400, 461, 192));
        label_bag_united = new QLabel(centralwidget);
        label_bag_united->setObjectName("label_bag_united");
        label_bag_united->setGeometry(QRect(580, 610, 451, 20));
        tableView_comp_first = new QTableView(centralwidget);
        tableView_comp_first->setObjectName("tableView_comp_first");
        tableView_comp_first->setGeometry(QRect(40, 181, 461, 181));
        tableView_comp_second = new QTableView(centralwidget);
        tableView_comp_second->setObjectName("tableView_comp_second");
        tableView_comp_second->setGeometry(QRect(40, 400, 461, 181));
        tableView_comp_united = new QTableView(centralwidget);
        tableView_comp_united->setObjectName("tableView_comp_united");
        tableView_comp_united->setGeometry(QRect(40, 640, 461, 181));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1250, 22));
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
        pushButton_comp_load->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
        pushButton_comp_save->setText(QCoreApplication::translate("MainWindow", "\321\201\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton_comp_unite->setText(QCoreApplication::translate("MainWindow", "\320\276\320\261\321\212\320\265\320\264\320\270\320\275\320\265\320\275\320\270\320\265", nullptr));
        pushButton_comp_find->setText(QCoreApplication::translate("MainWindow", "\320\275\320\260\320\271\321\202\320\270", nullptr));
        label_comp_united->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_comp_second->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_comp_first->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton_bag_unite->setText(QCoreApplication::translate("MainWindow", "\320\276\320\261\321\212\320\265\320\264\320\270\320\275\320\265\320\275\320\270\320\265", nullptr));
        label_bag_second->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton_bag_load->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
        label_bag_first->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton_bag_find->setText(QCoreApplication::translate("MainWindow", "\320\275\320\260\320\271\321\202\320\270", nullptr));
        pushButton_bag_save->setText(QCoreApplication::translate("MainWindow", "\321\201\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        label_bag_united->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
