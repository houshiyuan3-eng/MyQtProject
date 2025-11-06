#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDate>
#include <QMainWindow>

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
    void on_btn_settablehead_clicked();

    void on_pushButton_setrcol_clicked();

    void on_pushButton_init_clicked();

    void createItemsARow(int rowNo,QString name,QString sex,QDate date,QString nation,int score,bool isPM);


    void on_pushButton_inscol_clicked();

    void on_pushButton_addcol_clicked();

    void on_pushButton_delcol_clicked();

    void on_pushButton_reh_clicked();

    void on_pushButton_rew_clicked();

    void on_pushButton_showtext_clicked();

    void on_checkBox_edit_clicked(bool checked);

    void on_checkBox_scolor_clicked(bool checked);

    void on_checkBox_showhead_clicked(bool checked);

    void on_checkBox_showrowhead_clicked(bool checked);


    void on_radioButton_choicecol_clicked();

    void on_radioButton_choiceitem_clicked();

private:
    Ui::MainWindow *ui;
    enum FieldColNum{colname=0,colsex,coldate,colnation,colscore,colispartm};
    enum cellType{ctname=1000,ctsex,ctdate,ctnation,ctscore,ctispartm};
};
#endif // MAINWINDOW_H
