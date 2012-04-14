#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(&t, SIGNAL(imageReady()), this, SLOT(imageReady()));
    t.start();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::imageReady()
{
    t.mutex.lock();

    t.mutex.unlock();
}
