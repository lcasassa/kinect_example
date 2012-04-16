#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(&t, SIGNAL(imageReady()), this, SLOT(imageReady()));
    t.canny_t1 = ui->doubleSpinBox_canny_threshold1->value();
    t.canny_t2 = ui->doubleSpinBox_canny_threshold2->value();
    t.hl_threshold = ui->spinBox_hl_threshold->value();
    t.hlp_threshold = ui->spinBox_hlp_threshold->value();
    t.hlp_minLineLength = ui->doubleSpinBox_hlp_minLineLength->value();
    t.hlp_maxLineGap = ui->doubleSpinBox_hlp_maxLineGap->value();
    t.detector = 1;
    t.start();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::imageReady()
{
    t.mutex.lock();
#if 0
    ui->widget->copyImage(t.image);
    ui->widget_canny->copyImage(t.image2.scaled(QSize(320,240)));
#else
    ui->widget->copyImage(t.image2);
    ui->widget_canny->copyImage(t.image.scaled(QSize(320,240)));
#endif
    ui->label_ym->setText(QString::number(t.ym));
    ui->label_teta->setText(QString::number(t.teta));
    t.mutex.unlock();
}

void MainWindow::on_pushButton_released()
{
    t.start();
}


void MainWindow::on_doubleSpinBox_canny_threshold1_valueChanged(double arg1)
{
    t.canny_t1 = arg1;
}

void MainWindow::on_doubleSpinBox_canny_threshold2_valueChanged(double arg1)
{
    t.canny_t2 = arg1;
}

void MainWindow::on_spinBox_hl_threshold_valueChanged(int arg1)
{
    t.hl_threshold = arg1;
}

void MainWindow::on_spinBox_hlp_threshold_valueChanged(int arg1)
{
    t.hlp_threshold = arg1;
}

void MainWindow::on_doubleSpinBox_hlp_minLineLength_valueChanged(double arg1)
{
    t.hlp_minLineLength = arg1;
}

void MainWindow::on_doubleSpinBox_hlp_maxLineGap_valueChanged(double arg1)
{
    t.hlp_maxLineGap = arg1;
}

void MainWindow::on_tabWidget_currentChanged(int index)
{
    t.detector = index;
}
