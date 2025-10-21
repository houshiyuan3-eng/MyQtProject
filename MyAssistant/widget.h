#ifndef WIDGET_H
#define WIDGET_H

#include <QCheckBox>
#include <QLineEdit>
#include <QPushButton>
#include <QSerialPort>
#include <QWidget>
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
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:

    void on_pushButton_send_clicked();

    void on_serialData_ReadyToRead();

    void on_pushButton_CloseOrOpenSerise_clicked(bool checked);

    void on_checkBox_seedIntime_clicked(bool checked);

    void on_pushButton_cleanRecord_clicked();

    void on_pushButton_SaveRecord_clicked();

    void on_checkBox_12_clicked(bool checked);


    void on_pushButton_HideTable_clicked(bool checked);

    void on_pushButton_HideHisory_clicked(bool checked);

    void on_comboxreflush();
    void on_command_btn_clicked();

    // void on_pushButton_clicked();

    // void on_pushButton_2_clicked();

    // void on_pushButton_3_clicked();

    // void on_pushButton_4_clicked();

    // void on_pushButton_5_clicked();

    // void on_pushButton_6_clicked();

    // void on_pushButton_7_clicked();

    // void on_pushButton_8_clicked();

    // void on_pushButton_9_clicked();

    void on_checkBox_10_clicked(bool checked);
    void btn_handler();

    void on_pushButtonInit_clicked();

    void on_pushButtonSave_clicked();

    void on_pushButtonLoad_clicked();

private:
    Ui::Widget *ui;
    QSerialPort *serialport;
    int writecnttotal;
    int receivecnttotal;
    QString sendback;
    QTimer *timer;
    QTimer *windowtimer;
    QString mytime;
    QTimer *loopsend;
    int btnindex;
    QList<QPushButton *> btnarray;
    QList<QLineEdit *> leditarray;
    QList<QCheckBox *> chkarray;

};
#endif // WIDGET_H
