/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Apr 17 15:56:42 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <pintor.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget_2;
    QWidget *tab_4;
    QFormLayout *formLayout_6;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox_canny_threshold1;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_canny_threshold2;
    QWidget *tab_5;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBox_at_maxValue;
    QLabel *label_10;
    QSpinBox *spinBox_at_blockSize;
    QDoubleSpinBox *doubleSpinBox_at_C;
    QLabel *label_11;
    QWidget *tab_6;
    QWidget *tab_7;
    QTabWidget *tabWidget;
    QWidget *tab;
    QFormLayout *formLayout_3;
    QLabel *label_3;
    QSpinBox *spinBox_hl_threshold;
    QWidget *tab_2;
    QFormLayout *formLayout;
    QLabel *label_4;
    QSpinBox *spinBox_hlp_threshold;
    QDoubleSpinBox *doubleSpinBox_hlp_minLineLength;
    QDoubleSpinBox *doubleSpinBox_hlp_maxLineGap;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *tab_3;
    QWidget *widget_3;
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QLabel *label_ym;
    QLabel *label_9;
    QLabel *label_teta;
    QLabel *label_12;
    QLabel *label_lineas_detectadas;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    Pintor *widget_canny;
    QTabWidget *tabWidget_3;
    QWidget *tab_8;
    QVBoxLayout *verticalLayout_3;
    Pintor *widget;
    QGridLayout *gridLayout;
    QWidget *tab_9;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *spinBox_servo_x;
    QPushButton *pushButton_servo_x;
    QSlider *horizontalSlider_servo_x;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *spinBox_servo_y;
    QPushButton *pushButton_servo_y;
    QSlider *horizontalSlider_servo_y;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget_10;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer_2;
    QTableWidget *tableWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1002, 759);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget_4 = new QWidget(centralWidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        verticalLayout = new QVBoxLayout(widget_4);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_2 = new QWidget(widget_4);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget_2 = new QTabWidget(widget_2);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        formLayout_6 = new QFormLayout(tab_4);
        formLayout_6->setSpacing(6);
        formLayout_6->setContentsMargins(11, 11, 11, 11);
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        label = new QLabel(tab_4);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label);

        doubleSpinBox_canny_threshold1 = new QDoubleSpinBox(tab_4);
        doubleSpinBox_canny_threshold1->setObjectName(QString::fromUtf8("doubleSpinBox_canny_threshold1"));
        doubleSpinBox_canny_threshold1->setMaximum(1000);
        doubleSpinBox_canny_threshold1->setSingleStep(20);
        doubleSpinBox_canny_threshold1->setValue(240);

        formLayout_6->setWidget(0, QFormLayout::FieldRole, doubleSpinBox_canny_threshold1);

        label_2 = new QLabel(tab_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, label_2);

        doubleSpinBox_canny_threshold2 = new QDoubleSpinBox(tab_4);
        doubleSpinBox_canny_threshold2->setObjectName(QString::fromUtf8("doubleSpinBox_canny_threshold2"));
        doubleSpinBox_canny_threshold2->setMaximum(1000);
        doubleSpinBox_canny_threshold2->setSingleStep(20);
        doubleSpinBox_canny_threshold2->setValue(710);

        formLayout_6->setWidget(1, QFormLayout::FieldRole, doubleSpinBox_canny_threshold2);

        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        formLayout_2 = new QFormLayout(tab_5);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_7 = new QLabel(tab_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        doubleSpinBox_at_maxValue = new QDoubleSpinBox(tab_5);
        doubleSpinBox_at_maxValue->setObjectName(QString::fromUtf8("doubleSpinBox_at_maxValue"));
        doubleSpinBox_at_maxValue->setMinimum(1);
        doubleSpinBox_at_maxValue->setMaximum(1000);
        doubleSpinBox_at_maxValue->setValue(250);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, doubleSpinBox_at_maxValue);

        label_10 = new QLabel(tab_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_10);

        spinBox_at_blockSize = new QSpinBox(tab_5);
        spinBox_at_blockSize->setObjectName(QString::fromUtf8("spinBox_at_blockSize"));
        spinBox_at_blockSize->setMinimum(3);
        spinBox_at_blockSize->setMaximum(21);
        spinBox_at_blockSize->setSingleStep(2);
        spinBox_at_blockSize->setValue(5);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, spinBox_at_blockSize);

        doubleSpinBox_at_C = new QDoubleSpinBox(tab_5);
        doubleSpinBox_at_C->setObjectName(QString::fromUtf8("doubleSpinBox_at_C"));
        doubleSpinBox_at_C->setMinimum(-1000);
        doubleSpinBox_at_C->setMaximum(1000);
        doubleSpinBox_at_C->setSingleStep(20);
        doubleSpinBox_at_C->setValue(10);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, doubleSpinBox_at_C);

        label_11 = new QLabel(tab_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_11);

        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        tabWidget_2->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        tabWidget_2->addTab(tab_7, QString());

        verticalLayout_2->addWidget(tabWidget_2);

        tabWidget = new QTabWidget(widget_2);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        formLayout_3 = new QFormLayout(tab);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_3);

        spinBox_hl_threshold = new QSpinBox(tab);
        spinBox_hl_threshold->setObjectName(QString::fromUtf8("spinBox_hl_threshold"));
        spinBox_hl_threshold->setMinimum(1);
        spinBox_hl_threshold->setMaximum(1000);
        spinBox_hl_threshold->setSingleStep(10);
        spinBox_hl_threshold->setValue(100);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, spinBox_hl_threshold);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        formLayout = new QFormLayout(tab_2);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        spinBox_hlp_threshold = new QSpinBox(tab_2);
        spinBox_hlp_threshold->setObjectName(QString::fromUtf8("spinBox_hlp_threshold"));
        spinBox_hlp_threshold->setMinimum(1);
        spinBox_hlp_threshold->setMaximum(1000);
        spinBox_hlp_threshold->setSingleStep(20);
        spinBox_hlp_threshold->setValue(260);

        formLayout->setWidget(0, QFormLayout::FieldRole, spinBox_hlp_threshold);

        doubleSpinBox_hlp_minLineLength = new QDoubleSpinBox(tab_2);
        doubleSpinBox_hlp_minLineLength->setObjectName(QString::fromUtf8("doubleSpinBox_hlp_minLineLength"));
        doubleSpinBox_hlp_minLineLength->setMaximum(1000);
        doubleSpinBox_hlp_minLineLength->setSingleStep(20);
        doubleSpinBox_hlp_minLineLength->setValue(150);

        formLayout->setWidget(1, QFormLayout::FieldRole, doubleSpinBox_hlp_minLineLength);

        doubleSpinBox_hlp_maxLineGap = new QDoubleSpinBox(tab_2);
        doubleSpinBox_hlp_maxLineGap->setObjectName(QString::fromUtf8("doubleSpinBox_hlp_maxLineGap"));
        doubleSpinBox_hlp_maxLineGap->setMaximum(1000);
        doubleSpinBox_hlp_maxLineGap->setSingleStep(20);
        doubleSpinBox_hlp_maxLineGap->setValue(570);

        formLayout->setWidget(2, QFormLayout::FieldRole, doubleSpinBox_hlp_maxLineGap);

        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());

        verticalLayout_2->addWidget(tabWidget);

        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        gridLayout_2 = new QGridLayout(widget_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_8 = new QLabel(widget_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 0, 0, 1, 1);

        label_ym = new QLabel(widget_3);
        label_ym->setObjectName(QString::fromUtf8("label_ym"));

        gridLayout_2->addWidget(label_ym, 0, 1, 1, 1);

        label_9 = new QLabel(widget_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 1, 0, 1, 1);

        label_teta = new QLabel(widget_3);
        label_teta->setObjectName(QString::fromUtf8("label_teta"));

        gridLayout_2->addWidget(label_teta, 1, 1, 1, 1);

        label_12 = new QLabel(widget_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 0, 2, 1, 1);

        label_lineas_detectadas = new QLabel(widget_3);
        label_lineas_detectadas->setObjectName(QString::fromUtf8("label_lineas_detectadas"));

        gridLayout_2->addWidget(label_lineas_detectadas, 0, 3, 1, 1);


        verticalLayout_2->addWidget(widget_3);

        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setEnabled(false);

        verticalLayout_2->addWidget(pushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout->addWidget(widget_2);

        widget_canny = new Pintor(widget_4);
        widget_canny->setObjectName(QString::fromUtf8("widget_canny"));
        widget_canny->setMinimumSize(QSize(320, 240));
        widget_canny->setMaximumSize(QSize(320, 240));

        verticalLayout->addWidget(widget_canny);


        horizontalLayout->addWidget(widget_4);

        tabWidget_3 = new QTabWidget(centralWidget);
        tabWidget_3->setObjectName(QString::fromUtf8("tabWidget_3"));
        tab_8 = new QWidget();
        tab_8->setObjectName(QString::fromUtf8("tab_8"));
        verticalLayout_3 = new QVBoxLayout(tab_8);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget = new Pintor(tab_8);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(640, 480));
        widget->setMaximumSize(QSize(640, 480));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));

        verticalLayout_3->addWidget(widget);

        tabWidget_3->addTab(tab_8, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QString::fromUtf8("tab_9"));
        verticalLayout_7 = new QVBoxLayout(tab_9);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        widget_9 = new QWidget(tab_9);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        horizontalLayout_4 = new QHBoxLayout(widget_9);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        widget_5 = new QWidget(widget_9);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        verticalLayout_4 = new QVBoxLayout(widget_5);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        widget_6 = new QWidget(widget_5);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_2 = new QHBoxLayout(widget_6);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        spinBox_servo_x = new QSpinBox(widget_6);
        spinBox_servo_x->setObjectName(QString::fromUtf8("spinBox_servo_x"));
        spinBox_servo_x->setMinimum(-1000);
        spinBox_servo_x->setMaximum(1000);

        horizontalLayout_2->addWidget(spinBox_servo_x);

        pushButton_servo_x = new QPushButton(widget_6);
        pushButton_servo_x->setObjectName(QString::fromUtf8("pushButton_servo_x"));

        horizontalLayout_2->addWidget(pushButton_servo_x);


        verticalLayout_4->addWidget(widget_6);

        horizontalSlider_servo_x = new QSlider(widget_5);
        horizontalSlider_servo_x->setObjectName(QString::fromUtf8("horizontalSlider_servo_x"));
        horizontalSlider_servo_x->setMinimum(-1000);
        horizontalSlider_servo_x->setMaximum(1000);
        horizontalSlider_servo_x->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(horizontalSlider_servo_x);


        horizontalLayout_4->addWidget(widget_5);

        widget_7 = new QWidget(widget_9);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        verticalLayout_5 = new QVBoxLayout(widget_7);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        widget_8 = new QWidget(widget_7);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        horizontalLayout_3 = new QHBoxLayout(widget_8);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        spinBox_servo_y = new QSpinBox(widget_8);
        spinBox_servo_y->setObjectName(QString::fromUtf8("spinBox_servo_y"));
        spinBox_servo_y->setMinimum(-1000);
        spinBox_servo_y->setMaximum(1000);

        horizontalLayout_3->addWidget(spinBox_servo_y);

        pushButton_servo_y = new QPushButton(widget_8);
        pushButton_servo_y->setObjectName(QString::fromUtf8("pushButton_servo_y"));

        horizontalLayout_3->addWidget(pushButton_servo_y);


        verticalLayout_5->addWidget(widget_8);

        horizontalSlider_servo_y = new QSlider(widget_7);
        horizontalSlider_servo_y->setObjectName(QString::fromUtf8("horizontalSlider_servo_y"));
        horizontalSlider_servo_y->setMinimum(-1000);
        horizontalSlider_servo_y->setMaximum(1000);
        horizontalSlider_servo_y->setOrientation(Qt::Horizontal);

        verticalLayout_5->addWidget(horizontalSlider_servo_y);


        horizontalLayout_4->addWidget(widget_7);


        verticalLayout_7->addWidget(widget_9);

        widget_11 = new QWidget(tab_9);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        horizontalLayout_5 = new QHBoxLayout(widget_11);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        widget_10 = new QWidget(widget_11);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        verticalLayout_6 = new QVBoxLayout(widget_10);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        pushButton_2 = new QPushButton(widget_10);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_6->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget_10);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_6->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget_10);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout_6->addWidget(pushButton_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);


        horizontalLayout_5->addWidget(widget_10);

        tableWidget = new QTableWidget(widget_11);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setColumnCount(4);

        horizontalLayout_5->addWidget(tableWidget);


        verticalLayout_7->addWidget(widget_11);

        tabWidget_3->addTab(tab_9, QString());

        horizontalLayout->addWidget(tabWidget_3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1002, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(spinBox_servo_x, SIGNAL(valueChanged(int)), horizontalSlider_servo_x, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_servo_x, SIGNAL(valueChanged(int)), spinBox_servo_x, SLOT(setValue(int)));
        QObject::connect(horizontalSlider_servo_y, SIGNAL(valueChanged(int)), spinBox_servo_y, SLOT(setValue(int)));
        QObject::connect(spinBox_servo_y, SIGNAL(valueChanged(int)), horizontalSlider_servo_y, SLOT(setValue(int)));

        tabWidget_2->setCurrentIndex(1);
        tabWidget->setCurrentIndex(1);
        tabWidget_3->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Threshold1", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Threshold2", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "Canny", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "maxValue", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "blockSize", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "C", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("MainWindow", "adaptiveThreshold", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("MainWindow", "GaussianBlur", 0, QApplication::UnicodeUTF8));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("MainWindow", "GaussianBlur y Canny", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Threshold", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "HoughLines", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Threshold", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "minLineLength", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "maxLineGap", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "HoughLinesP", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "HoughCircles", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Ym", 0, QApplication::UnicodeUTF8));
        label_ym->setText(QApplication::translate("MainWindow", "240", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Teta", 0, QApplication::UnicodeUTF8));
        label_teta->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "Lineas detectadas", 0, QApplication::UnicodeUTF8));
        label_lineas_detectadas->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Start", 0, QApplication::UnicodeUTF8));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_8), QApplication::translate("MainWindow", "Filtro Intermedio", 0, QApplication::UnicodeUTF8));
        pushButton_servo_x->setText(QApplication::translate("MainWindow", "Enviar", 0, QApplication::UnicodeUTF8));
        pushButton_servo_y->setText(QApplication::translate("MainWindow", "Enviar", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "Agregar Dato", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "Exportar", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("MainWindow", "Borrar Datos", 0, QApplication::UnicodeUTF8));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_9), QApplication::translate("MainWindow", "Servos", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
