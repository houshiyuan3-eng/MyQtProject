#include "widget.h"
#include "ui_widget.h"
#include<QAbstractSocket>
#include <QMetaEnum>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setLayout(ui->verticalLayout);
    client = new QTcpSocket(this);

    //信号
    connect(client,SIGNAL(readyRead()),this,SLOT(mRead_Data_From_Server()));
    ui->pushButton_lineOut->setEnabled(false);
    ui->pushButton_send->setEnabled(false);
}

Widget::~Widget()
{
    delete ui;
}

//点击连接
void Widget::on_pushButton_connect_clicked()
{
    qDebug()<<ui->lineEdit_clientIP->text();
    qDebug()<<ui->lineEdit_clientPort->text().toInt();

    // disconnect(client, SIGNAL(connected()), this, SLOT(onConnect()));
    // disconnect(client, SIGNAL(errorOccurred(QAbstractSocket::SocketError)), this, SLOT(onError(QAbstractSocket::SocketError)));
    // if (timer) disconnect(timer, SIGNAL(timeout()), this, SLOT(onTimeOut()));
    client->connectToHost(ui->lineEdit_clientIP->text(),ui->lineEdit_clientPort->text().toInt());
    timer = new QTimer(this);
    timer->setSingleShot(true);
    timer->setInterval(2000);
    connect(client,SIGNAL(connected()),this,SLOT(onConnect()));
    connect(client,SIGNAL(errorOccurred(QAbstractSocket::SocketError)),this,SLOT(onError(QAbstractSocket::SocketError)));
    connect(timer,SIGNAL(timeout()),this,SLOT(onTimeOut()));
    this->setEnabled(false);
    timer->start();
}

void Widget::mRead_Data_From_Server()
{
    // ui->textEdit_clientContent->append(client->readAll());
    ui->textEdit_clientContent->moveCursor(QTextCursor::End);
    ui->textEdit_clientContent->ensureCursorVisible();
    setSendTextColor(Qt::black,client->readAll());
}



void Widget::on_pushButton_send_clicked()
{

    client->write(ui->textEdit_clientSend->toPlainText().toUtf8());
    QString msgsend =ui->textEdit_clientSend->toPlainText();
    setSendTextColor(Qt::red,msgsend);
    ui->textEdit_clientContent->moveCursor(QTextCursor::End);
    ui->textEdit_clientContent->ensureCursorVisible();
}


void Widget::on_pushButton_lineOut_clicked()
{
    client->close();
    QString msg_3 = "断开连接";
    // ui->textEdit_clientContent->append("断开连接");
    setSendTextColor(Qt::red,msg_3);
    ui->pushButton_lineOut->setEnabled(false);
    ui->pushButton_connect->setEnabled(true);
    ui->pushButton_send->setEnabled(false);
}

void Widget::setSendTextColor(Qt::GlobalColor color, QString str)
{
    QTextCursor cur = ui->textEdit_clientContent->textCursor();
    QTextCharFormat format;
    format.setForeground(QColor(color));
    cur.setCharFormat(format);
    cur.insertText("\n"+str);
}

void Widget::onConnect()
{
    timer->stop();
    this->setEnabled(true);
    QString msg_1 ="连接服务器成功！";
    setSendTextColor(Qt::red,msg_1);
    ui->pushButton_lineOut->setEnabled(true);
    ui->pushButton_connect->setEnabled(false);
    ui->pushButton_send->setEnabled(true);
}

void Widget::onError(QAbstractSocket::SocketError error)
{
    QMetaEnum metaEnum = QMetaEnum::fromType<QAbstractSocket::SocketError>();
    QString errorStr = metaEnum.valueToKey(error);
    errorStr = "连接错误："+errorStr;
    setSendTextColor(Qt::red,errorStr);
    on_pushButton_lineOut_clicked();
}

void Widget::onTimeOut()
{
    qDebug()<<"连接超时！";
    QString str = "连接超时！";
    setSendTextColor(Qt::red,str);
    client->abort();
    this->setEnabled(true);
}

