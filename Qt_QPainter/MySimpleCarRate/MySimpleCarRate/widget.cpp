#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(AutoRun()));
    timer->start(90);

}

Widget::~Widget()
{
    delete ui;
}

//初始化背景
void Widget::initCanvas(QPainter &painter){
    QBrush brush(Qt::black);
    painter.setBrush(brush);
    painter.drawRect(rect());
    painter.setBrush(Qt::NoBrush);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.translate(rect().center());
}

//画圆
void Widget::MakeEllipse(QPainter &painter,int radical){
    QRadialGradient RGradient(0,0,radical-30);
    RGradient.setColorAt(1,QColor(255,0,0,200));
    // RGradient.setColorAt(0.98,QColor(255,0,0,120));
    RGradient.setColorAt(0.9,QColor(255,0,0,100));
    RGradient.setColorAt(0.8,QColor(0,0,0,100));
    RGradient.setColorAt(0.0,QColor(0,0,0,0));
    painter.setBrush(RGradient);
    painter.setPen(Qt::NoPen);
    painter.drawPie(QRect(-radical+12,-radical+12,radical*2-30,radical*2-30),-150*16,-60*(240*1.0/60)*16);
}

//画刻度盘
void Widget::MakeCarBody(QPainter &painter,int startAngle,int angle,int radical){
    painter.save();
    QPen pen(Qt::white,3);
    painter.setPen(QPen(Qt::white,3));
    painter.rotate(startAngle);

    for(int i=0;i<=60;i++){
        if(i>=40){
            painter.setPen(QPen(Qt::red,3));
        }
        if(i%5==0){
            if(startAngle+angle*i<240){
                painter.rotate(90);
                painter.drawText(-10,-radical+60,QString::number(i*4));
                painter.rotate(-90);

            }else{
                painter.rotate(90);
                painter.drawText(-15,-radical+60,QString::number(i*4));
                painter.rotate(-90);
            }
            painter.drawLine(radical-30,0,radical-3,0);

        }else{
            painter.drawLine(radical-10,0,radical-3,0);
        }

        painter.rotate(angle);
    }
    painter.restore();
}

//画指针
void Widget::MakePointer(QPainter &painter,int startAngle,int angle,int radical){
    painter.save();
    painter.rotate(startAngle+endAngle*angle);
    painter.setBrush(QBrush(Qt::white));
    static const QPointF points[4] = {
        QPointF(0,1),
        QPointF(150.0,0),
        QPointF(150.0,1),
        QPointF(0,10)
    };
    // painter.drawLine(50,0,radical-50,0);
    painter.drawPolygon(points,4);
    painter.restore();
}

//速度图形显示
void Widget::MakeRate(QPainter &painter,int startAngle,int angle,int radical){
    painter.setBrush(QBrush(QColor(255,0,0,80)));
    painter.setPen(Qt::NoPen);
    painter.drawPie(QRect(-radical+50,-radical+50,radical*2-100,radical*2-100),-startAngle*16,-endAngle*angle*16);
}


//定时器刷新仪表盘
void Widget::AutoRun()
{
    if(temp==0){
        endAngle++;
        if(endAngle==61){
            temp=1;
        }
    }
    if(temp==1){
        endAngle--;
        if(endAngle==0){
            temp=0;
        }
    }
    update();
}
//显示速度
void Widget::MakeNowRate(QPainter &painter){
    painter.setPen(Qt::NoPen);
    if(endAngle*4>160){
        painter.setPen(QPen(Qt::red,5));
    }else{
        painter.setPen(QPen(Qt::white,5));
    }
    QFont font("华文宋体",30);
    font.setBold(true);
    painter.setFont(font);
    painter.drawText(QRect(-60,-60,120,80),Qt::AlignCenter,QString::number(endAngle*4));

    QFont fonts("华文宋体",18);
    font.setBold(true);
    painter.setPen(QPen(Qt::white,5));
    painter.setFont(fonts);
    painter.drawText(QRect(-60,-60,120,160),Qt::AlignCenter,QString("Km/h"));
}
//中间黑色
void Widget::MakeMidBlack(QPainter &painter,QColor color,int radical){
    painter.setBrush(QBrush(color));
    painter.setPen(Qt::NoPen);
    painter.drawEllipse(QPoint(0,0),radical,radical);
}
//内层发光圈
void Widget::MakeMidBin(QPainter &painter,int radical){
    QRadialGradient RGradient(0,0,radical);
    RGradient.setColorAt(0.0,QColor(255,0,0,250));
    RGradient.setColorAt(1.0,QColor(0,0,0,80));
    painter.setBrush(RGradient);
    painter.drawEllipse(QPoint(0,0),radical,radical);
}

void Widget::MakeLogo(QPainter &painter,int radical){
    QRect rect(-70,radical*0.36,200,80);
    painter.drawPixmap(rect,QPixmap(":/icon/CarLogo.png"));
}

void Widget::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    initCanvas(painter);
    painter.setFont(QFont("Times New Roman",15));
    MakeEllipse(painter,height()/2-30);
    double angle = 240*1.0/60;

    MakeCarBody(painter,150,angle,height()/2-50);
    MakePointer(painter,150,angle,height()/2-50-30);
    MakeRate(painter,150,angle,(height()/2));
    //MakeMidBlack(painter,QColor(255,0,0,100),80);
    MakeMidBin(painter,90);
    MakeMidBlack(painter,QColor(Qt::black),60);
    MakeLogo(painter,height()/2);
    MakeNowRate(painter);

}





