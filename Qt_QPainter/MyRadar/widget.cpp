#include "widget.h"
#include "ui_widget.h"

#include <QPainter>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer,&QTimer::timeout,[=]{
        startAngle+=30;
        if(startAngle>=360)
            startAngle=0;
        qDebug()<<startAngle;
        update();
    });
    timer->setInterval(100);
    timer->start();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QBrush brush(Qt::black);
    painter.setBrush(brush);
    painter.drawRect(rect());
    painter.setBrush(Qt::NoBrush);
    QPen pen(Qt::green,4);
    painter.setPen(pen);
    painter.setRenderHint(QPainter::Antialiasing,true);
    painter.translate(rect().center());
    int gaplength = height()/2/7;
    for(int i=1;i<=7;i++){
        painter.drawEllipse(QPoint(0,0),gaplength*i,gaplength*i);
    }
    painter.drawLine(-gaplength*7,0,gaplength*7,0);
    painter.drawLine(0,-gaplength*7,0,gaplength*7);

    //设置扇形区域
    QConicalGradient CGradient(0,0,-startAngle);
    CGradient.setColorAt(0,QColor(0,255,0,255));
    CGradient.setColorAt(0.1,QColor(0,255,0,100));
    CGradient.setColorAt(0.2,QColor(0,255,0,20));
    CGradient.setColorAt(1,QColor(0,255,0,0));
    painter.setBrush(CGradient);
    painter.setPen(Qt::NoPen);
    painter.drawPie(QRect(-gaplength*7,-gaplength*7,2*gaplength*7,2*gaplength*7),-startAngle*16,70*16);
}


