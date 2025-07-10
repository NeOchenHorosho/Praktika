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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionRed;
    QAction *actionGreen;
    QAction *actionBlue;
    QAction *actionClear;
    QAction *actionCustomColor;
    QAction *actionSquare;
    QAction *actionRomb;
    QAction *actionTriangle;
    QAction *actionSave;
    QAction *actionLoad;
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QMenuBar *menubar;
    QMenu *menuOptions;
    QMenu *menuFigures;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1050, 816);
        actionRed = new QAction(MainWindow);
        actionRed->setObjectName("actionRed");
        actionGreen = new QAction(MainWindow);
        actionGreen->setObjectName("actionGreen");
        actionBlue = new QAction(MainWindow);
        actionBlue->setObjectName("actionBlue");
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName("actionClear");
        actionCustomColor = new QAction(MainWindow);
        actionCustomColor->setObjectName("actionCustomColor");
        actionSquare = new QAction(MainWindow);
        actionSquare->setObjectName("actionSquare");
        actionRomb = new QAction(MainWindow);
        actionRomb->setObjectName("actionRomb");
        actionTriangle = new QAction(MainWindow);
        actionTriangle->setObjectName("actionTriangle");
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName("actionLoad");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(-5, 0, 1061, 801));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1050, 21));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName("menuOptions");
        menuFigures = new QMenu(menubar);
        menuFigures->setObjectName("menuFigures");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuOptions->menuAction());
        menubar->addAction(menuFigures->menuAction());
        menuOptions->addAction(actionRed);
        menuOptions->addAction(actionGreen);
        menuOptions->addAction(actionBlue);
        menuOptions->addAction(actionCustomColor);
        menuOptions->addAction(actionClear);
        menuFigures->addAction(actionSquare);
        menuFigures->addAction(actionRomb);
        menuFigures->addAction(actionTriangle);
        menuFigures->addAction(actionSave);
        menuFigures->addAction(actionLoad);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionRed->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        actionGreen->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        actionBlue->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        actionClear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        actionCustomColor->setText(QCoreApplication::translate("MainWindow", "Custom Color", nullptr));
        actionSquare->setText(QCoreApplication::translate("MainWindow", "Square", nullptr));
        actionRomb->setText(QCoreApplication::translate("MainWindow", "Romb", nullptr));
        actionTriangle->setText(QCoreApplication::translate("MainWindow", "Triangle", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionLoad->setText(QCoreApplication::translate("MainWindow", "Load", nullptr));
        menuOptions->setTitle(QCoreApplication::translate("MainWindow", "Options", nullptr));
        menuFigures->setTitle(QCoreApplication::translate("MainWindow", "Figures", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
