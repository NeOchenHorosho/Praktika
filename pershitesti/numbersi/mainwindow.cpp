#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "numchici.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_is_prime_clicked()
{
    first = ui->textEdit_first->toPlainText().toInt();
    if(first.IsPrime())
    {
        ui->label_is_prime->setText("ага");
    }
    else
    {
        ui->label_is_prime->setText("не");
    }
}


void MainWindow::on_pushButton_GCD_clicked()
{
    first = ui->textEdit_first->toPlainText().toInt();
    second = ui->textEdit_second->toPlainText().toInt();
    result = first.NOD(second);
    ui->textEdit_result->setPlainText(QString::number(result.get()));
}

