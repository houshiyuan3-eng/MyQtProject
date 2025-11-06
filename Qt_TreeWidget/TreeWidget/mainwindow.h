#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QLabel>
#include <QMainWindow>
#include <QTreeWidgetItem>
#include<QSpinBox>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actaddFolder_triggered();

    void on_actaddfile_triggered();

    void on_actdelfile_triggered();

    void on_treeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous);

    void on_actshowall_triggered();

    void changeItemCaption(QTreeWidgetItem *item);

    void on_actzoomrealsize_triggered();

    void on_actzoombyw_triggered();

    void on_actzoombyh_triggered();
    void displayImage(QTreeWidgetItem *item);

    void on_actZoomIn_triggered();

    void on_actzoomOut_triggered();



    void on_actshow_triggered(bool checked);

    void on_actflow_triggered(bool checked);

    void on_dockWidget_visibilityChanged(bool visible);

    void on_dockWidget_topLevelChanged(bool topLevel);

private:
    Ui::MainWindow *ui;
    enum treeColNum{colItem =0, colItemType,colDate};
    enum treeItemType{itTopItem=1001,itGroupItem,itImageItem};
    QLabel *labelfileName;
    QLabel *labelNodeText;
    QSpinBox *spinRatio;
    QPixmap m_pixmap;
    float m_ratio;

};
#endif // MAINWINDOW_H
