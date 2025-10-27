#include "widget.h"
#include "ui_widget.h"

#include <QFile>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QMenu>
#include <QMessageBox>
#include <QMouseEvent>
#include <QNetworkAccessManager>
#include <QPainter>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    menuQuit =new QMenu(this);
    QAction *action =new QAction(QIcon(":/tuichu.png"),tr("退出"),this);
    setFixedSize(433,846);
    setWindowFlag(Qt::FramelessWindowHint);
    menuQuit->addAction(action);
    connect(menuQuit,&QMenu::triggered,this,[=]{
        this->close();
    });

    manger= new QNetworkAccessManager(this);
    QString url ="https://p56yvy4ht9.re.qweatherapi.com/v7/weather/7d?location=101181101&key=6c7a97ca943e4fc0807a93fdb5f5cb92";
    QUrl urlWeather(url);
    QNetworkRequest res(urlWeather);
    reply = manger->get(res);
    connect(manger,&QNetworkAccessManager::finished,this,&Widget::readHttpReply);

    labeldata<<ui->label_day1_data<<ui->label_day2_data<<ui->label_day3_data
              <<ui->label_day4_data<<ui->label_day5_data<<ui->label_day6_data;

    labelweather<<ui->label_day1_icon<<ui->label_day2_icon<<ui->label_day3_icon
                 <<ui->label_day4_icon<<ui->label_day5_icon<<ui->label_day6_icon;

    labelfw<<ui->label_day1_fw<<ui->label_day2_fw<<ui->label_day3_fw
            <<ui->label_day4_fw<<ui->label_day5_fw<<ui->label_day6_fw;

    labelfd<<ui->label_day1_fd<<ui->label_day2_fd<<ui->label_day3_fd
            <<ui->label_day4_fd<<ui->label_day5_fd<<ui->label_day6_fd;


    labelweathericon<<ui->label_day1_icon<<ui->label_day2_icon<<ui->label_day3_icon
                     <<ui->label_day4_icon<<ui->label_day5_icon<<ui->label_day6_icon;


    iconurl.insert("暴雪",":/icon_baoxue.png");
    iconurl.insert("暴雨",":/icon_baoyu.png");
    iconurl.insert("大雪",":/icon_daxue.png");
    iconurl.insert("大雨",":/icon_dayu.png");
    iconurl.insert("多云",":/icon_duoyun.png");
    iconurl.insert("浮尘",":/icon_fuchen.png");
    iconurl.insert("雷阵雨",":/icon_leizhenyu.png");
    iconurl.insert("晴",":/icon_qingtian.png");
    iconurl.insert("沙尘暴",":/icon_shachenbao.png");
    iconurl.insert("雾",":/icon_wu.png");
    iconurl.insert("小雪",":/icon_xiaoxue.png");
    iconurl.insert("小雨",":/icon_xiaoyu.png");
    iconurl.insert("扬沙",":/icon_yangsha.png");
    iconurl.insert("晴转多云",":/icon_yejianduoyun.png");
    iconurl.insert("夜间晴天",":/icon_yejianqingtian.png");
    iconurl.insert("阴",":/icon_yintian.png");
    iconurl.insert("中雨",":/icon_zhongyu.png");
    iconurl.insert("中雪",":/icon_zhongxue.png");
    iconurl.insert("阵雪",":/icon_zhenxue.png");
    iconurl.insert("阵雨",":/icon_zhenyu.png");

    ui->widget_hightemp->installEventFilter(this);
    ui->widget_lowtemp->installEventFilter(this);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton){
        qDebug()<<"left button";
        offend = event->globalPos()-this->pos();

    }
    if(event->button()==Qt::RightButton){
        menuQuit->exec(QCursor::pos());
    }
}

void Widget::mouseMoveEvent(QMouseEvent *event)
{
    this->move(event->globalPos()-offend);
}

bool Widget::eventFilter(QObject *watcher, QEvent *event)
{
    if (watcher == ui->widget_hightemp && event->type() == QEvent::Paint) {
        drawHighTempLine();
        return true;
    }

    if (watcher == ui->widget_lowtemp && event->type() == QEvent::Paint) {
        drawLowTempLine();
        return true;
    }

    return QWidget::eventFilter(watcher, event); // 其他情况交回父类处理
}

void Widget::pareseWeatherJsonDate(QByteArray dataJson)
{
    hightemp.clear();
    lowtemp.clear();
    QJsonDocument jsonObj = QJsonDocument::fromJson(dataJson);
    if(!jsonObj.isNull()&&jsonObj.isObject()){
        QJsonObject objRoot = jsonObj.object();
        QString data=objRoot["daily"][0]["fxDate"].toString();
        ui->label_nowData->setText(data);
        QString tempmax=objRoot["daily"][0]["tempMax"].toString();
        QString tempmin=objRoot["daily"][0]["tempMin"].toString();
        int temp =(tempmax.toInt()+tempmin.toInt())/2;
        ui->label_nowTemp->setText(QString::number(temp)+"°");
        QString textDay=objRoot["daily"][0]["textDay"].toString();
        ui->label_nowWeather->setText(textDay);
        ui->label_nowDayTemp->setText(tempmin+"~"+tempmax+"℃");

        ui->label_nowCity->setText(ui->lineEdit_cityname->text());
        // bool uii = ui->lineEdit_cityname->text()=="";
        // qDebug()<<uii;
        if(ui->lineEdit_cityname->text()==""){
            ui->label_nowCity->setText("焦作");
        }else{
            ui->label_nowCity->setText(ui->lineEdit_cityname->text());
        }
        QString windDirDay=objRoot["daily"][0]["windDirDay"].toString();
        QString windSpeedDay=objRoot["daily"][0]["windSpeedDay"].toString();
        QString humidity=objRoot["daily"][0]["humidity"].toString();
        QString pressure=objRoot["daily"][0]["pressure"].toString();
        QString moonset=objRoot["daily"][0]["moonset"].toString();
        ui->label_nowF_W->setText(windDirDay);
        ui->label_nowF_D->setText(windSpeedDay);
        ui->label_nowPressure->setText(pressure);
        ui->label_humidity->setText(humidity+"%");
        ui->label_Airleave->setText(moonset);
        ui->label_nowWeatherIcon->setPixmap(iconurl[objRoot["daily"][0]["textDay"].toString()]);
        qDebug()<<temp;
        // ui->label_nowTemp->setText(tempmax);
        if(objRoot.contains("daily")&&objRoot["daily"].isArray()){
            QJsonArray dailys =objRoot["daily"].toArray();
            int i=0;
            for(QJsonValue daily:dailys){
                if(i<6){
                    QStringList datalist =daily["fxDate"].toString().split("-");
                    labeldata[i]->setText(datalist[1]+"/"+datalist[2]);
                    labelfd[i]->setText(daily["windSpeedDay"].toString()+"级");
                    labelfw[i]->setText(daily["windDirDay"].toString());
                    labelweather[i]->setText(daily["textDay"].toString());
                    labelweathericon[i]->setPixmap(iconurl[daily["textDay"].toString()]);
                    hightemp.append(daily["tempMax"].toString());
                    lowtemp.append(daily["tempMin"].toString());
                    i++;
                }
            }
        }
    }
    update();
}

void Widget::readHttpReply(QNetworkReply *reply)
{
    int code =reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
    if(reply->error()==QNetworkReply::NoError&&code==200){
        QByteArray data = reply->readAll();
        pareseWeatherJsonDate(data);
        // qDebug()<<QString::fromUtf8(data);
    }else{
        QMessageBox msgbox;
        msgbox.setWindowTitle("错误");
        msgbox.setText("网络请求失败");
        msgbox.setStyleSheet("QPushButton {color:white}");
        msgbox.setStandardButtons(QMessageBox::Ok);
        msgbox.exec();
    }
}





QString Widget::searchNameJsonFile(QString cityname)
{
    QFile file(":/city_pinyin.json");
    file.open(QIODevice::ReadOnly);
    QByteArray datarow = file.readAll();
    file.close();

    QJsonDocument jsondoc = QJsonDocument::fromJson(datarow);
    if(jsondoc.isArray()){
        QJsonArray citys =jsondoc.array();
        for(QJsonValue city:citys){
            QString cname =city["city_name"].toString();
            if(cityname==cname){
                return city["city_code"].toString();
            }
        }
    }
    return "";
}

void Widget::on_pushButton_clicked()
{
    QString cityname = ui->lineEdit_cityname->text();
    QString citycode = searchNameJsonFile(cityname);
    qDebug()<<citycode;
    if(!citycode.isNull()){
        QString url = "https://p56yvy4ht9.re.qweatherapi.com/v7/weather/7d?location="+citycode+"&key=6c7a97ca943e4fc0807a93fdb5f5cb92";
        manger->get(QNetworkRequest(QUrl(url)));
    }else{
        QMessageBox msgbox;
        msgbox.setWindowTitle("错误");
        msgbox.setText("网络请求失败");
        msgbox.setStyleSheet("QPushButton {color:white}");
        msgbox.setStandardButtons(QMessageBox::Ok);
        msgbox.exec();
    }
}


void Widget::on_lineEdit_cityname_returnPressed()
{
    on_pushButton_clicked();
}

void Widget::drawHighTempLine()
{
    if (hightemp.size() < 6)
        return;

    QPainter painter(ui->widget_hightemp);
    painter.setPen(Qt::yellow);
    painter.setBrush(QBrush(Qt::yellow));
    painter.setRenderHint(QPainter::Antialiasing);

    int sum = 0;
    for (const QString &t : hightemp)
        sum += t.toInt();

    int avg = sum / hightemp.size();
    qDebug() << "avg:" << avg;

    QPoint point[6];
    for (int i = 0; i < hightemp.size(); ++i) {
        int offset = hightemp[i].toInt() - avg;
        point[i].setX(labelweathericon[i]->x() + labelweathericon[i]->width() / 2-10);
        point[i].setY(ui->widget_hightemp->height() / 2 - offset * 5);
        painter.drawEllipse(point[i], 3, 3);
        painter.drawText(point[i].x(),point[i].y()-5,hightemp[i]+"°");
    }

    for(int i=0;i<5;i++){
        painter.drawLine(point[i],point[i+1]);
    }

}

void Widget::drawLowTempLine()
{
    if (lowtemp.size() < 6)
        return;

    QPainter painter(ui->widget_lowtemp);
    painter.setPen(Qt::yellow);
    painter.setBrush(QBrush(Qt::yellow));
    painter.setRenderHint(QPainter::Antialiasing);

    int sum = 0;
    for (const QString &t : lowtemp)
        sum += t.toInt();

    int avg = sum / lowtemp.size();
    qDebug() << "avg:" << avg;

    QPoint point[6];
    for (int i = 0; i < lowtemp.size(); ++i) {
        int offset = lowtemp[i].toInt() - avg;
        point[i].setX(labelweathericon[i]->x() + labelweathericon[i]->width() / 2-10);
        point[i].setY(ui->widget_lowtemp->height() / 2 - offset * 5);
        painter.drawEllipse(point[i], 3, 3);
        painter.drawText(point[i].x(),point[i].y()-5,lowtemp[i]+"°");
    }

    for(int i=0;i<5;i++){
        painter.drawLine(point[i],point[i+1]);
    }
}


