/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <dashboard1.h>
#include <qchartview.h>
#include <waterprogressbar1.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLabel *label;
    QLabel *label_status;
    QWidget *widget_3;
    QChartView *widget_tend1;
    QChartView *widget_tend2;
    QChartView *widget_tend3;
    QWidget *widget_map;
    QWidget *widget_4;
    QWidget *widget_6;
    QGridLayout *gridLayout;
    QLabel *label_Humindity1;
    QCheckBox *led_7;
    QCheckBox *led_5;
    QLabel *label_14;
    QPushButton *button_set;
    QLabel *label_12;
    QLabel *label_Temperature2;
    QCheckBox *led_1;
    QLabel *label_10;
    QCheckBox *led_3;
    QLabel *label_Temperature1;
    QLabel *label_9;
    QLabel *label_15;
    QLabel *label_13;
    QLabel *label_6;
    QLabel *label_8;
    QCheckBox *led_2;
    QCheckBox *led_4;
    QLabel *label_7;
    QLabel *label_4;
    QCheckBox *led_6;
    QLabel *label_11;
    QLabel *label_Humindity2;
    QCheckBox *led_8;
    QLabel *label_5;
    QChartView *widget_tend4;
    QLabel *label_3;
    Dashboard1 *widget_temperature1;
    WaterProgressBar1 *widget_humidity1;
    Dashboard1 *widget_temperature2;
    WaterProgressBar1 *widget_humidity2;
    QWidget *widget_2;
    QLabel *label_16;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1280, 800);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(132, 250, 176, 1), stop:1 rgba(143,211,244,1));"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 10, 1251, 71));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0.5);\n"
"border-radius: 20px;"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 0, 941, 71));
        QFont font;
        font.setPointSize(16);
        font.setBold(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label_status = new QLabel(widget);
        label_status->setObjectName(QString::fromUtf8("label_status"));
        label_status->setGeometry(QRect(860, 0, 161, 71));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(false);
        label_status->setFont(font1);
        label_status->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"color: rgb(114, 159, 207);"));
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(30, 20, 31, 31));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"image: url(:/new/prefix1/history.png);"));
        widget_tend1 = new QChartView(centralwidget);
        widget_tend1->setObjectName(QString::fromUtf8("widget_tend1"));
        widget_tend1->setGeometry(QRect(20, 100, 261, 251));
        widget_tend1->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0.5);\n"
"border-radius: 20px;"));
        widget_tend2 = new QChartView(centralwidget);
        widget_tend2->setObjectName(QString::fromUtf8("widget_tend2"));
        widget_tend2->setGeometry(QRect(310, 100, 281, 251));
        widget_tend2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0.5);\n"
"border-radius: 20px;"));
        widget_tend3 = new QChartView(centralwidget);
        widget_tend3->setObjectName(QString::fromUtf8("widget_tend3"));
        widget_tend3->setGeometry(QRect(620, 100, 291, 251));
        widget_tend3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0.5);\n"
"border-radius: 20px;"));
        widget_map = new QWidget(centralwidget);
        widget_map->setObjectName(QString::fromUtf8("widget_map"));
        widget_map->setGeometry(QRect(740, 360, 481, 381));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_map->sizePolicy().hasHeightForWidth());
        widget_map->setSizePolicy(sizePolicy1);
        widget_map->setAutoFillBackground(false);
        widget_map->setStyleSheet(QString::fromUtf8("\n"
"image: url(:/new/prefix1/map.jpg);\n"
"background-color: rgba(255, 255, 255, 0.5);\n"
"border-radius: 20px;"));
        widget_4 = new QWidget(widget_map);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(10, 9, 31, 31));
        widget_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"image: url(:/new/prefix1/position.png);"));
        widget_6 = new QWidget(centralwidget);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setGeometry(QRect(30, 360, 661, 391));
        widget_6->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0.5);\n"
"border-radius: 20px;"));
        gridLayout = new QGridLayout(widget_6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(0);
        label_Humindity1 = new QLabel(widget_6);
        label_Humindity1->setObjectName(QString::fromUtf8("label_Humindity1"));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        label_Humindity1->setFont(font2);
        label_Humindity1->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout->addWidget(label_Humindity1, 3, 4, 1, 1);

        led_7 = new QCheckBox(widget_6);
        led_7->setObjectName(QString::fromUtf8("led_7"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(led_7->sizePolicy().hasHeightForWidth());
        led_7->setSizePolicy(sizePolicy2);
        led_7->setAutoFillBackground(false);
        led_7->setStyleSheet(QString::fromUtf8("QCheckBox::indicator:unchecked {\n"
"image: url(://new/prefix1/off.png);\n"
"}\n"
"QCheckBox::indicator:checked {\n"
"image: url(:/new/prefix1/on.png);\n"
"}\n"
""));

        gridLayout->addWidget(led_7, 10, 5, 1, 1);

        led_5 = new QCheckBox(widget_6);
        led_5->setObjectName(QString::fromUtf8("led_5"));
        sizePolicy2.setHeightForWidth(led_5->sizePolicy().hasHeightForWidth());
        led_5->setSizePolicy(sizePolicy2);
        led_5->setAutoFillBackground(false);
        led_5->setStyleSheet(QString::fromUtf8("QCheckBox::indicator:unchecked {\n"
"image: url(://new/prefix1/off.png);\n"
"}\n"
"QCheckBox::indicator:checked {\n"
"image: url(:/new/prefix1/on.png);\n"
"}\n"
""));

        gridLayout->addWidget(led_5, 8, 5, 1, 1);

        label_14 = new QLabel(widget_6);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy3);
        label_14->setFont(font2);
        label_14->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout->addWidget(label_14, 10, 0, 1, 1);

        button_set = new QPushButton(widget_6);
        button_set->setObjectName(QString::fromUtf8("button_set"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(button_set->sizePolicy().hasHeightForWidth());
        button_set->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(button_set, 0, 5, 1, 1);

        label_12 = new QLabel(widget_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy3.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy3);
        label_12->setFont(font2);
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout->addWidget(label_12, 8, 0, 1, 1);

        label_Temperature2 = new QLabel(widget_6);
        label_Temperature2->setObjectName(QString::fromUtf8("label_Temperature2"));
        label_Temperature2->setFont(font2);
        label_Temperature2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout->addWidget(label_Temperature2, 4, 1, 1, 1);

        led_1 = new QCheckBox(widget_6);
        led_1->setObjectName(QString::fromUtf8("led_1"));
        sizePolicy2.setHeightForWidth(led_1->sizePolicy().hasHeightForWidth());
        led_1->setSizePolicy(sizePolicy2);
        led_1->setLayoutDirection(Qt::LeftToRight);
        led_1->setAutoFillBackground(false);
        led_1->setStyleSheet(QString::fromUtf8("QCheckBox::indicator:unchecked {\n"
"image: url(://new/prefix1/off.png);\n"
"}\n"
"QCheckBox::indicator:checked {\n"
"image: url(:/new/prefix1/on.png);\n"
"}"));

        gridLayout->addWidget(led_1, 3, 5, 1, 1);

        label_10 = new QLabel(widget_6);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy3.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy3);
        label_10->setFont(font2);
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout->addWidget(label_10, 6, 0, 1, 1);

        led_3 = new QCheckBox(widget_6);
        led_3->setObjectName(QString::fromUtf8("led_3"));
        sizePolicy2.setHeightForWidth(led_3->sizePolicy().hasHeightForWidth());
        led_3->setSizePolicy(sizePolicy2);
        led_3->setAutoFillBackground(false);
        led_3->setStyleSheet(QString::fromUtf8("QCheckBox::indicator:unchecked {\n"
"image: url(://new/prefix1/off.png);\n"
"}\n"
"QCheckBox::indicator:checked {\n"
"image: url(:/new/prefix1/on.png);\n"
"}\n"
""));

        gridLayout->addWidget(led_3, 6, 5, 1, 1);

        label_Temperature1 = new QLabel(widget_6);
        label_Temperature1->setObjectName(QString::fromUtf8("label_Temperature1"));
        label_Temperature1->setFont(font2);
        label_Temperature1->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout->addWidget(label_Temperature1, 3, 1, 1, 1);

        label_9 = new QLabel(widget_6);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy3.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy3);
        label_9->setFont(font2);
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout->addWidget(label_9, 4, 0, 1, 1);

        label_15 = new QLabel(widget_6);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy3.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy3);
        label_15->setFont(font2);
        label_15->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout->addWidget(label_15, 11, 0, 1, 1);

        label_13 = new QLabel(widget_6);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy3.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy3);
        label_13->setFont(font2);
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout->addWidget(label_13, 9, 0, 1, 1);

        label_6 = new QLabel(widget_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy4.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy4);
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout->addWidget(label_6, 1, 4, 1, 1);

        label_8 = new QLabel(widget_6);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy5);
        label_8->setFont(font2);
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout->addWidget(label_8, 3, 0, 1, 1);

        led_2 = new QCheckBox(widget_6);
        led_2->setObjectName(QString::fromUtf8("led_2"));
        sizePolicy2.setHeightForWidth(led_2->sizePolicy().hasHeightForWidth());
        led_2->setSizePolicy(sizePolicy2);
        led_2->setAutoFillBackground(false);
        led_2->setStyleSheet(QString::fromUtf8("QCheckBox::indicator:unchecked {\n"
"image: url(://new/prefix1/off.png);\n"
"}\n"
"QCheckBox::indicator:checked {\n"
"image: url(:/new/prefix1/on.png);\n"
"}\n"
""));

        gridLayout->addWidget(led_2, 4, 5, 1, 1);

        led_4 = new QCheckBox(widget_6);
        led_4->setObjectName(QString::fromUtf8("led_4"));
        sizePolicy2.setHeightForWidth(led_4->sizePolicy().hasHeightForWidth());
        led_4->setSizePolicy(sizePolicy2);
        led_4->setAutoFillBackground(false);
        led_4->setStyleSheet(QString::fromUtf8("QCheckBox::indicator:unchecked {\n"
"image: url(://new/prefix1/off.png);\n"
"}\n"
"QCheckBox::indicator:checked {\n"
"image: url(:/new/prefix1/on.png);\n"
"}\n"
""));

        gridLayout->addWidget(led_4, 7, 5, 1, 1);

        label_7 = new QLabel(widget_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy3.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy3);
        label_7->setFont(font2);
        label_7->setContextMenuPolicy(Qt::ActionsContextMenu);
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        label_7->setMargin(20);

        gridLayout->addWidget(label_7, 1, 5, 1, 1);

        label_4 = new QLabel(widget_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);
        label_4->setFont(font2);
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        led_6 = new QCheckBox(widget_6);
        led_6->setObjectName(QString::fromUtf8("led_6"));
        sizePolicy2.setHeightForWidth(led_6->sizePolicy().hasHeightForWidth());
        led_6->setSizePolicy(sizePolicy2);
        led_6->setAutoFillBackground(false);
        led_6->setStyleSheet(QString::fromUtf8("QCheckBox::indicator:unchecked {\n"
"image: url(://new/prefix1/off.png);\n"
"}\n"
"QCheckBox::indicator:checked {\n"
"image: url(:/new/prefix1/on.png);\n"
"}\n"
""));

        gridLayout->addWidget(led_6, 9, 5, 1, 1);

        label_11 = new QLabel(widget_6);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy3.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy3);
        label_11->setFont(font2);
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout->addWidget(label_11, 7, 0, 1, 1);

        label_Humindity2 = new QLabel(widget_6);
        label_Humindity2->setObjectName(QString::fromUtf8("label_Humindity2"));
        label_Humindity2->setFont(font2);
        label_Humindity2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout->addWidget(label_Humindity2, 4, 4, 1, 1);

        led_8 = new QCheckBox(widget_6);
        led_8->setObjectName(QString::fromUtf8("led_8"));
        sizePolicy2.setHeightForWidth(led_8->sizePolicy().hasHeightForWidth());
        led_8->setSizePolicy(sizePolicy2);
        led_8->setAutoFillBackground(false);
        led_8->setStyleSheet(QString::fromUtf8("QCheckBox::indicator:unchecked {\n"
"image: url(://new/prefix1/off.png);\n"
"}\n"
"QCheckBox::indicator:checked {\n"
"image: url(:/new/prefix1/on.png);\n"
"}\n"
""));

        gridLayout->addWidget(led_8, 11, 5, 1, 1);

        label_5 = new QLabel(widget_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy4.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy4);
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout->addWidget(label_5, 1, 1, 1, 1);

        led_1->raise();
        label_5->raise();
        label_11->raise();
        label_14->raise();
        label_4->raise();
        label_Temperature1->raise();
        led_8->raise();
        label_12->raise();
        label_13->raise();
        led_5->raise();
        label_Temperature2->raise();
        label_6->raise();
        label_9->raise();
        led_6->raise();
        led_7->raise();
        led_2->raise();
        label_Humindity1->raise();
        label_15->raise();
        label_10->raise();
        led_4->raise();
        label_Humindity2->raise();
        label_8->raise();
        led_3->raise();
        label_7->raise();
        button_set->raise();
        widget_tend4 = new QChartView(centralwidget);
        widget_tend4->setObjectName(QString::fromUtf8("widget_tend4"));
        widget_tend4->setGeometry(QRect(950, 100, 281, 251));
        widget_tend4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0.5);\n"
"border-radius: 20px;"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 370, 321, 33));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        widget_temperature1 = new Dashboard1(centralwidget);
        widget_temperature1->setObjectName(QString::fromUtf8("widget_temperature1"));
        widget_temperature1->setGeometry(QRect(100, 450, 171, 141));
        widget_humidity1 = new WaterProgressBar1(centralwidget);
        widget_humidity1->setObjectName(QString::fromUtf8("widget_humidity1"));
        widget_humidity1->setGeometry(QRect(310, 450, 171, 141));
        widget_temperature2 = new Dashboard1(centralwidget);
        widget_temperature2->setObjectName(QString::fromUtf8("widget_temperature2"));
        widget_temperature2->setGeometry(QRect(100, 600, 171, 141));
        widget_humidity2 = new WaterProgressBar1(centralwidget);
        widget_humidity2->setObjectName(QString::fromUtf8("widget_humidity2"));
        widget_humidity2->setGeometry(QRect(310, 600, 171, 141));
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(50, 370, 31, 31));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"image: url(:/new/prefix1/show.png);"));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(790, 365, 111, 33));
        label_16->setFont(font3);
        label_16->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        MainWindow->setCentralWidget(centralwidget);
        widget->raise();
        widget_tend1->raise();
        widget_tend2->raise();
        widget_tend3->raise();
        widget_map->raise();
        widget_6->raise();
        widget_tend4->raise();
        widget_temperature1->raise();
        widget_humidity1->raise();
        widget_temperature2->raise();
        widget_humidity2->raise();
        label_3->raise();
        widget_2->raise();
        label_16->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Temperature and Humidity Intelligent Monitoring Platform ", nullptr));
        label_status->setText(QCoreApplication::translate("MainWindow", "No Connect", nullptr));
        label_Humindity1->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        led_7->setText(QString());
        led_5->setText(QString());
        label_14->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        button_set->setText(QCoreApplication::translate("MainWindow", "Set", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        label_Temperature2->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        led_1->setText(QString());
        label_10->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        led_3->setText(QString());
        label_Temperature1->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "  Humidity/%rh", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        led_2->setText(QString());
        led_4->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "      LED Switch     ", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Sensor Num        ", nullptr));
        led_6->setText(QString());
        label_11->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        label_Humindity2->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        led_8->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "Temperature/\302\260C", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Sensor node console", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Location", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
