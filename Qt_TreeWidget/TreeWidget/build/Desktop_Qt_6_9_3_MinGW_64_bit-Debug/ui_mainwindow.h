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
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actaddFolder;
    QAction *actaddfile;
    QAction *actdelfile;
    QAction *actshowall;
    QAction *actZoomIn;
    QAction *actzoomOut;
    QAction *actzoomrealsize;
    QAction *actclose;
    QAction *actzoombyw;
    QAction *actzoombyh;
    QAction *actflow;
    QAction *actshow;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_3;
    QLabel *labelpix;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_2;
    QTreeWidget *treeWidget;
    QToolBar *toolBar_statue;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 632);
        MainWindow->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);
        actaddFolder = new QAction(MainWindow);
        actaddFolder->setObjectName("actaddFolder");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::FolderNew));
        actaddFolder->setIcon(icon);
        actaddFolder->setMenuRole(QAction::MenuRole::NoRole);
        actaddfile = new QAction(MainWindow);
        actaddfile->setObjectName("actaddfile");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::DocumentNew));
        actaddfile->setIcon(icon1);
        actaddfile->setMenuRole(QAction::MenuRole::NoRole);
        actdelfile = new QAction(MainWindow);
        actdelfile->setObjectName("actdelfile");
        actdelfile->setEnabled(false);
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::ApplicationExit));
        actdelfile->setIcon(icon2);
        actdelfile->setMenuRole(QAction::MenuRole::NoRole);
        actshowall = new QAction(MainWindow);
        actshowall->setObjectName("actshowall");
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::DocumentProperties));
        actshowall->setIcon(icon3);
        actshowall->setMenuRole(QAction::MenuRole::NoRole);
        actZoomIn = new QAction(MainWindow);
        actZoomIn->setObjectName("actZoomIn");
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::ZoomIn));
        actZoomIn->setIcon(icon4);
        actZoomIn->setMenuRole(QAction::MenuRole::NoRole);
        actzoomOut = new QAction(MainWindow);
        actzoomOut->setObjectName("actzoomOut");
        QIcon icon5(QIcon::fromTheme(QIcon::ThemeIcon::ZoomOut));
        actzoomOut->setIcon(icon5);
        actzoomOut->setMenuRole(QAction::MenuRole::NoRole);
        actzoomrealsize = new QAction(MainWindow);
        actzoomrealsize->setObjectName("actzoomrealsize");
        QIcon icon6(QIcon::fromTheme(QIcon::ThemeIcon::SystemReboot));
        actzoomrealsize->setIcon(icon6);
        actzoomrealsize->setMenuRole(QAction::MenuRole::NoRole);
        actclose = new QAction(MainWindow);
        actclose->setObjectName("actclose");
        QIcon icon7(QIcon::fromTheme(QIcon::ThemeIcon::WindowClose));
        actclose->setIcon(icon7);
        actclose->setMenuRole(QAction::MenuRole::NoRole);
        actzoombyw = new QAction(MainWindow);
        actzoombyw->setObjectName("actzoombyw");
        QIcon icon8(QIcon::fromTheme(QIcon::ThemeIcon::MediaEject));
        actzoombyw->setIcon(icon8);
        actzoombyw->setMenuRole(QAction::MenuRole::NoRole);
        actzoombyh = new QAction(MainWindow);
        actzoombyh->setObjectName("actzoombyh");
        QIcon icon9(QIcon::fromTheme(QIcon::ThemeIcon::MediaSkipForward));
        actzoombyh->setIcon(icon9);
        actzoombyh->setMenuRole(QAction::MenuRole::NoRole);
        actflow = new QAction(MainWindow);
        actflow->setObjectName("actflow");
        actflow->setCheckable(true);
        QIcon icon10(QIcon::fromTheme(QIcon::ThemeIcon::ZoomFitBest));
        actflow->setIcon(icon10);
        actflow->setMenuRole(QAction::MenuRole::NoRole);
        actshow = new QAction(MainWindow);
        actshow->setObjectName("actshow");
        actshow->setCheckable(true);
        actshow->setChecked(true);
        QIcon icon11(QIcon::fromTheme(QIcon::ThemeIcon::CameraWeb));
        actshow->setIcon(icon11);
        actshow->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setStyleSheet(QString::fromUtf8("border-color: rgb(67, 255, 34);"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 522, 510));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setObjectName("gridLayout_3");
        labelpix = new QLabel(scrollAreaWidgetContents);
        labelpix->setObjectName("labelpix");
        labelpix->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(labelpix, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName("dockWidget");
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName("dockWidgetContents");
        gridLayout_2 = new QGridLayout(dockWidgetContents);
        gridLayout_2->setObjectName("gridLayout_2");
        treeWidget = new QTreeWidget(dockWidgetContents);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem);
        treeWidget->setObjectName("treeWidget");

        gridLayout_2->addWidget(treeWidget, 0, 0, 1, 1);

        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(Qt::DockWidgetArea::LeftDockWidgetArea, dockWidget);
        toolBar_statue = new QToolBar(MainWindow);
        toolBar_statue->setObjectName("toolBar_statue");
        MainWindow->addToolBar(Qt::ToolBarArea::BottomToolBarArea, toolBar_statue);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        toolBar->addAction(actaddFolder);
        toolBar->addAction(actaddfile);
        toolBar->addAction(actdelfile);
        toolBar->addAction(actshowall);
        toolBar->addSeparator();
        toolBar->addAction(actZoomIn);
        toolBar->addAction(actzoomOut);
        toolBar->addAction(actzoomrealsize);
        toolBar->addAction(actzoombyw);
        toolBar->addAction(actzoombyh);
        toolBar->addSeparator();
        toolBar->addAction(actflow);
        toolBar->addAction(actshow);
        toolBar->addSeparator();
        toolBar->addAction(actclose);

        retranslateUi(MainWindow);
        QObject::connect(actclose, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actaddFolder->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\347\233\256\345\275\225", nullptr));
#if QT_CONFIG(tooltip)
        actaddFolder->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\347\233\256\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actaddFolder->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actaddfile->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\346\226\207\344\273\266", nullptr));
#if QT_CONFIG(tooltip)
        actaddfile->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actaddfile->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actdelfile->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\212\202\347\202\271", nullptr));
#if QT_CONFIG(tooltip)
        actdelfile->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\212\202\347\202\271", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actdelfile->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actshowall->setText(QCoreApplication::translate("MainWindow", "\351\201\215\345\216\206\350\212\202\347\202\271", nullptr));
        actZoomIn->setText(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247", nullptr));
#if QT_CONFIG(tooltip)
        actZoomIn->setToolTip(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247", nullptr));
#endif // QT_CONFIG(tooltip)
        actzoomOut->setText(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217", nullptr));
#if QT_CONFIG(tooltip)
        actzoomOut->setToolTip(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217", nullptr));
#endif // QT_CONFIG(tooltip)
        actzoomrealsize->setText(QCoreApplication::translate("MainWindow", "\345\256\236\351\231\205\345\244\247\345\260\217", nullptr));
#if QT_CONFIG(tooltip)
        actzoomrealsize->setToolTip(QCoreApplication::translate("MainWindow", "\345\256\236\351\231\205\345\244\247\345\260\217", nullptr));
#endif // QT_CONFIG(tooltip)
        actclose->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
#if QT_CONFIG(tooltip)
        actclose->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
#endif // QT_CONFIG(tooltip)
        actzoombyw->setText(QCoreApplication::translate("MainWindow", "\346\214\211\345\256\275\347\274\251\346\224\276", nullptr));
#if QT_CONFIG(tooltip)
        actzoombyw->setToolTip(QCoreApplication::translate("MainWindow", "\346\214\211\345\256\275\347\274\251\346\224\276", nullptr));
#endif // QT_CONFIG(tooltip)
        actzoombyh->setText(QCoreApplication::translate("MainWindow", "\346\214\211\351\253\230\347\274\251\346\224\276", nullptr));
#if QT_CONFIG(tooltip)
        actzoombyh->setToolTip(QCoreApplication::translate("MainWindow", "\346\214\211\351\253\230\347\274\251\346\224\276", nullptr));
#endif // QT_CONFIG(tooltip)
        actflow->setText(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\243\346\265\256\345\212\250", nullptr));
#if QT_CONFIG(tooltip)
        actflow->setToolTip(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\243\346\265\256\345\212\250", nullptr));
#endif // QT_CONFIG(tooltip)
        actshow->setText(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\243\345\217\257\350\247\206", nullptr));
#if QT_CONFIG(tooltip)
        actshow->setToolTip(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\243\345\217\257\350\247\206", nullptr));
#endif // QT_CONFIG(tooltip)
        labelpix->setText(QCoreApplication::translate("MainWindow", "image", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\347\233\256\345\275\225\346\240\221", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\350\247\206\345\233\276", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\346\227\266\351\227\264", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271", nullptr));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("MainWindow", " 121", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("MainWindow", "images item", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled);

        toolBar_statue->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
