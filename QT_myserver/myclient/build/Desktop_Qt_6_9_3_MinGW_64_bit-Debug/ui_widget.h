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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit_clientContent;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLineEdit *lineEdit_clientIP;
    QLabel *label_2;
    QLineEdit *lineEdit_clientPort;
    QPushButton *pushButton_connect;
    QPushButton *pushButton_lineOut;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *textEdit_clientSend;
    QPushButton *pushButton_send;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(574, 532);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 591, 541));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit_clientContent = new QTextEdit(layoutWidget);
        textEdit_clientContent->setObjectName("textEdit_clientContent");
        textEdit_clientContent->setMinimumSize(QSize(200, 350));

        verticalLayout->addWidget(textEdit_clientContent);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit_clientIP = new QLineEdit(layoutWidget);
        lineEdit_clientIP->setObjectName("lineEdit_clientIP");

        horizontalLayout->addWidget(lineEdit_clientIP);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        lineEdit_clientPort = new QLineEdit(layoutWidget);
        lineEdit_clientPort->setObjectName("lineEdit_clientPort");

        horizontalLayout->addWidget(lineEdit_clientPort);

        pushButton_connect = new QPushButton(layoutWidget);
        pushButton_connect->setObjectName("pushButton_connect");

        horizontalLayout->addWidget(pushButton_connect);

        pushButton_lineOut = new QPushButton(layoutWidget);
        pushButton_lineOut->setObjectName("pushButton_lineOut");

        horizontalLayout->addWidget(pushButton_lineOut);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        textEdit_clientSend = new QTextEdit(layoutWidget);
        textEdit_clientSend->setObjectName("textEdit_clientSend");

        horizontalLayout_2->addWidget(textEdit_clientSend);

        pushButton_send = new QPushButton(layoutWidget);
        pushButton_send->setObjectName("pushButton_send");
        pushButton_send->setMinimumSize(QSize(0, 60));

        horizontalLayout_2->addWidget(pushButton_send);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout->setStretch(0, 6);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "houshiyuan_\347\275\221\347\273\234\350\260\203\350\257\225\345\212\251\346\211\213_\345\256\242\346\210\267\347\253\257_13723024900@163.com", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\234\215\345\212\241\345\231\250IP", nullptr));
        lineEdit_clientIP->setText(QCoreApplication::translate("Widget", "127.0.0.1", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243\345\217\267", nullptr));
        lineEdit_clientPort->setText(QCoreApplication::translate("Widget", "8888", nullptr));
        pushButton_connect->setText(QCoreApplication::translate("Widget", "\350\277\236\346\216\245", nullptr));
        pushButton_lineOut->setText(QCoreApplication::translate("Widget", "\346\226\255\345\274\200", nullptr));
        pushButton_send->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
