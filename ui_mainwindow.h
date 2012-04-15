/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun Apr 15 01:56:28 2012
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
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
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
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_threshold2;
    QDoubleSpinBox *doubleSpinBox_threshold1;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QSpinBox *spinBox_hl;
    QLabel *label_3;
    Pintor *widget_canny;
    Pintor *widget;
    QGridLayout *gridLayout;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1002, 558);
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
        formLayout = new QFormLayout(widget_2);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        doubleSpinBox_threshold2 = new QDoubleSpinBox(widget_2);
        doubleSpinBox_threshold2->setObjectName(QString::fromUtf8("doubleSpinBox_threshold2"));
        doubleSpinBox_threshold2->setMaximum(1000);
        doubleSpinBox_threshold2->setSingleStep(20);
        doubleSpinBox_threshold2->setValue(250);

        formLayout->setWidget(2, QFormLayout::FieldRole, doubleSpinBox_threshold2);

        doubleSpinBox_threshold1 = new QDoubleSpinBox(widget_2);
        doubleSpinBox_threshold1->setObjectName(QString::fromUtf8("doubleSpinBox_threshold1"));
        doubleSpinBox_threshold1->setMaximum(1000);
        doubleSpinBox_threshold1->setSingleStep(20);
        doubleSpinBox_threshold1->setValue(150);

        formLayout->setWidget(0, QFormLayout::FieldRole, doubleSpinBox_threshold1);

        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        formLayout->setWidget(4, QFormLayout::FieldRole, pushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(5, QFormLayout::FieldRole, verticalSpacer);

        spinBox_hl = new QSpinBox(widget_2);
        spinBox_hl->setObjectName(QString::fromUtf8("spinBox_hl"));
        spinBox_hl->setMinimum(1);
        spinBox_hl->setMaximum(1000);
        spinBox_hl->setSingleStep(10);
        spinBox_hl->setValue(100);

        formLayout->setWidget(3, QFormLayout::FieldRole, spinBox_hl);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);


        verticalLayout->addWidget(widget_2);

        widget_canny = new Pintor(widget_4);
        widget_canny->setObjectName(QString::fromUtf8("widget_canny"));
        widget_canny->setMinimumSize(QSize(320, 240));
        widget_canny->setMaximumSize(QSize(320, 240));

        verticalLayout->addWidget(widget_canny);


        horizontalLayout->addWidget(widget_4);

        widget = new Pintor(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(640, 480));
        widget->setMaximumSize(QSize(640, 480));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));

        horizontalLayout->addWidget(widget);

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

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Canny threshold1", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Canny threshold2", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Start", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "HoughLines threshold", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
