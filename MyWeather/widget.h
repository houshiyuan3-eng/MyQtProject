#ifndef WIDGET_H
#define WIDGET_H

#include <QLabel>
#include <QNetworkReply>
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
protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    bool eventFilter(QObject *watcher,QEvent *event);
private slots:

    void readHttpReply(QNetworkReply *reply);
    void pareseWeatherJsonDate(QByteArray dataJson);
    void on_pushButton_clicked();
    QString searchNameJsonFile(QString cityname);
    void on_lineEdit_cityname_returnPressed();
    void drawHighTempLine();
    void drawLowTempLine();

private:
    Ui::Widget *ui;
    QMenu *menuQuit;
    QPoint offend;
    QNetworkReply *reply;
    QList<QLabel *> labeldata;
    QList<QLabel *> labelweather;
    QList<QLabel *> labelfw;
    QList<QLabel *> labelfd;
    QList<QLabel *> labelweathericon;
    QMap<QString,QString> iconurl;
    QNetworkAccessManager *manger;
    QList<QString> hightemp;
    QList<QString> lowtemp;


};
#endif // WIDGET_H
