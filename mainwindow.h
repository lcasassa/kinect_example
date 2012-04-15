#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "thread.h"

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
private slots:
    void imageReady();

    void on_doubleSpinBox_threshold1_valueChanged(double arg1);
    void on_doubleSpinBox_threshold2_valueChanged(double arg1);
    void on_pushButton_released();
    void on_spinBox_hl_valueChanged(int arg1);
};

#endif // MAINWINDOW_H
