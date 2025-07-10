#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QTableWidget>
#include "comptablemodel.h"
#include "COMP.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_comp_load_clicked();
    void on_pushButton_comp_save_clicked();
    void on_pushButton_comp_unite_clicked();
    void on_pushButton_comp_find_clicked();

    void on_pushButton_bag_load_clicked();
    void on_pushButton_bag_save_clicked();
    void on_pushButton_bag_unite_clicked();
    void on_pushButton_bag_find_clicked();

private:
    Ui::MainWindow *ui;
    CompTableModel *modelCompFirst   = nullptr;
    CompTableModel *modelCompSecond  = nullptr;
    CompTableModel *modelCompUnited  = nullptr;
    COMP<Comp> comp_first, comp_second, comp_united;
    COMP<Bag> bag_first, bag_second, bag_united;

    void fillBagTable  (COMP<Bag>&  src, QTableWidget *table);
};
#endif // MAINWINDOW_H
