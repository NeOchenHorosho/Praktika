#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QFileDialog>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)     , modelCompFirst (new CompTableModel(this, &comp_first))
    , modelCompSecond(new CompTableModel(this, &comp_second))
    , modelCompUnited(new CompTableModel(this, &comp_united))
{
    ui->setupUi(this);

    ui->tableView_comp_first ->setModel(modelCompFirst);
    ui->tableView_comp_second->setModel(modelCompSecond);
    ui->tableView_comp_united->setModel(modelCompUnited);

    ui->tableView_comp_first ->setSortingEnabled(true);
    ui->tableView_comp_second->setSortingEnabled(true);
    ui->tableView_comp_united->setSortingEnabled(true);

    const QStringList bagHdr  = {"Наименование", "Количество", "Секция"};
    for (QTableWidget *tbl : { ui->tableWidget_bag_first, ui->tableWidget_bag_second, ui->tableWidget_bag_united })
    {
        tbl->setColumnCount(3);
        tbl->setHorizontalHeaderLabels(bagHdr);
    }
}


void MainWindow::on_pushButton_comp_load_clicked()
{
    QFile file1("comp_first"), file2("comp_second");
    if (file1.open(QIODevice::ReadOnly | QIODevice::Text) &&
        file2.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in1(&file1), in2(&file2);

        in1 >> comp_first;
        in2 >> comp_second;
        file1.close();  file2.close();
        modelCompFirst ->setSource(&comp_first);
        modelCompSecond->setSource(&comp_second);

        ui->label_comp_first ->setText(comp_first.GetTitle());
        ui->label_comp_second->setText(comp_second.GetTitle());

        ui->tableView_comp_first ->resizeColumnsToContents();
        ui->tableView_comp_second->resizeColumnsToContents();
    }
}

void MainWindow::on_pushButton_comp_unite_clicked()
{
    comp_united = comp_first + comp_second;
    modelCompUnited->setSource(&comp_united);

    ui->label_comp_united->setText(comp_united.GetTitle());
    ui->tableView_comp_united->resizeColumnsToContents();
}

void MainWindow::on_pushButton_comp_find_clicked()
{
    const QString key = ui->textEdit_comp_find_name->toPlainText().trimmed();
    const Comp res   = comp_united.find_product(key);
    if (res.name != "none")
        ui->textEdit_comp_find_result->setText(QString(res.name+ " " + res.section + " " + QString::number(res.price)));
    else
        ui->textEdit_comp_find_result->setText("Не найдено");
}


void MainWindow::on_pushButton_comp_save_clicked()
{
    if (!comp_united.GetCount()) {
        return;
    }
    const QString out = "comp_united";
    QFile file(out);
    if (file.open(QIODevice::WriteOnly|QIODevice::Text)) {
        QTextStream os(&file);
        os << bag_united;
        file.close();
    }
}

void MainWindow::fillBagTable(COMP<Bag>& src, QTableWidget *table)
{
    table->setRowCount(static_cast<int>(src.GetCount()));
    for (int i = 0; i < src.GetCount(); ++i) {
        const Bag &b = src[i];
        table->setItem(i, 0, new QTableWidgetItem(b.name));
        table->setItem(i, 1, new QTableWidgetItem(QString::number(b.ammount)));
        table->setItem(i, 2, new QTableWidgetItem(b.section));
    }
    table->resizeColumnsToContents();
}


void MainWindow::on_pushButton_bag_load_clicked()
{
    QString f1 = "bag_first";
    QString f2 = "bag_second";

    QFile file1(f1), file2(f2);
    if (file1.open(QIODevice::ReadOnly|QIODevice::Text) && file2.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        QTextStream in1(&file1), in2(&file2);
        in1 >> bag_first;
        in2 >> bag_second;
        file1.close(); file2.close();

        fillBagTable(bag_first,  ui->tableWidget_bag_first);
        fillBagTable(bag_second, ui->tableWidget_bag_second);
        ui->label_bag_first ->setText(bag_first .GetTitle());
        ui->label_bag_second->setText(bag_second.GetTitle());
    }
}

void MainWindow::on_pushButton_bag_unite_clicked()
{
    bag_united = bag_first + bag_second;
    fillBagTable(bag_united, ui->tableWidget_bag_united);
    ui->label_bag_united->setText(bag_united.GetTitle());
}


void MainWindow::on_pushButton_bag_find_clicked()
{
    const QString key = ui->textEdit_bag_find_name->toPlainText();
    Bag res = bag_united.find_product(key);
    if (res.name != "none")
        ui->textEdit_bag_find_result->setText(res.name+ " " + QString::number(res.ammount) + " " + res.section);
    else
        ui->textEdit_bag_find_result->setText("Не найдено");
}


void MainWindow::on_pushButton_bag_save_clicked()
{
    if (!bag_united.GetCount()) {
        return;
    }
    const QString out = "bag_united";
    if (out.isEmpty()) return;
    QFile file(out);
    if (file.open(QIODevice::WriteOnly|QIODevice::Text)) {
        QTextStream os(&file);
        os << bag_united;
        file.close();
    }
}

MainWindow::~MainWindow() { delete ui; }
