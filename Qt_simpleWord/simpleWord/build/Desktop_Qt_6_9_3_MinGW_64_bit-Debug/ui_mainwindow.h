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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "myedit.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *add_Files;
    QAction *add_open;
    QAction *file_save;
    QAction *file_del;
    QAction *file_copy;
    QAction *file_paste;
    QAction *file_redo;
    QAction *file_undo;
    QAction *font_bold;
    QAction *font_ltalic;
    QAction *file_underline;
    QAction *file_chinese;
    QAction *file_engilsh;
    QAction *file_close;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    myEdit *textEdit_content;
    QMenuBar *menubar;
    QMenu *menu_F;
    QMenu *menu_E;
    QMenu *menu_N;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_down;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(882, 614);
        MainWindow->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);
        add_Files = new QAction(MainWindow);
        add_Files->setObjectName("add_Files");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/bendiwenjian.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        add_Files->setIcon(icon);
        add_Files->setMenuRole(QAction::MenuRole::NoRole);
        add_open = new QAction(MainWindow);
        add_open->setObjectName("add_open");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/morenwenjian.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        add_open->setIcon(icon1);
        add_open->setMenuRole(QAction::MenuRole::NoRole);
        file_save = new QAction(MainWindow);
        file_save->setObjectName("file_save");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/txtwenjian.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        file_save->setIcon(icon2);
        file_save->setMenuRole(QAction::MenuRole::NoRole);
        file_del = new QAction(MainWindow);
        file_del->setObjectName("file_del");
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::EditCut));
        file_del->setIcon(icon3);
        file_del->setMenuRole(QAction::MenuRole::NoRole);
        file_copy = new QAction(MainWindow);
        file_copy->setObjectName("file_copy");
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::EditCopy));
        file_copy->setIcon(icon4);
        file_copy->setMenuRole(QAction::MenuRole::NoRole);
        file_paste = new QAction(MainWindow);
        file_paste->setObjectName("file_paste");
        QIcon icon5(QIcon::fromTheme(QIcon::ThemeIcon::EditPaste));
        file_paste->setIcon(icon5);
        file_paste->setMenuRole(QAction::MenuRole::NoRole);
        file_redo = new QAction(MainWindow);
        file_redo->setObjectName("file_redo");
        QIcon icon6(QIcon::fromTheme(QIcon::ThemeIcon::EditRedo));
        file_redo->setIcon(icon6);
        file_redo->setMenuRole(QAction::MenuRole::NoRole);
        file_undo = new QAction(MainWindow);
        file_undo->setObjectName("file_undo");
        QIcon icon7(QIcon::fromTheme(QIcon::ThemeIcon::DocumentRevert));
        file_undo->setIcon(icon7);
        file_undo->setMenuRole(QAction::MenuRole::NoRole);
        font_bold = new QAction(MainWindow);
        font_bold->setObjectName("font_bold");
        font_bold->setCheckable(true);
        QIcon icon8(QIcon::fromTheme(QIcon::ThemeIcon::FormatTextBold));
        font_bold->setIcon(icon8);
        font_bold->setMenuRole(QAction::MenuRole::NoRole);
        font_ltalic = new QAction(MainWindow);
        font_ltalic->setObjectName("font_ltalic");
        font_ltalic->setCheckable(true);
        QIcon icon9(QIcon::fromTheme(QIcon::ThemeIcon::FormatTextItalic));
        font_ltalic->setIcon(icon9);
        font_ltalic->setMenuRole(QAction::MenuRole::NoRole);
        file_underline = new QAction(MainWindow);
        file_underline->setObjectName("file_underline");
        file_underline->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icon/xiahuaxian.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        file_underline->setIcon(icon10);
        file_underline->setMenuRole(QAction::MenuRole::NoRole);
        file_chinese = new QAction(MainWindow);
        file_chinese->setObjectName("file_chinese");
        file_chinese->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icon/chinese.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        file_chinese->setIcon(icon11);
        file_chinese->setMenuRole(QAction::MenuRole::NoRole);
        file_engilsh = new QAction(MainWindow);
        file_engilsh->setObjectName("file_engilsh");
        file_engilsh->setCheckable(true);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icon/english.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        file_engilsh->setIcon(icon12);
        file_engilsh->setMenuRole(QAction::MenuRole::NoRole);
        file_close = new QAction(MainWindow);
        file_close->setObjectName("file_close");
        QIcon icon13(QIcon::fromTheme(QIcon::ThemeIcon::ApplicationExit));
        file_close->setIcon(icon13);
        file_close->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        textEdit_content = new myEdit(centralwidget);
        textEdit_content->setObjectName("textEdit_content");

        gridLayout->addWidget(textEdit_content, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 882, 21));
        menu_F = new QMenu(menubar);
        menu_F->setObjectName("menu_F");
        menu_E = new QMenu(menubar);
        menu_E->setObjectName("menu_E");
        menu_N = new QMenu(menubar);
        menu_N->setObjectName("menu_N");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);
        toolBar_down = new QToolBar(MainWindow);
        toolBar_down->setObjectName("toolBar_down");
        MainWindow->addToolBar(Qt::ToolBarArea::BottomToolBarArea, toolBar_down);

        menubar->addAction(menu_F->menuAction());
        menubar->addAction(menu_E->menuAction());
        menubar->addAction(menu_N->menuAction());
        menu_F->addAction(add_Files);
        menu_F->addAction(add_open);
        menu_F->addAction(file_save);
        menu_E->addAction(file_del);
        menu_E->addAction(file_copy);
        menu_E->addAction(file_paste);
        menu_E->addSeparator();
        menu_E->addAction(file_undo);
        menu_E->addAction(file_redo);
        menu_N->addAction(font_bold);
        menu_N->addAction(font_ltalic);
        menu_N->addAction(file_underline);
        toolBar->addAction(add_Files);
        toolBar->addAction(add_open);
        toolBar->addAction(file_save);
        toolBar->addSeparator();
        toolBar->addAction(file_del);
        toolBar->addAction(file_copy);
        toolBar->addAction(file_paste);
        toolBar->addSeparator();
        toolBar->addAction(file_undo);
        toolBar->addAction(file_redo);
        toolBar->addSeparator();
        toolBar->addAction(font_bold);
        toolBar->addAction(font_ltalic);
        toolBar->addAction(file_underline);
        toolBar->addSeparator();
        toolBar->addAction(file_chinese);
        toolBar->addAction(file_engilsh);

        retranslateUi(MainWindow);
        QObject::connect(file_del, &QAction::triggered, textEdit_content, qOverload<>(&myEdit::cut));
        QObject::connect(file_copy, &QAction::triggered, textEdit_content, qOverload<>(&myEdit::copy));
        QObject::connect(file_paste, &QAction::triggered, textEdit_content, qOverload<>(&myEdit::paste));
        QObject::connect(file_undo, &QAction::triggered, textEdit_content, qOverload<>(&myEdit::undo));
        QObject::connect(file_redo, &QAction::triggered, textEdit_content, qOverload<>(&myEdit::redo));
        QObject::connect(file_close, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));
        QObject::connect(textEdit_content, SIGNAL(undoAvailable(bool)), file_undo, SLOT(setEnabled(bool)));
        QObject::connect(textEdit_content, SIGNAL(redoAvailable(bool)), file_redo, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        add_Files->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
#if QT_CONFIG(tooltip)
        add_Files->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        add_Files->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        add_open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        add_open->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        add_open->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        file_save->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#if QT_CONFIG(tooltip)
        file_save->setToolTip(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        file_save->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        file_del->setText(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207", nullptr));
#if QT_CONFIG(tooltip)
        file_del->setToolTip(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        file_del->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        file_copy->setText(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
#if QT_CONFIG(tooltip)
        file_copy->setToolTip(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        file_copy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        file_paste->setText(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264", nullptr));
#if QT_CONFIG(tooltip)
        file_paste->setToolTip(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        file_paste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        file_redo->setText(QCoreApplication::translate("MainWindow", "\346\201\242\345\244\215", nullptr));
#if QT_CONFIG(tooltip)
        file_redo->setToolTip(QCoreApplication::translate("MainWindow", "\346\201\242\345\244\215", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        file_redo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        file_undo->setText(QCoreApplication::translate("MainWindow", "\346\222\244\351\224\200", nullptr));
#if QT_CONFIG(tooltip)
        file_undo->setToolTip(QCoreApplication::translate("MainWindow", "\346\222\244\351\224\200", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        file_undo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        font_bold->setText(QCoreApplication::translate("MainWindow", "\347\262\227\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        font_bold->setToolTip(QCoreApplication::translate("MainWindow", "\347\262\227\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        font_bold->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        font_ltalic->setText(QCoreApplication::translate("MainWindow", "\346\226\234\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        font_ltalic->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\234\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        font_ltalic->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        file_underline->setText(QCoreApplication::translate("MainWindow", "\344\270\213\345\210\222\347\272\277", nullptr));
#if QT_CONFIG(tooltip)
        file_underline->setToolTip(QCoreApplication::translate("MainWindow", "\344\270\213\345\210\222\347\272\277", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        file_underline->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+U", nullptr));
#endif // QT_CONFIG(shortcut)
        file_chinese->setText(QCoreApplication::translate("MainWindow", "\344\270\255\346\226\207", nullptr));
#if QT_CONFIG(tooltip)
        file_chinese->setToolTip(QCoreApplication::translate("MainWindow", "\344\270\255\346\226\207", nullptr));
#endif // QT_CONFIG(tooltip)
        file_engilsh->setText(QCoreApplication::translate("MainWindow", "\350\213\261\346\226\207", nullptr));
#if QT_CONFIG(tooltip)
        file_engilsh->setToolTip(QCoreApplication::translate("MainWindow", "\350\213\261\346\226\207", nullptr));
#endif // QT_CONFIG(tooltip)
        file_close->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
#if QT_CONFIG(tooltip)
        file_close->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
#endif // QT_CONFIG(tooltip)
        textEdit_content->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">   \345\207\272\345\270\210\350\241\250</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">   \344\270\211\345\233\275\302\267\350\257\270\350\221\233\344\272\256  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px;"
                        " margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">  \345\205\210\345\270\235\345\210\233\344\270\232\346\234\252\345\215\212\350\200\214\344\270\255\351\201\223\345\264\251\346\256\202\357\274\214\344\273\212\345\244\251\344\270\213\344\270\211\345\210\206\357\274\214\347\233\212\345\267\236\347\226\262\345\274\212\357\274\214\346\255\244\350\257\232\345\215\261\346\200\245\345\255\230\344\272\241\344\271\213\347\247\213\344\271\237\343\200\202\347\204\266\344\276\215\345\215\253\344\271\213\350\207\243\344\270\215\346\207\210\344\272\216\345\206\205\357\274\214\345\277\240\345\277\227\344\271\213\345\243\253\345\277\230\350\272\253\344\272\216\345\244\226\350\200\205\357\274\214\347\233\226\350\277\275\345\205\210\345\270\235\344\271\213\346\256\212\351\201\207\357\274\214\346\254\262\346\212\245\344\271\213\344\272\216\351\231\233\344\270\213\344\271\237\343\200\202\350\257\232\345\256\234\345\274\200\345\274\240\345\234\243\345\220\254\357\274\214\344\273\245\345\205"
                        "\211\345\205\210\345\270\235\351\201\227\345\276\267\357\274\214\346\201\242\345\274\230\345\277\227\345\243\253\344\271\213\346\260\224\357\274\214\344\270\215\345\256\234\345\246\204\350\207\252\350\217\262\350\226\204\357\274\214\345\274\225\345\226\273\345\244\261\344\271\211\357\274\214\344\273\245\345\241\236\345\277\240\350\260\217\344\271\213\350\267\257\344\271\237\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">  \345\256\253\344\270\255\345\272\234\344\270\255\357\274\214\344\277\261\344\270\272\344\270\200\344\275\223\357\274\214\351\231\237\347\275\232\350\207\247\345\220\246\357\274\214\344\270\215\345\256\234\345\274\202\345\220\214\343\200\202\350\213\245\346\234\211\344\275\234\345\245\270\347\212\257\347\247\221\345\217\212\344\270\272\345\277\240\345\226\204\350\200\205\357\274\214\345\256\234\344\273\230\346\234\211\345\217\270\350\256\272\345\205\266\345\210\221"
                        "\350\265\217\357\274\214\344\273\245\346\230\255\351\231\233\344\270\213\345\271\263\346\230\216\344\271\213\347\220\206\357\274\214\344\270\215\345\256\234\345\201\217\347\247\201\357\274\214\344\275\277\345\206\205\345\244\226\345\274\202\346\263\225\344\271\237\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">  \350\221\243\345\205\201\347\255\211\357\274\214\346\255\244\347\232\206\350\211\257\345\256\236\357\274\214\345\277\227\350\231\221\345\277\240\347\272\257\357\274\214\346\230\257\344\273\245\345\205\210\345\270\235\347\256\200\346\213\224\344\273\245\351\201\227\351\231\233\344\270\213\343\200\202\346\204\232\344\273\245\344\270\272\345\256\253\344\270\255\344\271\213\344\272\213\357\274\214\344\272\213\346\227\240\345\244\247\345\260\217\357\274\214\346\202\211\344\273\245\345\222\250\344\271\213\357\274\214\347\204\266\345\220\216\346\226\275\350\241\214\357\274\214\345"
                        "\277\205\350\203\275\350\243\250\350\241\245\351\230\231\346\274\217\357\274\214\346\234\211\346\211\200\345\271\277\347\233\212\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">  \345\260\206\345\206\233\345\220\221\345\256\240\357\274\214\346\200\247\350\241\214\346\267\221\345\235\207\357\274\214\346\231\223\347\225\205\345\206\233\344\272\213\357\274\214\350\257\225\347\224\250\344\272\216\346\230\224\346\227\245\357\274\214\345\205\210\345\270\235\347\247\260\344\271\213\346\233\260\350\203\275\357\274\214\346\230\257\344\273\245\344\274\227\350\256\256\344\270\276\345\256\240\344\270\272\347\235\243\343\200\202\346\204\232\344\273\245\344\270\272\350\220\245\344\270\255\344\271\213\344\272\213\357\274\214\346\202\211\344\273\245\345\222\250\344\271\213\357\274\214\345\277\205\350\203\275\344\275\277\350\241\214\351\230\265\345\222\214\347\235\246\357\274\214\344\274\230\345\212"
                        "\243\345\276\227\346\211\200\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">  \344\272\262\350\264\244\350\207\243\357\274\214\350\277\234\345\260\217\344\272\272\357\274\214\346\255\244\345\205\210\346\261\211\346\211\200\344\273\245\345\205\264\351\232\206\344\271\237\357\274\233\344\272\262\345\260\217\344\272\272\357\274\214\350\277\234\350\264\244\350\207\243\357\274\214\346\255\244\345\220\216\346\261\211\346\211\200\344\273\245\345\200\276\351\242\223\344\271\237\343\200\202\345\205\210\345\270\235\345\234\250\346\227\266\357\274\214\346\257\217\344\270\216\350\207\243\350\256\272\346\255\244\344\272\213\357\274\214\347\201\265\344\271\237\343\200\202\345\217\202\345\206\233\357\274\214\346\255\244\346\202\211\350\264\236\350\211\257\346\255\273\350\212\202\344\271\213\350\207\243\357\274\214\346\204\277\351\231\233\344\270\213\344\272\262\344\271\213\344\277\241\344\271\213"
                        "\357\274\214\345\210\231\346\261\211\345\256\244\344\271\213\351\232\206\357\274\214\345\217\257\350\256\241\346\227\245\350\200\214\345\276\205\344\271\237\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">  \350\207\243\346\234\254\345\270\203\350\241\243\357\274\214\350\272\254\350\200\225\344\272\216\345\215\227\351\230\263\357\274\214\350\213\237\345\205\250\346\200\247\345\221\275\344\272\216\344\271\261\344\270\226\357\274\214\344\270\215\346\261\202\351\227\273\350\276\276\344\272\216\350\257\270\344\276\257\343\200\202\345\205\210\345\270\235\344\270\215\344\273\245\350\207\243\345\215\221\351\204\231\357\274\214\347\214\245\350\207\252\346\236\211\345\261\210\357\274\214\344\270\211\351\241\276\350\207\243\344\272\216\350\215\211\345\272\220\344\271\213\344\270\255\357\274\214\345\222\250\350\207\243\344\273\245\345\275\223\344\270\226\344\271\213\344\272\213\357\274\214\347"
                        "\224\261\346\230\257\346\204\237\346\277\200\357\274\214\351\201\202\350\256\270\345\205\210\345\270\235\344\273\245\351\251\261\351\251\260\343\200\202\345\220\216\345\200\274\345\200\276\350\246\206\357\274\214\345\217\227\344\273\273\344\272\216\350\264\245\345\206\233\344\271\213\351\231\205\357\274\214\345\245\211\345\221\275\344\272\216\345\215\261\351\232\276\344\271\213\351\227\264\357\274\214\345\260\224\346\235\245\344\272\214\345\215\201\346\234\211\344\270\200\345\271\264\347\237\243\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">  \345\205\210\345\270\235\347\237\245\350\207\243\350\260\250\346\205\216\357\274\214\346\225\205\344\270\264\345\264\251\345\257\204\350\207\243\344\273\245\345\244\247\344\272\213\344\271\237\343\200\202\345\217\227\345\221\275\344\273\245\346\235\245\357\274\214\345\244\231\345\244\234\345\277\247\345\217\271\357\274\214\346\201\220\346\211"
                        "\230\344\273\230\344\270\215\346\225\210\357\274\214\344\273\245\344\274\244\345\205\210\345\270\235\344\271\213\346\230\216\357\274\214\346\225\205\344\272\224\346\234\210\346\270\241\346\263\270\357\274\214\346\267\261\345\205\245\344\270\215\346\257\233\343\200\202\344\273\212\345\215\227\346\226\271\345\267\262\345\256\232\357\274\214\345\205\265\347\224\262\345\267\262\350\266\263\357\274\214\345\275\223\345\245\226\347\216\207\344\270\211\345\206\233\357\274\214\345\214\227\345\256\232\344\270\255\345\216\237\357\274\214\345\272\266\347\253\255\351\251\275\351\222\235\357\274\214\346\224\230\351\231\244\345\245\270\345\207\266\357\274\214\345\205\264\345\244\215\346\261\211\345\256\244\357\274\214\350\277\230\344\272\216\346\227\247\351\203\275\343\200\202\346\255\244\350\207\243\346\211\200\344\273\245\346\212\245\345\205\210\345\270\235\350\200\214\345\277\240\351\231\233\344\270\213\344\271\213\350\201\214\345\210\206\344\271\237\343\200\202\350\207\263\344\272\216\346\226\237\351\205\214\346\215\237\347"
                        "\233\212\357\274\214\350\277\233\345\260\275\345\277\240\350\250\200\357\274\214\345\205\201\344\271\213\344\273\273\344\271\237\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">  \346\204\277\351\231\233\344\270\213\346\211\230\350\207\243\344\273\245\350\256\250\350\264\274\345\205\264\345\244\215\344\271\213\346\225\210\357\274\214\344\270\215\346\225\210\357\274\214\345\210\231\346\262\273\350\207\243\344\271\213\347\275\252\357\274\214\344\273\245\345\221\212\345\205\210\345\270\235\344\271\213\347\201\265\343\200\202\350\213\245\346\227\240\345\205\264\345\276\267\344\271\213\350\250\200\357\274\214\345\205\201\347\255\211\344\271\213\346\205\242\357\274\214\344\273\245\345\275\260\345\205\266\345\222\216\357\274\233\351\231\233\344\270\213\344\272\246\345\256\234\350\207\252\350\260\213\357\274\214\344\273\245\345\222\250\350\257\271\345\226\204\351\201\223\357\274\214\345\257"
                        "\237\347\272\263\351\233\205\350\250\200\343\200\202\346\267\261\350\277\275\345\205\210\345\270\235\351\201\227\350\257\217\357\274\214\350\207\243\344\270\215\350\203\234\345\217\227\346\201\251\346\204\237\346\277\200\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">  \344\273\212\345\275\223\350\277\234\347\246\273\357\274\214\344\270\264\350\241\250\346\266\225\351\233\266\357\274\214\344\270\215\347\237\245\346\211\200\350\250\200\343\200\202</span></p></body></html>", nullptr));
        menu_F->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", nullptr));
        menu_E->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221(&E)", nullptr));
        menu_N->setTitle(QCoreApplication::translate("MainWindow", "\346\240\274\345\274\217(&M)", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        toolBar_down->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
