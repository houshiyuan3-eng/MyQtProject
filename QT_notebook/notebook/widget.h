#ifndef WIDGET_H
#define WIDGET_H

#include <QFile>
#include <QMessageBox>
#include <QWidget>
#include<iostream>
#include<QEvent>
#include <QCloseEvent>
using namespace std;
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    QFile file;
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void closeEvent(QCloseEvent *event) override;

private slots:
    void on_btn_open_clicked();

    void on_btn_save_clicked();

    void on_btn_close_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void oncursorPositionChanged();




private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
