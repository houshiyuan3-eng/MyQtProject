#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QLabel>
#include<QStandardItemModel>
#include <QItemSelectionModel>

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

private:
    Ui::MainWindow *ui;
    QLabel *labCurFile;
    QLabel *labCellPos;
    QLabel *labCellText;
    const int FixedColumnCount = 6;
    QStandardItemModel *m_model;
    QItemSelectionModel *m_select;

    void initModelDate(QStringList &fileContent);
private slots:
    void on_CurrentChanged(const QModelIndex &current,const QModelIndex &previous);

    void on_actOpenFile_triggered();
    void on_actreDate_triggered();
    void on_actappend_triggered();
    void on_actinsert_triggered();
    void on_actdel_triggered();
    void on_actclose_triggered();
    void on_actleft_triggered();
    void on_actright_triggered();
    void on_actcenter_triggered();
    void on_actbold_triggered(bool checked);
};
#endif // MAINWINDOW_H
