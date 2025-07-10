#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPainter>
#include <QRandomGenerator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow),
    m_logo("dvd_logo.png"),
    m_pos(0, 0),
    m_dx(3), m_dy(3)
{
    ui->setupUi(this);
    QSize area = this->size();
    m_pos.setX(QRandomGenerator::global()->bounded(area.width()  - m_logo.width()));
    m_pos.setY(QRandomGenerator::global()->bounded(area.height() - m_logo.height()));
    if (QRandomGenerator::global()->bounded(2)) m_dx = -m_dx;
    if (QRandomGenerator::global()->bounded(2)) m_dy = -m_dy;

    // Таймер для анимации
    m_timer = new QTimer(this);
    connect(m_timer, &QTimer::timeout, this, &MainWindow::onTimeout);
    m_timer->start(10);
}

MainWindow::~MainWindow() = default;

void MainWindow::paintEvent(QPaintEvent *) {
    QPainter p(this);
    p.drawPixmap(m_pos, m_logo);
}

void MainWindow::onTimeout() {
    m_pos.rx() += m_dx;
    m_pos.ry() += m_dy;

    if (m_pos.x() <= 0 || m_pos.x() + m_logo.width() >= width())
        m_dx = -m_dx;
    if (m_pos.y() <= 0 || m_pos.y() + m_logo.height() >= height())
        m_dy = -m_dy;

    update();
}
