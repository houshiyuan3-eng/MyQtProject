#ifndef WIDGET_H
#define WIDGET_H

#include <QPainter>
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
protected:
    void paintEvent(QPaintEvent *e) override;
private slots:
    void AutoRun();
    void initCanvas(QPainter &painter);
    void MakeEllipse(QPainter &painter,int radical);
    void MakeCarBody(QPainter &painter,int startAngle,int angle,int radical);
    void MakePointer(QPainter &painter,int startAngle,int angle,int radical);
    void MakeRate(QPainter &painter,int startAngle,int angle,int radical);
    void MakeNowRate(QPainter &painte);
    void MakeMidBlack(QPainter &painter,QColor color,int radical);
    void MakeMidBin(QPainter &painter,int radical);
    void MakeLogo(QPainter &painter,int radical);
private:
    Ui::Widget *ui;
    QTimer *timer;
    int endAngle=0;
    int temp=0;

};
#endif // WIDGET_H
