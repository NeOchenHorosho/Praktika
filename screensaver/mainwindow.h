#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPoint>
#include <QPixmap>
#include <QTimer>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
protected:
    void paintEvent(QPaintEvent *event) override;
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void onTimeout();

private:
    QPixmap m_logo;
    QPoint  m_pos;
    int     m_dx, m_dy;
    QTimer *m_timer;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
