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
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <mycombox.h>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit_serverContent;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox_contactMethod;
    QLabel *label_2;
    QComboBox *comboBox_serverIPAddress;
    QLabel *label_3;
    QLineEdit *lineEdit_serverPort;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    myCombox *comboBox_ChoosePort;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_startListen;
    QPushButton *pushButton_stopListen;
    QPushButton *pushButton_lineout;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *textEdit_serverSend;
    QPushButton *pushButton_send;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(547, 560);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 10, 460, 500));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit_serverContent = new QTextEdit(layoutWidget);
        textEdit_serverContent->setObjectName("textEdit_serverContent");
        textEdit_serverContent->setMinimumSize(QSize(400, 250));

        verticalLayout->addWidget(textEdit_serverContent);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        comboBox_contactMethod = new QComboBox(layoutWidget);
        comboBox_contactMethod->addItem(QString());
        comboBox_contactMethod->addItem(QString());
        comboBox_contactMethod->setObjectName("comboBox_contactMethod");

        horizontalLayout->addWidget(comboBox_contactMethod);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        comboBox_serverIPAddress = new QComboBox(layoutWidget);
        comboBox_serverIPAddress->setObjectName("comboBox_serverIPAddress");

        horizontalLayout->addWidget(comboBox_serverIPAddress);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        lineEdit_serverPort = new QLineEdit(layoutWidget);
        lineEdit_serverPort->setObjectName("lineEdit_serverPort");

        horizontalLayout->addWidget(lineEdit_serverPort);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        comboBox_ChoosePort = new myCombox(layoutWidget);
        comboBox_ChoosePort->setObjectName("comboBox_ChoosePort");
        comboBox_ChoosePort->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(comboBox_ChoosePort);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_startListen = new QPushButton(layoutWidget);
        pushButton_startListen->setObjectName("pushButton_startListen");

        horizontalLayout_3->addWidget(pushButton_startListen);

        pushButton_stopListen = new QPushButton(layoutWidget);
        pushButton_stopListen->setObjectName("pushButton_stopListen");

        horizontalLayout_3->addWidget(pushButton_stopListen);

        pushButton_lineout = new QPushButton(layoutWidget);
        pushButton_lineout->setObjectName("pushButton_lineout");

        horizontalLayout_3->addWidget(pushButton_lineout);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        textEdit_serverSend = new QTextEdit(layoutWidget);
        textEdit_serverSend->setObjectName("textEdit_serverSend");

        horizontalLayout_2->addWidget(textEdit_serverSend);

        pushButton_send = new QPushButton(layoutWidget);
        pushButton_send->setObjectName("pushButton_send");
        pushButton_send->setMinimumSize(QSize(0, 80));

        horizontalLayout_2->addWidget(pushButton_send);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout->setStretch(0, 6);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 2);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\351\200\232\350\256\257\345\215\217\350\256\256", nullptr));
        comboBox_contactMethod->setItemText(0, QCoreApplication::translate("Widget", "TCP", nullptr));
        comboBox_contactMethod->setItemText(1, QCoreApplication::translate("Widget", "UDP", nullptr));

        label_2->setText(QCoreApplication::translate("Widget", "\346\234\215\345\212\241\345\231\250IP\345\234\260\345\235\200", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\347\253\257\345\217\243\345\217\267", nullptr));
        lineEdit_serverPort->setText(QCoreApplication::translate("Widget", "8888", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\351\200\211\346\213\251\345\217\221\351\200\201\347\253\257\345\217\243\357\274\232", nullptr));
        pushButton_startListen->setText(QCoreApplication::translate("Widget", "\345\274\200\345\247\213\347\233\221\345\220\254", nullptr));
        pushButton_stopListen->setText(QCoreApplication::translate("Widget", "\345\201\234\346\255\242\347\233\221\345\220\254", nullptr));
        pushButton_lineout->setText(QCoreApplication::translate("Widget", "\346\226\255\345\274\200", nullptr));
        pushButton_send->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
