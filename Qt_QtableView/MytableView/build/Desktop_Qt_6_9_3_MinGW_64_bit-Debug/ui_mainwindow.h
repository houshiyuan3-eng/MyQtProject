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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actOpenFile;
    QAction *actreDate;
    QAction *actappend;
    QAction *actinsert;
    QAction *actdel;
    QAction *actleft;
    QAction *actright;
    QAction *actcenter;
    QAction *actclose;
    QAction *actbold;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QTableView *tableView;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QPlainTextEdit *plainTextEdit;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1000, 643);
        MainWindow->setMinimumSize(QSize(1000, 0));
        MainWindow->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);
        actOpenFile = new QAction(MainWindow);
        actOpenFile->setObjectName("actOpenFile");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::DocumentNew));
        actOpenFile->setIcon(icon);
        actOpenFile->setMenuRole(QAction::MenuRole::NoRole);
        actreDate = new QAction(MainWindow);
        actreDate->setObjectName("actreDate");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::DocumentPrint));
        actreDate->setIcon(icon1);
        actreDate->setMenuRole(QAction::MenuRole::NoRole);
        actappend = new QAction(MainWindow);
        actappend->setObjectName("actappend");
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::AddressBookNew));
        actappend->setIcon(icon2);
        actappend->setMenuRole(QAction::MenuRole::NoRole);
        actinsert = new QAction(MainWindow);
        actinsert->setObjectName("actinsert");
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::ListAdd));
        actinsert->setIcon(icon3);
        actinsert->setMenuRole(QAction::MenuRole::NoRole);
        actdel = new QAction(MainWindow);
        actdel->setObjectName("actdel");
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::ListRemove));
        actdel->setIcon(icon4);
        actdel->setMenuRole(QAction::MenuRole::NoRole);
        actleft = new QAction(MainWindow);
        actleft->setObjectName("actleft");
        QIcon icon5(QIcon::fromTheme(QIcon::ThemeIcon::FormatJustifyLeft));
        actleft->setIcon(icon5);
        actleft->setMenuRole(QAction::MenuRole::NoRole);
        actright = new QAction(MainWindow);
        actright->setObjectName("actright");
        QIcon icon6(QIcon::fromTheme(QIcon::ThemeIcon::FormatJustifyRight));
        actright->setIcon(icon6);
        actright->setMenuRole(QAction::MenuRole::NoRole);
        actcenter = new QAction(MainWindow);
        actcenter->setObjectName("actcenter");
        QIcon icon7(QIcon::fromTheme(QIcon::ThemeIcon::FormatJustifyCenter));
        actcenter->setIcon(icon7);
        actcenter->setMenuRole(QAction::MenuRole::NoRole);
        actclose = new QAction(MainWindow);
        actclose->setObjectName("actclose");
        QIcon icon8(QIcon::fromTheme(QIcon::ThemeIcon::WindowClose));
        actclose->setIcon(icon8);
        actclose->setMenuRole(QAction::MenuRole::NoRole);
        actbold = new QAction(MainWindow);
        actbold->setObjectName("actbold");
        actbold->setCheckable(true);
        QIcon icon9(QIcon::fromTheme(QIcon::ThemeIcon::FormatTextBold));
        actbold->setIcon(icon9);
        actbold->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        tableView = new QTableView(groupBox);
        tableView->setObjectName("tableView");

        gridLayout_2->addWidget(tableView, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName("gridLayout_3");
        plainTextEdit = new QPlainTextEdit(groupBox_2);
        plainTextEdit->setObjectName("plainTextEdit");

        gridLayout_3->addWidget(plainTextEdit, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_2, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        toolBar->addAction(actOpenFile);
        toolBar->addAction(actreDate);
        toolBar->addSeparator();
        toolBar->addAction(actappend);
        toolBar->addAction(actinsert);
        toolBar->addAction(actdel);
        toolBar->addSeparator();
        toolBar->addAction(actleft);
        toolBar->addAction(actright);
        toolBar->addAction(actcenter);
        toolBar->addAction(actbold);
        toolBar->addSeparator();
        toolBar->addAction(actclose);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actOpenFile->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#if QT_CONFIG(tooltip)
        actOpenFile->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actOpenFile->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actreDate->setText(QCoreApplication::translate("MainWindow", "\351\207\215\346\226\260\346\211\223\345\215\260\345\206\205\345\256\271", nullptr));
#if QT_CONFIG(tooltip)
        actreDate->setToolTip(QCoreApplication::translate("MainWindow", "\351\207\215\346\226\260\346\211\223\345\215\260\345\206\205\345\256\271", nullptr));
#endif // QT_CONFIG(tooltip)
        actappend->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\346\225\260\346\215\256", nullptr));
#if QT_CONFIG(tooltip)
        actappend->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\346\225\260\346\215\256", nullptr));
#endif // QT_CONFIG(tooltip)
        actinsert->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\346\225\260\346\215\256", nullptr));
#if QT_CONFIG(tooltip)
        actinsert->setToolTip(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\346\225\260\346\215\256", nullptr));
#endif // QT_CONFIG(tooltip)
        actdel->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\346\225\260\346\215\256", nullptr));
#if QT_CONFIG(tooltip)
        actdel->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\346\225\260\346\215\256", nullptr));
#endif // QT_CONFIG(tooltip)
        actleft->setText(QCoreApplication::translate("MainWindow", "\345\267\246\345\257\271\351\275\220", nullptr));
#if QT_CONFIG(tooltip)
        actleft->setToolTip(QCoreApplication::translate("MainWindow", "\345\267\246\345\257\271\351\275\220", nullptr));
#endif // QT_CONFIG(tooltip)
        actright->setText(QCoreApplication::translate("MainWindow", "\345\217\263\345\257\271\351\275\220", nullptr));
#if QT_CONFIG(tooltip)
        actright->setToolTip(QCoreApplication::translate("MainWindow", "\345\217\263\345\257\271\351\275\220", nullptr));
#endif // QT_CONFIG(tooltip)
        actcenter->setText(QCoreApplication::translate("MainWindow", "\345\261\205\344\270\255\345\257\271\351\275\220", nullptr));
#if QT_CONFIG(tooltip)
        actcenter->setToolTip(QCoreApplication::translate("MainWindow", "\345\261\205\344\270\255\345\257\271\351\275\220", nullptr));
#endif // QT_CONFIG(tooltip)
        actclose->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        actclose->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        actbold->setText(QCoreApplication::translate("MainWindow", "\345\212\240\347\262\227", nullptr));
#if QT_CONFIG(tooltip)
        actbold->setToolTip(QCoreApplication::translate("MainWindow", "\345\212\240\347\262\227", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "TabelView", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "PlainTextEdit", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
