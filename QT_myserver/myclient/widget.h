#ifndef WIDGET_H
#define WIDGET_H

#include <QTcpSocket>
#include <QTimer>
#include <QWidget>

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
    void on_pushButton_connect_clicked();
    void mRead_Data_From_Server();

    void on_pushButton_send_clicked();

    void on_pushButton_lineOut_clicked();
    void setSendTextColor(Qt::GlobalColor color,QString str);
    void onConnect();
    void onError(QAbstractSocket::SocketError error);
    void onTimeOut();
private:
    Ui::Widget *ui;
    QTcpSocket *client;
    QTimer *timer;
};
#endif // WIDGET_H
