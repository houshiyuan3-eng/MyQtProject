/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "mytextedit.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *widgetbtn;
    QWidget *layoutWidget1;
    QHBoxLayout *hLayoutbtn;
    QPushButton *btn_open;
    QPushButton *btn_save;
    QPushButton *btn_close;
    QSpacerItem *horizontalSpacer;
    MyTextEdit *textEdit;
    QWidget *widgetdown;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelposition;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(923, 700);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 751, 561));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widgetbtn = new QWidget(layoutWidget);
        widgetbtn->setObjectName("widgetbtn");
        widgetbtn->setMinimumSize(QSize(0, 60));
        widgetbtn->setStyleSheet(QString::fromUtf8("background-color: rgb(84, 84, 84);"));
        layoutWidget1 = new QWidget(widgetbtn);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(20, 10, 381, 47));
        hLayoutbtn = new QHBoxLayout(layoutWidget1);
        hLayoutbtn->setObjectName("hLayoutbtn");
        hLayoutbtn->setContentsMargins(0, 0, 0, 0);
        btn_open = new QPushButton(layoutWidget1);
        btn_open->setObjectName("btn_open");
        btn_open->setMinimumSize(QSize(45, 45));
        btn_open->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/f1.png);}\n"
"QPushButton::hover{border-image: url(:/f2.png);}\n"
"QPushButton::pressed{border-image: url(:/f3.png);}"));

        hLayoutbtn->addWidget(btn_open);

        btn_save = new QPushButton(layoutWidget1);
        btn_save->setObjectName("btn_save");
        btn_save->setMinimumSize(QSize(45, 45));
        btn_save->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/s1.png);}\n"
"QPushButton::hover{border-image: url(:/s2.png);}\n"
"QPushButton::pressed{border-image: url(:/c3.png);}"));

        hLayoutbtn->addWidget(btn_save);

        btn_close = new QPushButton(layoutWidget1);
        btn_close->setObjectName("btn_close");
        btn_close->setMinimumSize(QSize(45, 45));
        btn_close->setStyleSheet(QString::fromUtf8("QPushButton{border-image: url(:/c1.png);}\n"
"QPushButton::hover{border-image: url(:/c2.png);}\n"
"QPushButton::pressed{border-image: url(:/c3.png);}"));

        hLayoutbtn->addWidget(btn_close);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hLayoutbtn->addItem(horizontalSpacer);


        verticalLayout->addWidget(widgetbtn);

        textEdit = new MyTextEdit(layoutWidget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        widgetdown = new QWidget(layoutWidget);
        widgetdown->setObjectName("widgetdown");
        widgetdown->setMinimumSize(QSize(0, 50));
        widgetdown->setStyleSheet(QString::fromUtf8("background-color: rgb(84, 84, 84);"));
        layoutWidget2 = new QWidget(widgetdown);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(50, 10, 691, 23));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        labelposition = new QLabel(layoutWidget2);
        labelposition->setObjectName("labelposition");

        horizontalLayout->addWidget(labelposition);

        comboBox = new QComboBox(layoutWidget2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(84, 84, 84);"));

        horizontalLayout->addWidget(comboBox);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widgetdown);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\344\276\257\344\270\226\346\272\220\347\232\204\350\256\260\344\272\213\346\234\254", nullptr));
        btn_open->setText(QString());
        btn_save->setText(QString());
        btn_close->setText(QString());
        labelposition->setText(QCoreApplication::translate("Widget", "\347\254\2541\350\241\214\347\254\2541\345\210\227", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Widget", "UTF-8", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Widget", "GBK", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Widget", "GB18030", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Widget", "UTF-16", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
