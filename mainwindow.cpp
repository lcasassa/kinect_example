#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    quadrotor = new Quadrotor();
//    serial = new Serial();
//    connect(serial, SIGNAL(nuevosDatos(QList<int>)), this, SLOT(nuevosDatos(QList<int>)));
    connect(&quadrotor, SIGNAL(sendToQuadrotor(QByteArray)), &serial, SLOT(send(QByteArray)));
//    connect(quadrotor, SIGNAL(sendToQuadrotor(QByteArray)), this, SLOT(serialTextSend(QByteArray)));
    connect(&serial, SIGNAL(serialTextReceive(QByteArray)), &quadrotor, SLOT(recieve(QByteArray)));
//    connect(serial, SIGNAL(serialTextReceive(QByteArray)), this, SLOT(serialTextReceive(QByteArray)));

    if(!serial.isOpen()) {
        /*
        QMessageBox msgBox;
        msgBox.setText("No se pudo abrir la puerta serial");
        msgBox.exec();
        */
//        exit(-1);
    }






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
    t.pre_pre_detector = ui->tabWidget_4->currentIndex();
    t.start();

    connect(&timer_x, SIGNAL(timeout()), this, SLOT(timeout()));
    connect(&timer_y, SIGNAL(timeout()), this, SLOT(timeout2()));

    ui->pushButton_inrange_upper->setStyleSheet(QString("background-color: rgb(%1, %2, %3);").arg(t.inrange_upper.red()).arg(t.inrange_upper.green()).arg(t.inrange_upper.blue()));
    ui->pushButton_inrange_lower->setStyleSheet(QString("background-color: rgb(%1, %2, %3);").arg(t.inrange_lower.red()).arg(t.inrange_lower.green()).arg(t.inrange_lower.blue()));


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
    ui->label_ym->setText(QString::number(t.ym,'f',2));
    ui->label_teta->setText(QString::number(t.teta,'f',2));
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
    if(t.isRunning()) {
        int row = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(row);
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(QString::number(ui->spinBox_servo_x->value())));
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(ui->label_teta->text()));
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(QString::number(ui->spinBox_servo_y->value())));
        ui->tableWidget->setItem(row, 3, new QTableWidgetItem(ui->label_ym->text()));
    } else {
        if(timer_x.isActive()) {
            on_pushButton_11_released();
        }
        if(timer_y.isActive()) {
            on_pushButton_12_released();
        }
    }
}


void MainWindow::on_pushButton_3_released()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    "/home/linus/Escritorio",
                                                    tr("CVS (*.cvs)"));
    QFile file(fileName);

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate))
        return;

    QTextStream out(&file);

    for(int i=0; i < ui->tableWidget->rowCount(); i++) {
        for(int j=0; j < ui->tableWidget->columnCount(); j++) {
          out << ui->tableWidget->item(i,j)->text() << ",";
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

void MainWindow::on_pushButton_servo_x_released()
{
    quadrotor.setE1_offset(ui->spinBox_servo_x->value());
    quadrotor.setE1_ganancia(0);
}

void MainWindow::on_pushButton_servo_y_released()
{
    quadrotor.setE2_offset(ui->spinBox_servo_y->value());
    quadrotor.setE2_ganancia(0);
}

void MainWindow::on_pushButton_5_released()
{
    //ui->tableWidget->removeRow(ui->tableWidget->currentRow());
    ui->tableWidget->removeRow(ui->tableWidget->rowCount()-1);
}

void MainWindow::on_pushButton_7_pressed()
{
    ui->spinBox_servo_x->setValue(ui->spinBox_servo_x->value() + 1);
    on_pushButton_servo_x_released();
}

void MainWindow::on_pushButton_6_released()
{
    ui->spinBox_servo_x->setValue(ui->spinBox_servo_x->value() - 1);
    on_pushButton_servo_x_released();
}

void MainWindow::on_pushButton_10_released()
{
    t.terminate();
}

void MainWindow::on_pushButton_11_released()
{
    if(!timer_x.isActive())
        timer_x.start(200);
    else
        timer_x.stop();
}

void MainWindow::timeout()
{
    static bool sentido = true;
    static bool motor_o_guardar = false;
    static int count=1;
    if(motor_o_guardar) {
        count=1;
        if(sentido) {
            on_pushButton_7_pressed(); // X+=10
            if(ui->spinBox_servo_x->value() >= 430)
                sentido = false;
        } else {
            on_pushButton_6_released(); // X-=10
            if(ui->spinBox_servo_x->value() <= -140)
                sentido = true;
        }
        motor_o_guardar = false;
    } else {
        if((count++%5)==0)
            motor_o_guardar = true;
        on_pushButton_2_released(); // salvar a archivo
    }
}

void MainWindow::on_pushButton_12_released()
{
    if(!timer_y.isActive())
        timer_y.start(200);
    else
        timer_y.stop();
}

void MainWindow::timeout2()
{
    static bool sentido = true;
    static bool motor_o_guardar = false;
    static int count=1;
    if(motor_o_guardar) {
        count=1;
        if(sentido) {
            on_pushButton_9_released(); // X+=10
            if(ui->spinBox_servo_y->value() >= 670)
                sentido = false;
        } else {
            on_pushButton_8_released(); // X-=10
            if(ui->spinBox_servo_y->value() <= -800)
                sentido = true;
        }
        motor_o_guardar = false;
    } else {
        if((count++%5)==0)
            motor_o_guardar = true;
        on_pushButton_2_released(); // salvar a archivo
    }
}

void MainWindow::on_pushButton_9_released()
{
    ui->spinBox_servo_y->setValue(ui->spinBox_servo_y->value() + 1);
    on_pushButton_servo_y_released();
}

void MainWindow::on_pushButton_8_released()
{
    ui->spinBox_servo_y->setValue(ui->spinBox_servo_y->value() - 1);
    on_pushButton_servo_y_released();

}


void MainWindow::on_pushButton_inrange_upper_released()
{
    QColor color = QColorDialog::getColor(t.inrange_upper, this);
    if (color.isValid())
    {
        t.inrange_upper = color;
        ui->pushButton_inrange_upper->setStyleSheet(QString("background-color: rgb(%1, %2, %3);").arg(t.inrange_upper.red()).arg(t.inrange_upper.green()).arg(t.inrange_upper.blue()));
    }
}

void MainWindow::on_tabWidget_4_currentChanged(int index)
{
    t.pre_pre_detector = index;
}

void MainWindow::on_pushButton_inrange_lower_released()
{
    QColor color = QColorDialog::getColor(t.inrange_lower, this);
    if (color.isValid())
    {
        t.inrange_lower = color;
        ui->pushButton_inrange_lower->setStyleSheet(QString("background-color: rgb(%1, %2, %3);").arg(t.inrange_lower.red()).arg(t.inrange_lower.green()).arg(t.inrange_lower.blue()));
    }
}

void MainWindow::on_horizontalSlider_R_base_valueChanged(int value)
{
    t.inrange_upper.setRed(value);
    ui->pushButton_inrange_upper->setStyleSheet(QString("background-color: rgb(%1, %2, %3);").arg(t.inrange_upper.red()).arg(t.inrange_upper.green()).arg(t.inrange_upper.blue()));
}

void MainWindow::on_horizontalSlider_G_base_valueChanged(int value)
{
    t.inrange_upper.setGreen(value);
    ui->pushButton_inrange_upper->setStyleSheet(QString("background-color: rgb(%1, %2, %3);").arg(t.inrange_upper.red()).arg(t.inrange_upper.green()).arg(t.inrange_upper.blue()));
}

void MainWindow::on_horizontalSlider_B_base_valueChanged(int value)
{
    t.inrange_upper.setBlue(value);
    ui->pushButton_inrange_upper->setStyleSheet(QString("background-color: rgb(%1, %2, %3);").arg(t.inrange_upper.red()).arg(t.inrange_upper.green()).arg(t.inrange_upper.blue()));
}

void MainWindow::on_horizontalSlider_R_delta_valueChanged(int value)
{
    t.inrange_lower.setRed(value);
}

void MainWindow::on_horizontalSlider_G_delta_valueChanged(int value)
{
    t.inrange_lower.setGreen(value);
}

void MainWindow::on_horizontalSlider_B_delta_valueChanged(int value)
{
    t.inrange_lower.setBlue(value);
}
