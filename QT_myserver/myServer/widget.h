#ifndef WIDGET_H
#define WIDGET_H

#include <QTcpServer>
#include <QWidget>
#include "mycombox.h"

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
    void on_pushButton_startListen_clicked();
    void on_newClient_Connnect();
    void on_readyRead_handler();
    // void on_disconnected();
    void mstateChanged(QAbstractSocket::SocketState socketState);

    void on_pushButton_send_clicked();
    void Combox_refush();

    // void on_comboBox_ChoosePort_activated(int index);

    void on_pushButton_stopListen_clicked();

    void on_pushButton_lineout_clicked();

private:
    Ui::Widget *ui;
    QTcpServer *server;
    // int currentindex;
};
#endif // WIDGET_H
