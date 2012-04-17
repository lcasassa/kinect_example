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
    t.at_maxValue = ui->doubleSpinBox_at_maxValue->value();
    t.at_blockSize = ui->spinBox_at_blockSize->value();
    t.at_C = ui->doubleSpinBox_at_C->value();
    t.pre_detector = ui->tabWidget_2->currentIndex();
    t.detector = ui->tabWidget->currentIndex();
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
    ui->label_lineas_detectadas->setText(QString::number(t.lineas_detectadas));
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

void MainWindow::on_doubleSpinBox_at_maxValue_valueChanged(double arg1)
{
    t.at_maxValue = arg1;
}

void MainWindow::on_spinBox_at_blockSize_valueChanged(int arg1)
{
    t.at_blockSize = arg1;
}

void MainWindow::on_doubleSpinBox_at_C_valueChanged(double arg1)
{
    t.at_C = arg1;
}

void MainWindow::on_tabWidget_2_currentChanged(int index)
{
    t.pre_detector = index;
}

void MainWindow::on_pushButton_2_released()
{
    int row = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(row);
    ui->tableWidget->setItem(row, 0, new QTableWidgetItem(ui->label_ym->text()));
    ui->tableWidget->setItem(row, 1, new QTableWidgetItem(ui->label_teta->text()));
}


void MainWindow::on_pushButton_3_released()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    "/home/linus/Escritorio",
                                                    tr("CVS (*.cvs)"));
    QFile file(fileName);

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QTextStream out(&file);

    for(int i=0; i < ui->tableWidget->rowCount(); i++) {
        for(int j=0; j < ui->tableWidget->columnCount(); j++) {
          out << ui->tableWidget->item(i,j)->text() << ";";
        }
        out << "\r\n";
    }

    file.close();
}

void MainWindow::on_pushButton_4_released()
{
    for (int i = ui->tableWidget->rowCount()-1; 0<=i; i--)
            ui->tableWidget->removeRow(i);
}
