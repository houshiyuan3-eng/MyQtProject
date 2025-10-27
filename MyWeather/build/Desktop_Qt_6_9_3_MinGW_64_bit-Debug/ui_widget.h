/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_36;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_cityname;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label_nowData;
    QGridLayout *gridLayout;
    QLabel *label_nowWeatherIcon;
    QLabel *label_nowTemp;
    QLabel *label_nowCity;
    QLabel *label_nowWeather;
    QLabel *label_nowDayTemp;
    QLabel *label_nowTips;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QVBoxLayout *verticalLayout;
    QLabel *label_nowF_W;
    QLabel *label_nowF_D;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_11;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_12;
    QLabel *label_nowPressure;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_14;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_18;
    QLabel *label_humidity;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_20;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_21;
    QLabel *label_Airleave;
    QVBoxLayout *verticalLayout_28;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_23;
    QLabel *label_day1_data;
    QVBoxLayout *verticalLayout_17;
    QLabel *label_45;
    QLabel *label_day2_data;
    QVBoxLayout *verticalLayout_18;
    QLabel *label_47;
    QLabel *label_day3_data;
    QVBoxLayout *verticalLayout_19;
    QLabel *label_49;
    QLabel *label_day4_data;
    QVBoxLayout *verticalLayout_20;
    QLabel *label_51;
    QLabel *label_day5_data;
    QVBoxLayout *verticalLayout_21;
    QLabel *label_53;
    QLabel *label_day6_data;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_day1_icon;
    QLabel *label_day2_icon;
    QLabel *label_day3_icon;
    QLabel *label_day4_icon;
    QLabel *label_day5_icon;
    QLabel *label_day6_icon;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_day1_air;
    QLabel *label_day2_air;
    QLabel *label_day3_air;
    QLabel *label_day4_air;
    QLabel *label_day5_air;
    QLabel *label_day6_air;
    QVBoxLayout *verticalLayout_29;
    QWidget *widget_hightemp;
    QWidget *widget_lowtemp;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_30;
    QLabel *label_day1_fw;
    QLabel *label_day1_fd;
    QVBoxLayout *verticalLayout_31;
    QLabel *label_day2_fw;
    QLabel *label_day2_fd;
    QVBoxLayout *verticalLayout_32;
    QLabel *label_day3_fw;
    QLabel *label_day3_fd;
    QVBoxLayout *verticalLayout_33;
    QLabel *label_day4_fw;
    QLabel *label_day4_fd;
    QVBoxLayout *verticalLayout_34;
    QLabel *label_day5_fw;
    QLabel *label_day5_fd;
    QVBoxLayout *verticalLayout_35;
    QLabel *label_day6_fw;
    QLabel *label_day6_fd;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(433, 846);
        Widget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        verticalLayout_36 = new QVBoxLayout(Widget);
        verticalLayout_36->setObjectName("verticalLayout_36");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit_cityname = new QLineEdit(Widget);
        lineEdit_cityname->setObjectName("lineEdit_cityname");
        lineEdit_cityname->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(lineEdit_cityname);

        pushButton = new QPushButton(Widget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("border\357\274\232none"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/search.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton->setIcon(icon);

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_nowData = new QLabel(Widget);
        label_nowData->setObjectName("label_nowData");
        label_nowData->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label_nowData);


        verticalLayout_36->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_nowWeatherIcon = new QLabel(Widget);
        label_nowWeatherIcon->setObjectName("label_nowWeatherIcon");
        label_nowWeatherIcon->setMinimumSize(QSize(80, 80));
        label_nowWeatherIcon->setMaximumSize(QSize(80, 80));
        label_nowWeatherIcon->setStyleSheet(QString::fromUtf8(""));
        label_nowWeatherIcon->setPixmap(QPixmap(QString::fromUtf8(":/icon_qingtian.png")));
        label_nowWeatherIcon->setScaledContents(true);

        gridLayout->addWidget(label_nowWeatherIcon, 0, 0, 2, 1);

        label_nowTemp = new QLabel(Widget);
        label_nowTemp->setObjectName("label_nowTemp");
        QFont font;
        font.setPointSize(40);
        label_nowTemp->setFont(font);
        label_nowTemp->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_nowTemp->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_nowTemp->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_nowTemp, 0, 1, 1, 1);

        label_nowCity = new QLabel(Widget);
        label_nowCity->setObjectName("label_nowCity");
        QFont font1;
        font1.setPointSize(16);
        label_nowCity->setFont(font1);
        label_nowCity->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_nowCity->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label_nowCity, 0, 3, 1, 1);

        label_nowWeather = new QLabel(Widget);
        label_nowWeather->setObjectName("label_nowWeather");
        label_nowWeather->setFont(font1);
        label_nowWeather->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_nowWeather->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_nowWeather, 1, 1, 1, 1);

        label_nowDayTemp = new QLabel(Widget);
        label_nowDayTemp->setObjectName("label_nowDayTemp");
        label_nowDayTemp->setFont(font1);
        label_nowDayTemp->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_nowDayTemp->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_nowDayTemp, 1, 2, 1, 1);


        verticalLayout_36->addLayout(gridLayout);

        label_nowTips = new QLabel(Widget);
        label_nowTips->setObjectName("label_nowTips");
        label_nowTips->setMinimumSize(QSize(0, 20));
        label_nowTips->setMaximumSize(QSize(16777215, 20));
        QFont font2;
        font2.setPointSize(14);
        label_nowTips->setFont(font2);
        label_nowTips->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_36->addWidget(label_nowTips);

        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(0, 0));
        widget->setMaximumSize(QSize(16777215, 200));
        widget->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(209, 118, 53);\n"
"border-radius:20px"));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(30, -1, 30, -1);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setMinimumSize(QSize(60, 60));
        label_8->setMaximumSize(QSize(60, 60));
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(209, 118, 53);"));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/fengli.png")));
        label_8->setScaledContents(true);

        horizontalLayout_2->addWidget(label_8);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_nowF_W = new QLabel(widget);
        label_nowF_W->setObjectName("label_nowF_W");
        label_nowF_W->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_nowF_W->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignHCenter);

        verticalLayout->addWidget(label_nowF_W);

        label_nowF_D = new QLabel(widget);
        label_nowF_D->setObjectName("label_nowF_D");
        label_nowF_D->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_nowF_D->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        verticalLayout->addWidget(label_nowF_D);


        horizontalLayout_2->addLayout(verticalLayout);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_11 = new QLabel(widget);
        label_11->setObjectName("label_11");
        label_11->setMinimumSize(QSize(60, 60));
        label_11->setMaximumSize(QSize(60, 60));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/PM.png")));
        label_11->setScaledContents(true);

        horizontalLayout_3->addWidget(label_11);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_12 = new QLabel(widget);
        label_12->setObjectName("label_12");
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_12->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignHCenter);

        verticalLayout_2->addWidget(label_12);

        label_nowPressure = new QLabel(widget);
        label_nowPressure->setObjectName("label_nowPressure");
        label_nowPressure->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_nowPressure->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        verticalLayout_2->addWidget(label_nowPressure);


        horizontalLayout_3->addLayout(verticalLayout_2);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_14 = new QLabel(widget);
        label_14->setObjectName("label_14");
        label_14->setMinimumSize(QSize(60, 60));
        label_14->setMaximumSize(QSize(60, 60));
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/shidu.png")));
        label_14->setScaledContents(true);

        horizontalLayout_5->addWidget(label_14);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_18 = new QLabel(widget);
        label_18->setObjectName("label_18");
        label_18->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_18->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignHCenter);

        verticalLayout_4->addWidget(label_18);

        label_humidity = new QLabel(widget);
        label_humidity->setObjectName("label_humidity");
        label_humidity->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_humidity->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        verticalLayout_4->addWidget(label_humidity);


        horizontalLayout_5->addLayout(verticalLayout_4);


        gridLayout_2->addLayout(horizontalLayout_5, 1, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_20 = new QLabel(widget);
        label_20->setObjectName("label_20");
        label_20->setMinimumSize(QSize(60, 60));
        label_20->setMaximumSize(QSize(60, 60));
        label_20->setPixmap(QPixmap(QString::fromUtf8(":/kongqizhiliang.png")));
        label_20->setScaledContents(true);

        horizontalLayout_6->addWidget(label_20);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_21 = new QLabel(widget);
        label_21->setObjectName("label_21");
        label_21->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_21->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignHCenter);

        verticalLayout_5->addWidget(label_21);

        label_Airleave = new QLabel(widget);
        label_Airleave->setObjectName("label_Airleave");
        label_Airleave->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_Airleave->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        verticalLayout_5->addWidget(label_Airleave);


        horizontalLayout_6->addLayout(verticalLayout_5);


        gridLayout_2->addLayout(horizontalLayout_6, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);


        verticalLayout_36->addWidget(widget);

        verticalLayout_28 = new QVBoxLayout();
        verticalLayout_28->setObjectName("verticalLayout_28");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_23 = new QLabel(Widget);
        label_23->setObjectName("label_23");
        label_23->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(64, 193, 193);\n"
"border-top-left-radius:10px;\n"
"border-top-right-radius:10px;"));
        label_23->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_23);

        label_day1_data = new QLabel(Widget);
        label_day1_data->setObjectName("label_day1_data");
        label_day1_data->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(64, 193, 193);\n"
"border-bottom-left-radius:10px;\n"
"border-bottom-right-radius:10px;"));
        label_day1_data->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_day1_data);


        horizontalLayout_7->addLayout(verticalLayout_6);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(0);
        verticalLayout_17->setObjectName("verticalLayout_17");
        label_45 = new QLabel(Widget);
        label_45->setObjectName("label_45");
        label_45->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(64, 193, 193);\n"
"border-top-left-radius:10px;\n"
"border-top-right-radius:10px;"));
        label_45->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_17->addWidget(label_45);

        label_day2_data = new QLabel(Widget);
        label_day2_data->setObjectName("label_day2_data");
        label_day2_data->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(64, 193, 193);\n"
"border-bottom-left-radius:10px;\n"
"border-bottom-right-radius:10px;"));
        label_day2_data->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_17->addWidget(label_day2_data);


        horizontalLayout_7->addLayout(verticalLayout_17);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setSpacing(0);
        verticalLayout_18->setObjectName("verticalLayout_18");
        label_47 = new QLabel(Widget);
        label_47->setObjectName("label_47");
        label_47->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(64, 193, 193);\n"
"border-top-left-radius:10px;\n"
"border-top-right-radius:10px;"));
        label_47->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_18->addWidget(label_47);

        label_day3_data = new QLabel(Widget);
        label_day3_data->setObjectName("label_day3_data");
        label_day3_data->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(64, 193, 193);\n"
"border-bottom-left-radius:10px;\n"
"border-bottom-right-radius:10px;"));
        label_day3_data->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_18->addWidget(label_day3_data);


        horizontalLayout_7->addLayout(verticalLayout_18);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setSpacing(0);
        verticalLayout_19->setObjectName("verticalLayout_19");
        label_49 = new QLabel(Widget);
        label_49->setObjectName("label_49");
        label_49->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(64, 193, 193);\n"
"border-top-left-radius:10px;\n"
"border-top-right-radius:10px;"));
        label_49->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_19->addWidget(label_49);

        label_day4_data = new QLabel(Widget);
        label_day4_data->setObjectName("label_day4_data");
        label_day4_data->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(64, 193, 193);\n"
"border-bottom-left-radius:10px;\n"
"border-bottom-right-radius:10px;"));
        label_day4_data->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_19->addWidget(label_day4_data);


        horizontalLayout_7->addLayout(verticalLayout_19);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setSpacing(0);
        verticalLayout_20->setObjectName("verticalLayout_20");
        label_51 = new QLabel(Widget);
        label_51->setObjectName("label_51");
        label_51->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(64, 193, 193);\n"
"border-top-left-radius:10px;\n"
"border-top-right-radius:10px;"));
        label_51->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_20->addWidget(label_51);

        label_day5_data = new QLabel(Widget);
        label_day5_data->setObjectName("label_day5_data");
        label_day5_data->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(64, 193, 193);\n"
"border-bottom-left-radius:10px;\n"
"border-bottom-right-radius:10px;"));
        label_day5_data->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_20->addWidget(label_day5_data);


        horizontalLayout_7->addLayout(verticalLayout_20);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setSpacing(0);
        verticalLayout_21->setObjectName("verticalLayout_21");
        label_53 = new QLabel(Widget);
        label_53->setObjectName("label_53");
        label_53->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(64, 193, 193);\n"
"border-top-left-radius:10px;\n"
"border-top-right-radius:10px;"));
        label_53->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_21->addWidget(label_53);

        label_day6_data = new QLabel(Widget);
        label_day6_data->setObjectName("label_day6_data");
        label_day6_data->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(64, 193, 193);\n"
"border-bottom-left-radius:10px;\n"
"border-bottom-right-radius:10px;"));
        label_day6_data->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_21->addWidget(label_day6_data);


        horizontalLayout_7->addLayout(verticalLayout_21);


        verticalLayout_28->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_day1_icon = new QLabel(Widget);
        label_day1_icon->setObjectName("label_day1_icon");
        label_day1_icon->setMaximumSize(QSize(60, 60));
        label_day1_icon->setPixmap(QPixmap(QString::fromUtf8(":/icon_baoyu.png")));
        label_day1_icon->setScaledContents(true);

        horizontalLayout_8->addWidget(label_day1_icon);

        label_day2_icon = new QLabel(Widget);
        label_day2_icon->setObjectName("label_day2_icon");
        label_day2_icon->setMaximumSize(QSize(60, 60));
        label_day2_icon->setPixmap(QPixmap(QString::fromUtf8(":/icon_baoyu.png")));
        label_day2_icon->setScaledContents(true);

        horizontalLayout_8->addWidget(label_day2_icon);

        label_day3_icon = new QLabel(Widget);
        label_day3_icon->setObjectName("label_day3_icon");
        label_day3_icon->setMaximumSize(QSize(60, 60));
        label_day3_icon->setPixmap(QPixmap(QString::fromUtf8(":/icon_baoyu.png")));
        label_day3_icon->setScaledContents(true);

        horizontalLayout_8->addWidget(label_day3_icon);

        label_day4_icon = new QLabel(Widget);
        label_day4_icon->setObjectName("label_day4_icon");
        label_day4_icon->setMaximumSize(QSize(60, 60));
        label_day4_icon->setPixmap(QPixmap(QString::fromUtf8(":/icon_baoyu.png")));
        label_day4_icon->setScaledContents(true);

        horizontalLayout_8->addWidget(label_day4_icon);

        label_day5_icon = new QLabel(Widget);
        label_day5_icon->setObjectName("label_day5_icon");
        label_day5_icon->setMaximumSize(QSize(60, 60));
        label_day5_icon->setPixmap(QPixmap(QString::fromUtf8(":/icon_baoyu.png")));
        label_day5_icon->setScaledContents(true);

        horizontalLayout_8->addWidget(label_day5_icon);

        label_day6_icon = new QLabel(Widget);
        label_day6_icon->setObjectName("label_day6_icon");
        label_day6_icon->setMaximumSize(QSize(60, 60));
        label_day6_icon->setPixmap(QPixmap(QString::fromUtf8(":/icon_baoyu.png")));
        label_day6_icon->setScaledContents(true);

        horizontalLayout_8->addWidget(label_day6_icon);


        verticalLayout_28->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_day1_air = new QLabel(Widget);
        label_day1_air->setObjectName("label_day1_air");
        label_day1_air->setMaximumSize(QSize(16777215, 40));
        label_day1_air->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 138, 0);\n"
"border-radius:10px;\n"
""));
        label_day1_air->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_9->addWidget(label_day1_air);

        label_day2_air = new QLabel(Widget);
        label_day2_air->setObjectName("label_day2_air");
        label_day2_air->setMaximumSize(QSize(16777215, 40));
        label_day2_air->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 138, 0);\n"
"border-radius:10px;\n"
""));
        label_day2_air->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_9->addWidget(label_day2_air);

        label_day3_air = new QLabel(Widget);
        label_day3_air->setObjectName("label_day3_air");
        label_day3_air->setMaximumSize(QSize(16777215, 40));
        label_day3_air->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 138, 0);\n"
"border-radius:10px;\n"
""));
        label_day3_air->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_9->addWidget(label_day3_air);

        label_day4_air = new QLabel(Widget);
        label_day4_air->setObjectName("label_day4_air");
        label_day4_air->setMaximumSize(QSize(16777215, 40));
        label_day4_air->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 138, 0);\n"
"border-radius:10px;\n"
""));
        label_day4_air->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_9->addWidget(label_day4_air);

        label_day5_air = new QLabel(Widget);
        label_day5_air->setObjectName("label_day5_air");
        label_day5_air->setMaximumSize(QSize(16777215, 40));
        label_day5_air->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 138, 0);\n"
"border-radius:10px;\n"
""));
        label_day5_air->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_9->addWidget(label_day5_air);

        label_day6_air = new QLabel(Widget);
        label_day6_air->setObjectName("label_day6_air");
        label_day6_air->setMaximumSize(QSize(16777215, 40));
        label_day6_air->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 138, 0);\n"
"border-radius:10px;\n"
""));
        label_day6_air->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_9->addWidget(label_day6_air);


        verticalLayout_28->addLayout(horizontalLayout_9);


        verticalLayout_36->addLayout(verticalLayout_28);

        verticalLayout_29 = new QVBoxLayout();
        verticalLayout_29->setObjectName("verticalLayout_29");
        widget_hightemp = new QWidget(Widget);
        widget_hightemp->setObjectName("widget_hightemp");
        widget_hightemp->setMinimumSize(QSize(0, 80));
        widget_hightemp->setMaximumSize(QSize(16777215, 80));
        widget_hightemp->setStyleSheet(QString::fromUtf8("background-color: rgb(209, 118, 53);"));

        verticalLayout_29->addWidget(widget_hightemp);

        widget_lowtemp = new QWidget(Widget);
        widget_lowtemp->setObjectName("widget_lowtemp");
        widget_lowtemp->setMinimumSize(QSize(0, 80));
        widget_lowtemp->setMaximumSize(QSize(16777215, 80));
        widget_lowtemp->setStyleSheet(QString::fromUtf8("background-color: rgb(148, 222, 222);"));

        verticalLayout_29->addWidget(widget_lowtemp);


        verticalLayout_36->addLayout(verticalLayout_29);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        verticalLayout_30 = new QVBoxLayout();
        verticalLayout_30->setSpacing(0);
        verticalLayout_30->setObjectName("verticalLayout_30");
        label_day1_fw = new QLabel(Widget);
        label_day1_fw->setObjectName("label_day1_fw");
        label_day1_fw->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(64, 193, 193);\n"
"border-top-left-radius:10px;\n"
"border-top-right-radius:10px;"));
        label_day1_fw->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_30->addWidget(label_day1_fw);

        label_day1_fd = new QLabel(Widget);
        label_day1_fd->setObjectName("label_day1_fd");
        label_day1_fd->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(64, 193, 193);\n"
"border-bottom-left-radius:10px;\n"
"border-bottom-right-radius:10px;"));
        label_day1_fd->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_30->addWidget(label_day1_fd);


        horizontalLayout_10->addLayout(verticalLayout_30);

        verticalLayout_31 = new QVBoxLayout();
        verticalLayout_31->setSpacing(0);
        verticalLayout_31->setObjectName("verticalLayout_31");
        label_day2_fw = new QLabel(Widget);
        label_day2_fw->setObjectName("label_day2_fw");
        label_day2_fw->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(64, 193, 193);\n"
"border-top-left-radius:10px;\n"
"border-top-right-radius:10px;"));
        label_day2_fw->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_31->addWidget(label_day2_fw);

        label_day2_fd = new QLabel(Widget);
        label_day2_fd->setObjectName("label_day2_fd");
        label_day2_fd->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(64, 193, 193);\n"
"border-bottom-left-radius:10px;\n"
"border-bottom-right-radius:10px;"));
        label_day2_fd->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_31->addWidget(label_day2_fd);


        horizontalLayout_10->addLayout(verticalLayout_31);

        verticalLayout_32 = new QVBoxLayout();
        verticalLayout_32->setSpacing(0);
        verticalLayout_32->setObjectName("verticalLayout_32");
        label_day3_fw = new QLabel(Widget);
        label_day3_fw->setObjectName("label_day3_fw");
        label_day3_fw->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(64, 193, 193);\n"
"border-top-left-radius:10px;\n"
"border-top-right-radius:10px;"));
        label_day3_fw->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_32->addWidget(label_day3_fw);

        label_day3_fd = new QLabel(Widget);
        label_day3_fd->setObjectName("label_day3_fd");
        label_day3_fd->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(64, 193, 193);\n"
"border-bottom-left-radius:10px;\n"
"border-bottom-right-radius:10px;"));
        label_day3_fd->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_32->addWidget(label_day3_fd);


        horizontalLayout_10->addLayout(verticalLayout_32);

        verticalLayout_33 = new QVBoxLayout();
        verticalLayout_33->setSpacing(0);
        verticalLayout_33->setObjectName("verticalLayout_33");
        label_day4_fw = new QLabel(Widget);
        label_day4_fw->setObjectName("label_day4_fw");
        label_day4_fw->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(64, 193, 193);\n"
"border-top-left-radius:10px;\n"
"border-top-right-radius:10px;"));
        label_day4_fw->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_33->addWidget(label_day4_fw);

        label_day4_fd = new QLabel(Widget);
        label_day4_fd->setObjectName("label_day4_fd");
        label_day4_fd->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(64, 193, 193);\n"
"border-bottom-left-radius:10px;\n"
"border-bottom-right-radius:10px;"));
        label_day4_fd->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_33->addWidget(label_day4_fd);


        horizontalLayout_10->addLayout(verticalLayout_33);

        verticalLayout_34 = new QVBoxLayout();
        verticalLayout_34->setSpacing(0);
        verticalLayout_34->setObjectName("verticalLayout_34");
        label_day5_fw = new QLabel(Widget);
        label_day5_fw->setObjectName("label_day5_fw");
        label_day5_fw->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(64, 193, 193);\n"
"border-top-left-radius:10px;\n"
"border-top-right-radius:10px;"));
        label_day5_fw->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_34->addWidget(label_day5_fw);

        label_day5_fd = new QLabel(Widget);
        label_day5_fd->setObjectName("label_day5_fd");
        label_day5_fd->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(64, 193, 193);\n"
"border-bottom-left-radius:10px;\n"
"border-bottom-right-radius:10px;"));
        label_day5_fd->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_34->addWidget(label_day5_fd);


        horizontalLayout_10->addLayout(verticalLayout_34);

        verticalLayout_35 = new QVBoxLayout();
        verticalLayout_35->setSpacing(0);
        verticalLayout_35->setObjectName("verticalLayout_35");
        label_day6_fw = new QLabel(Widget);
        label_day6_fw->setObjectName("label_day6_fw");
        label_day6_fw->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(64, 193, 193);\n"
"border-top-left-radius:10px;\n"
"border-top-right-radius:10px;"));
        label_day6_fw->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_35->addWidget(label_day6_fw);

        label_day6_fd = new QLabel(Widget);
        label_day6_fd->setObjectName("label_day6_fd");
        label_day6_fd->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(64, 193, 193);\n"
"border-bottom-left-radius:10px;\n"
"border-bottom-right-radius:10px;"));
        label_day6_fd->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_35->addWidget(label_day6_fd);


        horizontalLayout_10->addLayout(verticalLayout_35);


        verticalLayout_36->addLayout(horizontalLayout_10);

        verticalLayout_36->setStretch(0, 1);
        verticalLayout_36->setStretch(1, 3);
        verticalLayout_36->setStretch(2, 1);
        verticalLayout_36->setStretch(3, 3);
        verticalLayout_36->setStretch(4, 3);
        verticalLayout_36->setStretch(5, 2);
        verticalLayout_36->setStretch(6, 1);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton->setText(QString());
        label_nowData->setText(QCoreApplication::translate("Widget", "2025/01/01  \346\230\237\346\234\237\346\227\245", nullptr));
        label_nowWeatherIcon->setText(QString());
        label_nowTemp->setText(QCoreApplication::translate("Widget", "23", nullptr));
        label_nowCity->setText(QCoreApplication::translate("Widget", "\346\267\261\345\234\263\345\270\202", nullptr));
        label_nowWeather->setText(QCoreApplication::translate("Widget", "\346\231\264\350\275\254\345\244\232\344\272\221", nullptr));
        label_nowDayTemp->setText(QCoreApplication::translate("Widget", "20-26\342\204\203", nullptr));
        label_nowTips->setText(QCoreApplication::translate("Widget", "\346\204\237\345\206\222\346\214\207\346\225\260\357\274\232\345\220\204\347\261\273\344\272\272\347\276\244\345\217\257\344\273\245\350\207\252\347\224\261\346\264\273\345\212\250", nullptr));
        label_8->setText(QString());
        label_nowF_W->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        label_nowF_D->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
        label_11->setText(QString());
        label_12->setText(QCoreApplication::translate("Widget", "\345\216\213\345\274\272", nullptr));
        label_nowPressure->setText(QCoreApplication::translate("Widget", "24", nullptr));
        label_14->setText(QString());
        label_18->setText(QCoreApplication::translate("Widget", "\346\271\277\345\272\246", nullptr));
        label_humidity->setText(QCoreApplication::translate("Widget", "85%", nullptr));
        label_20->setText(QString());
        label_21->setText(QCoreApplication::translate("Widget", "\346\227\245\350\220\275\346\227\266\351\227\264", nullptr));
        label_Airleave->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        label_23->setText(QCoreApplication::translate("Widget", "\344\273\212\345\244\251", nullptr));
        label_day1_data->setText(QCoreApplication::translate("Widget", "12/09", nullptr));
        label_45->setText(QCoreApplication::translate("Widget", "\346\230\216\345\244\251", nullptr));
        label_day2_data->setText(QCoreApplication::translate("Widget", "12/09", nullptr));
        label_47->setText(QCoreApplication::translate("Widget", "\345\220\216\345\244\251", nullptr));
        label_day3_data->setText(QCoreApplication::translate("Widget", "12/09", nullptr));
        label_49->setText(QCoreApplication::translate("Widget", "\347\254\254\345\233\233\345\244\251", nullptr));
        label_day4_data->setText(QCoreApplication::translate("Widget", "12/09", nullptr));
        label_51->setText(QCoreApplication::translate("Widget", "\347\254\254\344\272\224\345\244\251", nullptr));
        label_day5_data->setText(QCoreApplication::translate("Widget", "12/09", nullptr));
        label_53->setText(QCoreApplication::translate("Widget", "\347\254\254\345\205\255\345\244\251", nullptr));
        label_day6_data->setText(QCoreApplication::translate("Widget", "12/09", nullptr));
        label_day1_icon->setText(QString());
        label_day2_icon->setText(QString());
        label_day3_icon->setText(QString());
        label_day4_icon->setText(QString());
        label_day5_icon->setText(QString());
        label_day6_icon->setText(QString());
        label_day1_air->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        label_day2_air->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        label_day3_air->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        label_day4_air->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        label_day5_air->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        label_day6_air->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        label_day1_fw->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        label_day1_fd->setText(QCoreApplication::translate("Widget", "\344\272\214\347\272\247", nullptr));
        label_day2_fw->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        label_day2_fd->setText(QCoreApplication::translate("Widget", "\344\272\214\347\272\247", nullptr));
        label_day3_fw->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        label_day3_fd->setText(QCoreApplication::translate("Widget", "\344\272\214\347\272\247", nullptr));
        label_day4_fw->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        label_day4_fd->setText(QCoreApplication::translate("Widget", "\344\272\214\347\272\247", nullptr));
        label_day5_fw->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        label_day5_fd->setText(QCoreApplication::translate("Widget", "\344\272\214\347\272\247", nullptr));
        label_day6_fw->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        label_day6_fd->setText(QCoreApplication::translate("Widget", "\344\272\214\347\272\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
