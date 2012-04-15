#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(&t, SIGNAL(imageReady()), this, SLOT(imageReady()));
//    t.start();
    t.t1 = ui->doubleSpinBox_threshold1->value();
    t.t2 = ui->doubleSpinBox_threshold2->value();
    t.hl = ui->spinBox_hl->value();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::imageReady()
{
    t.mutex.lock();
    ui->widget->copyImage(t.image);
    ui->widget_canny->copyImage(t.image2.scaled(QSize(320,240)));
    t.mutex.unlock();
}

void MainWindow::on_doubleSpinBox_threshold1_valueChanged(double arg1)
{
    t.t1 = arg1;
}

void MainWindow::on_doubleSpinBox_threshold2_valueChanged(double arg1)
{
    t.t2 = arg1;
}

void MainWindow::on_pushButton_released()
{
    t.start();
}

void MainWindow::on_spinBox_hl_valueChanged(int arg1)
{
    t.hl = arg1;
}
