#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QColorDialog>
#include <QTextStream>
#include <QTimer>
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
    QTimer timer_x;
    QTimer timer_y;

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
    void on_pushButton_5_released();
    void on_pushButton_7_pressed();
    void on_pushButton_6_released();
    void on_pushButton_10_released();
    void on_pushButton_11_released();
    void timeout();
    void timeout2();
    void on_pushButton_12_released();
    void on_pushButton_9_released();
    void on_pushButton_8_released();
    void on_pushButton_inrange_upper_released();
    void on_tabWidget_4_currentChanged(int index);
    void on_pushButton_inrange_lower_released();
    void on_horizontalSlider_R_base_valueChanged(int value);
    void on_horizontalSlider_G_base_valueChanged(int value);
    void on_horizontalSlider_B_base_valueChanged(int value);
    void on_horizontalSlider_R_delta_valueChanged(int value);
    void on_horizontalSlider_G_delta_valueChanged(int value);
    void on_horizontalSlider_B_delta_valueChanged(int value);
};

#endif // MAINWINDOW_H
