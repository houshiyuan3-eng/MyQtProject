/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *btn_settablehead;
    QPushButton *pushButton_setrcol;
    QSpinBox *spinBox;
    QPushButton *pushButton_init;
    QPushButton *pushButton_inscol;
    QPushButton *pushButton_addcol;
    QPushButton *pushButton_delcol;
    QPushButton *pushButton_reh;
    QPushButton *pushButton_rew;
    QPushButton *pushButton_showtext;
    QCheckBox *checkBox_edit;
    QCheckBox *checkBox_scolor;
    QCheckBox *checkBox_showhead;
    QCheckBox *checkBox_showrowhead;
    QRadioButton *radioButton_choicecol;
    QRadioButton *radioButton_choiceitem;
    QTableWidget *tableWidget;
    QTextEdit *textEdit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(652, 497);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        btn_settablehead = new QPushButton(groupBox);
        btn_settablehead->setObjectName("btn_settablehead");

        gridLayout->addWidget(btn_settablehead, 0, 0, 1, 3);

        pushButton_setrcol = new QPushButton(groupBox);
        pushButton_setrcol->setObjectName("pushButton_setrcol");

        gridLayout->addWidget(pushButton_setrcol, 1, 0, 1, 1);

        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName("spinBox");
        spinBox->setValue(6);

        gridLayout->addWidget(spinBox, 1, 1, 1, 2);

        pushButton_init = new QPushButton(groupBox);
        pushButton_init->setObjectName("pushButton_init");

        gridLayout->addWidget(pushButton_init, 2, 0, 1, 3);

        pushButton_inscol = new QPushButton(groupBox);
        pushButton_inscol->setObjectName("pushButton_inscol");

        gridLayout->addWidget(pushButton_inscol, 3, 0, 1, 1);

        pushButton_addcol = new QPushButton(groupBox);
        pushButton_addcol->setObjectName("pushButton_addcol");

        gridLayout->addWidget(pushButton_addcol, 3, 2, 1, 1);

        pushButton_delcol = new QPushButton(groupBox);
        pushButton_delcol->setObjectName("pushButton_delcol");

        gridLayout->addWidget(pushButton_delcol, 4, 0, 1, 3);

        pushButton_reh = new QPushButton(groupBox);
        pushButton_reh->setObjectName("pushButton_reh");

        gridLayout->addWidget(pushButton_reh, 5, 0, 1, 2);

        pushButton_rew = new QPushButton(groupBox);
        pushButton_rew->setObjectName("pushButton_rew");

        gridLayout->addWidget(pushButton_rew, 5, 2, 1, 1);

        pushButton_showtext = new QPushButton(groupBox);
        pushButton_showtext->setObjectName("pushButton_showtext");

        gridLayout->addWidget(pushButton_showtext, 6, 0, 1, 3);

        checkBox_edit = new QCheckBox(groupBox);
        checkBox_edit->setObjectName("checkBox_edit");
        checkBox_edit->setChecked(true);

        gridLayout->addWidget(checkBox_edit, 7, 0, 1, 1);

        checkBox_scolor = new QCheckBox(groupBox);
        checkBox_scolor->setObjectName("checkBox_scolor");

        gridLayout->addWidget(checkBox_scolor, 7, 2, 1, 1);

        checkBox_showhead = new QCheckBox(groupBox);
        checkBox_showhead->setObjectName("checkBox_showhead");
        checkBox_showhead->setChecked(true);

        gridLayout->addWidget(checkBox_showhead, 8, 0, 1, 1);

        checkBox_showrowhead = new QCheckBox(groupBox);
        checkBox_showrowhead->setObjectName("checkBox_showrowhead");
        checkBox_showrowhead->setChecked(true);

        gridLayout->addWidget(checkBox_showrowhead, 8, 2, 1, 1);

        radioButton_choicecol = new QRadioButton(groupBox);
        radioButton_choicecol->setObjectName("radioButton_choicecol");

        gridLayout->addWidget(radioButton_choicecol, 9, 0, 1, 1);

        radioButton_choiceitem = new QRadioButton(groupBox);
        radioButton_choiceitem->setObjectName("radioButton_choiceitem");
        radioButton_choiceitem->setChecked(true);

        gridLayout->addWidget(radioButton_choiceitem, 9, 2, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 2, 1);

        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName("tableWidget");

        gridLayout_2->addWidget(tableWidget, 0, 1, 1, 1);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        gridLayout_2->addWidget(textEdit, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "tablewidget", nullptr));
        groupBox->setTitle(QString());
        btn_settablehead->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\346\260\264\345\271\263\350\241\250\345\244\264", nullptr));
        pushButton_setrcol->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\350\241\214", nullptr));
        pushButton_init->setText(QCoreApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\350\241\250\346\240\274\346\225\260\346\215\256", nullptr));
        pushButton_inscol->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\350\241\214", nullptr));
        pushButton_addcol->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\350\241\214", nullptr));
        pushButton_delcol->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\350\241\214", nullptr));
        pushButton_reh->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\212\250\350\260\203\350\212\202\350\241\214\351\253\230", nullptr));
        pushButton_rew->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\212\250\350\260\203\350\212\202\345\210\227\345\256\275", nullptr));
        pushButton_showtext->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\217\226\350\241\250\346\240\274\345\206\205\345\256\271\345\210\260\346\226\207\346\234\254", nullptr));
        checkBox_edit->setText(QCoreApplication::translate("MainWindow", "\350\241\250\346\240\274\345\217\257\347\274\226\350\276\221", nullptr));
        checkBox_scolor->setText(QCoreApplication::translate("MainWindow", "\351\227\264\351\232\224\346\230\276\347\244\272\345\272\225\350\211\262", nullptr));
        checkBox_showhead->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\346\260\264\345\271\263\350\241\250\345\244\264", nullptr));
        checkBox_showrowhead->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\345\236\202\347\233\264\350\241\250\345\244\264", nullptr));
        radioButton_choicecol->setText(QCoreApplication::translate("MainWindow", "\350\241\214\351\200\211\346\213\251", nullptr));
        radioButton_choiceitem->setText(QCoreApplication::translate("MainWindow", "\345\215\225\345\205\203\346\240\274\351\200\211\346\213\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
