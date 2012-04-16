/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Apr 16 13:50:29 2012
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
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
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
    QGroupBox *groupBox;
    QFormLayout *formLayout_2;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox_canny_threshold1;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_canny_threshold2;
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
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
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
        MainWindow->resize(1002, 646);
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
        groupBox = new QGroupBox(widget_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout_2 = new QFormLayout(groupBox);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        doubleSpinBox_canny_threshold1 = new QDoubleSpinBox(groupBox);
        doubleSpinBox_canny_threshold1->setObjectName(QString::fromUtf8("doubleSpinBox_canny_threshold1"));
        doubleSpinBox_canny_threshold1->setMaximum(1000);
        doubleSpinBox_canny_threshold1->setSingleStep(20);
        doubleSpinBox_canny_threshold1->setValue(150);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, doubleSpinBox_canny_threshold1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        doubleSpinBox_canny_threshold2 = new QDoubleSpinBox(groupBox);
        doubleSpinBox_canny_threshold2->setObjectName(QString::fromUtf8("doubleSpinBox_canny_threshold2"));
        doubleSpinBox_canny_threshold2->setMaximum(1000);
        doubleSpinBox_canny_threshold2->setSingleStep(20);
        doubleSpinBox_canny_threshold2->setValue(250);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, doubleSpinBox_canny_threshold2);


        verticalLayout_2->addWidget(groupBox);

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
        spinBox_hlp_threshold->setMaximum(1000);
        spinBox_hlp_threshold->setSingleStep(20);
        spinBox_hlp_threshold->setValue(80);

        formLayout->setWidget(0, QFormLayout::FieldRole, spinBox_hlp_threshold);

        doubleSpinBox_hlp_minLineLength = new QDoubleSpinBox(tab_2);
        doubleSpinBox_hlp_minLineLength->setObjectName(QString::fromUtf8("doubleSpinBox_hlp_minLineLength"));
        doubleSpinBox_hlp_minLineLength->setMaximum(1000);
        doubleSpinBox_hlp_minLineLength->setSingleStep(20);
        doubleSpinBox_hlp_minLineLength->setValue(60);

        formLayout->setWidget(1, QFormLayout::FieldRole, doubleSpinBox_hlp_minLineLength);

        doubleSpinBox_hlp_maxLineGap = new QDoubleSpinBox(tab_2);
        doubleSpinBox_hlp_maxLineGap->setObjectName(QString::fromUtf8("doubleSpinBox_hlp_maxLineGap"));
        doubleSpinBox_hlp_maxLineGap->setMaximum(1000);
        doubleSpinBox_hlp_maxLineGap->setSingleStep(20);
        doubleSpinBox_hlp_maxLineGap->setValue(30);

        formLayout->setWidget(2, QFormLayout::FieldRole, doubleSpinBox_hlp_maxLineGap);

        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_2->addWidget(tabWidget);

        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

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

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Canny", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Threshold1", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Threshold2", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Threshold", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "HoughLines", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Threshold", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "minLineLength", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "maxLineGap", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "HoughLinesP", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Start", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
