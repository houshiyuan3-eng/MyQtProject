#include "widget.h"
#include "ui_widget.h"

#include <QTcpSocket>
#include <QNetworkInterface>
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setLayout(ui->verticalLayout);
    ui->pushButton_send->setEnabled(false);
    server = new QTcpServer(this);
    connect(ui->comboBox_ChoosePort,&myCombox::on_Combox_click,this,&Widget::Combox_refush);
    connect(server,SIGNAL(newConnection()),this,SLOT(on_newClient_Connnect()));
    ui->pushButton_stopListen->setEnabled(false);
    ui->pushButton_lineout->setEnabled(false);
    QList<QHostAddress> address = QNetworkInterface::allAddresses();
    for(QHostAddress tmp : address){
        if(tmp.protocol()==QAbstractSocket::IPv4Protocol){
            ui->comboBox_serverIPAddress->addItem(tmp.toString());
        }
    }
}
//netstat -ano | findstr 8888

Widget::~Widget()
{
    delete ui;
}

void Widget::on_newClient_Connnect()
{
    qDebug()<<"new client connect! ";
    if(server->hasPendingConnections()){
        QTcpSocket *connect_m = server->nextPendingConnection();
        qDebug()<<connect_m->peerAddress();
        qDebug()<<connect_m->peerPort();
        ui->textEdit_serverContent->append("服务端地址:"+connect_m->peerAddress().toString()+"服务端端口号:"+QString::number(connect_m->peerPort())+"---已连接！");
        //读取客户端发信号处理
        connect(connect_m,SIGNAL(readyRead()),this,SLOT(on_readyRead_handler()));
        //客户端断卡信号处理
        connect(connect_m,SIGNAL(stateChanged(QAbstractSocket::SocketState))
                ,this,SLOT(mstateChanged(QAbstractSocket::SocketState)));
        ui->comboBox_ChoosePort->addItem(QString::number(connect_m->peerPort()));
        ui->comboBox_ChoosePort->setCurrentText(QString::number(connect_m->peerPort()));
        if(!ui->pushButton_send->isEnabled()){
            ui->pushButton_send->setEnabled(true);
        }
    }
}

void Widget::on_readyRead_handler()
{
    QTcpSocket *tmpSocket = qobject_cast<QTcpSocket *>(sender());
    ui->textEdit_serverContent->moveCursor(QTextCursor::End);
    ui->textEdit_serverContent->ensureCursorVisible();
    QByteArray revData = tmpSocket->readAll();
    ui->textEdit_serverContent->append("【客户端："+QString::number(tmpSocket->peerPort())+"】: "+revData);

}



void Widget::mstateChanged(QAbstractSocket::SocketState socketState)
{
    // qDebug()<<"hello";
    int tempindex;
    QTcpSocket *tmpSocket = qobject_cast<QTcpSocket *>(sender());
    switch (socketState) {
    case QAbstractSocket::UnconnectedState:
        ui->textEdit_serverContent->append("【客户端："+QString::number(tmpSocket->peerPort())+"】断开连接 ");
        tempindex = ui->comboBox_ChoosePort->findText(QString::number(tmpSocket->peerPort()));
        ui->comboBox_ChoosePort->removeItem(tempindex);
        tmpSocket->deleteLater();
        if(ui->comboBox_ChoosePort->count()==0){
            ui->pushButton_send->setEnabled(false);
        }
        break;
    default:
        break;
    }
}



//开始监听按钮
void Widget::on_pushButton_startListen_clicked()
{
    int port=ui->lineEdit_serverPort->text().toInt();
    if(!server->listen(QHostAddress(ui->comboBox_serverIPAddress->currentText()),port)){
        qDebug()<<"listen error";
        QMessageBox msgbox;
        msgbox.setWindowTitle("监听失败");
        msgbox.setText("端口号被占用！");
        msgbox.exec();
        return;
    }
    ui->textEdit_serverContent->append("【服务器开始监听！】");
    ui->pushButton_stopListen->setEnabled(true);
    ui->pushButton_lineout->setEnabled(true);
    ui->pushButton_startListen->setEnabled(false);
    ui->comboBox_contactMethod->setEnabled(false);
    ui->comboBox_serverIPAddress->setEnabled(false);
    ui->lineEdit_serverPort->setEnabled(false);
}


//点击发送按钮
void Widget::on_pushButton_send_clicked()
{
    QList<QTcpSocket *> tcpclients = server->findChildren<QTcpSocket *>();
    if(tcpclients.isEmpty()){
        QMessageBox msgbox;
        msgbox.setWindowTitle("发送错误！");
        msgbox.setText("当前无连接！");
        msgbox.exec();
        return;
    }
    if(ui->comboBox_ChoosePort->currentText()!="ALL"){
        QString serverlogo ="【服务器私发】:";
        QString currentName = ui->comboBox_ChoosePort->currentText();
        for(QTcpSocket *tmp : tcpclients){
            if(QString::number(tmp->peerPort())==currentName){
                tmp->write(serverlogo.toStdString().c_str());
                tmp->write(ui->textEdit_serverSend->toPlainText().toStdString().c_str());
                ui->textEdit_serverContent->append("【服务器 Send To "+QString::number(tmp->peerPort())+"】 "+ui->textEdit_serverSend->toPlainText());
            }
        }


    }else{
        for(QTcpSocket *tmp :tcpclients){
            QString serverlogo ="【服务器发送】:";
            tmp->write(serverlogo.toStdString().c_str());
            tmp->write(ui->textEdit_serverSend->toPlainText().toStdString().c_str());
            ui->textEdit_serverContent->append("【服务器 Send To All , this : "+QString::number(tmp->peerPort())+"】 "+ui->textEdit_serverSend->toPlainText());
        }
    }
}

//自动刷新端口
void Widget::Combox_refush()
{
    ui->comboBox_ChoosePort->clear();
    qDebug()<<"combox refush";
    QList<QTcpSocket *> tcpclients = server->findChildren<QTcpSocket *>();
    if(tcpclients.size()!=0){
        for(QTcpSocket *tmp :tcpclients){
            ui->comboBox_ChoosePort->addItem(QString::number(tmp->peerPort()));
        }
        ui->comboBox_ChoosePort->addItem("ALL");
    }

}



//停止监听事件
void Widget::on_pushButton_stopListen_clicked()
{
    QList<QTcpSocket *> tcpclients = server->findChildren<QTcpSocket *>();
    for(QTcpSocket *tmp :tcpclients){
        QString serverlogo ="【服务器已停止监听】";
        ui->textEdit_serverContent->append("【服务器已停止监听】");
        tmp->write(serverlogo.toStdString().c_str());
        tmp->close();
    }
    server->close();
    ui->pushButton_lineout->setEnabled(false);
    ui->pushButton_stopListen->setEnabled(false);
    ui->pushButton_startListen->setEnabled(true);
    ui->comboBox_contactMethod->setEnabled(true);
    ui->comboBox_serverIPAddress->setEnabled(true);
    ui->lineEdit_serverPort->setEnabled(true);
}


//断开连接
void Widget::on_pushButton_lineout_clicked()
{
    on_pushButton_stopListen_clicked();
    delete server;
    window()->close();

}

