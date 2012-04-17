#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include "thread.h"
#include "serial.h"
#include "quadrotor.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Thread t;
    Quadrotor quadrotor;
    Serial serial;

private slots:
    void imageReady();

    void on_pushButton_released();
    void on_doubleSpinBox_canny_threshold1_valueChanged(double arg1);
    void on_doubleSpinBox_canny_threshold2_valueChanged(double arg1);
    void on_spinBox_hl_threshold_valueChanged(int arg1);
    void on_spinBox_hlp_threshold_valueChanged(int arg1);
    void on_doubleSpinBox_hlp_minLineLength_valueChanged(double arg1);
    void on_doubleSpinBox_hlp_maxLineGap_valueChanged(double arg1);
    void on_tabWidget_currentChanged(int index);
    void on_doubleSpinBox_at_maxValue_valueChanged(double arg1);
    void on_spinBox_at_blockSize_valueChanged(int arg1);
    void on_doubleSpinBox_at_C_valueChanged(double arg1);
    void on_tabWidget_2_currentChanged(int index);
    void on_pushButton_2_released();
    void on_pushButton_3_released();
    void on_pushButton_4_released();
    void on_pushButton_servo_x_released();
    void on_pushButton_servo_y_released();
};

#endif // MAINWINDOW_H
