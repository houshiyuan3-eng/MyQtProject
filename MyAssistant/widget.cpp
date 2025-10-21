#include "widget.h"
#include "ui_widget.h"
#include "QtSerialPort/QSerialPortInfo"

#include <QMessageBox>
#include <QTimer>
#include <QFileDialog>
#include <QDateTime>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setLayout(ui->gridLayoutGlobal);
    btnindex=0;

    //设置默认参数
    ui->comboBox_BetaLv->setCurrentIndex(6);
    ui->comboBox_Datait->setCurrentIndex(3);
    ui->checkBox_10->setEnabled(false);
    ui->pushButtonInit->setEnabled(false);
    ui->pushButtonLoad->setEnabled(false);
    ui->pushButtonSave->setEnabled(false);
    ui->pushButton_LoadMode->setEnabled(false);
    ui->pushButton_Mode->setEnabled(false);
    ui->label_sendstatus->setStyleSheet("color:green");
    ui->label_times->setStyleSheet("color:blue");
    writecnttotal=0;
    receivecnttotal=0;
    serialport =new QSerialPort(this);
    timer =new QTimer(this);
    windowtimer =new QTimer(this);
    loopsend =new QTimer(this);


    connect(serialport,&QSerialPort::readyRead,this,&Widget::on_serialData_ReadyToRead);
    connect(timer,&QTimer::timeout,[=]{
        on_pushButton_send_clicked();
    });
    connect(windowtimer,&QTimer::timeout,[=]{
        //时间显示
        QDateTime currenttime =QDateTime::currentDateTime();
        QDate date = currenttime.date();
        int year = date.year();
        int month = date.month();
        int day =date.day();
        QTime time =currenttime.time();
        int hour =time.hour();
        int minute = time.minute();
        int second =time.second();
        mytime = QString("%1-%2-%3 %4:%5:%6").arg(year,2,10,QChar('0'))
                     .arg(month,2,10,QChar('0'))
                     .arg(day,2,10,QChar('0'))
                     .arg(hour,2,10,QChar('0'))
                     .arg(minute,2,10,QChar('0'))
                     .arg(second,2,10,QChar('0'));
        ui->label_times->setText(mytime);
    });
    windowtimer->start(1000);
    connect(ui->comboBoxseriesNums,&MyComBox::reflush,this,&Widget::on_comboxreflush);
    connect(loopsend,&QTimer::timeout,this,&Widget::btn_handler);

    on_comboxreflush();
    for(int i=1;i<=9;i++){
        QString btnname = QString("pushButton_%1").arg(i);
        QPushButton *btn = findChild<QPushButton *>(btnname);
        if(btn){
            btnarray.append(btn);
            btn->setProperty("btnid",i);
            connect(btn,SIGNAL(clicked()),this,SLOT(on_command_btn_clicked()));
        }
        // QPushButton *btn =  qobject_cast<QPushButton *>(sender());
        // int num = btn->property("btnid").toInt();
        // QString lineEditname = QString("lineEdit_%1").arg(num);
        // QLineEdit *lineedit =findChild<QLineEdit *>(lineEditname);
        QString linename = QString("lineEdit_%1").arg(i);
        QLineEdit *line = findChild<QLineEdit *>(linename);
        leditarray.append(line);
        QString chkname =QString("checkBox_%1").arg(i);
        QCheckBox *chk =findChild<QCheckBox *>(chkname);
        chkarray.append(chk);
    }






}
Widget::~Widget()
{
    delete ui;
}




//点击打开串口事件处理
void Widget::on_pushButton_CloseOrOpenSerise_clicked(bool checked)
{
    if(checked){
        serialport->setPortName(ui->comboBoxseriesNums->currentText());
        serialport->setDataBits(QSerialPort::DataBits(ui->comboBox_Datait->currentText().toUInt()));
        serialport->setBaudRate(ui->comboBox_BetaLv->currentText().toInt());
        serialport->setStopBits(QSerialPort::StopBits(ui->comboBox_Stopit->currentText().toUInt()));
        if(ui->comboBox_FileCtl->currentText()=="None")
            serialport->setFlowControl(QSerialPort::NoFlowControl);
        switch (ui->comboBox_Check->currentIndex()) {
        case 0:
            serialport->setParity(QSerialPort::NoParity);
            break;
        case 1:
            serialport->setParity(QSerialPort::EvenParity);
            break;
        case 2:
            serialport->setParity(QSerialPort::MarkParity);
            break;
        case 3:
            serialport->setParity(QSerialPort::OddParity);
            break;
        case 4:
            serialport->setParity(QSerialPort::SpaceParity);
            break;
        default:
            break;
        }
        //打开串口
        if (serialport->open(QIODevice::ReadWrite)){
            qDebug()<<"open success";
            ui->comboBoxseriesNums->setEnabled(false);
            ui->comboBox_BetaLv->setEnabled(false);
            ui->comboBox_Check->setEnabled(false);
            ui->comboBox_Datait->setEnabled(false);
            ui->comboBox_FileCtl->setEnabled(false);
            ui->comboBox_Stopit->setEnabled(false);
            ui->checkBox_10->setEnabled(true);
            ui->pushButtonInit->setEnabled(true);
            ui->pushButtonLoad->setEnabled(true);
            ui->pushButtonSave->setEnabled(true);
            ui->pushButton_CloseOrOpenSerise->setText("关闭串口");
            ui->label_sendstatus->setText(ui->comboBoxseriesNums->currentText()+" Open!");
        }else{
            QMessageBox msgbox;
            msgbox.setWindowTitle("窗口打开失败");
            msgbox.setText("打开窗口失败,窗口可能占用或已拔出！");
            msgbox.exec();
        }
    }else{
        ui->pushButton_CloseOrOpenSerise->setText("打开串口");
        serialport->close();
        ui->comboBoxseriesNums->setEnabled(true);
        ui->comboBox_BetaLv->setEnabled(true);
        ui->comboBox_Check->setEnabled(true);
        ui->comboBox_Datait->setEnabled(true);
        ui->comboBox_FileCtl->setEnabled(true);
        ui->comboBox_Stopit->setEnabled(true);
        ui->checkBox_10->setEnabled(false);
        ui->pushButtonInit->setEnabled(false);
        ui->pushButtonLoad->setEnabled(false);
        ui->pushButtonSave->setEnabled(false);

    }


}

//点击发送事件处理
void Widget::on_pushButton_send_clicked()
{
    int writecnt=0;
    QString sendText = ui->lineEdit_sendLine->text();
    if(ui->checkBox_AutoLine->isChecked()){
        sendText =sendText +"\r\n";
    }
    if(ui->checkBox_sendNewLine->isChecked()){
        sendText =sendText +"\r\n";
    }
    if(sendText!=""){
        if(ui->checkBox_HexSend->isChecked()){
            QByteArray tmparray = sendText.toLocal8Bit();
            if(tmparray.size()%2!=0){
                ui->label_sendstatus->setText("send error");
                return;
            }
            for(char c:tmparray){
                if(!std::isxdigit(c)){
                    ui->label_sendstatus->setText("send error");
                    return;
                }
            }
            QByteArray sendarray =QByteArray::fromHex(tmparray);
            writecnt=serialport->write(sendarray);
        }else{
            writecnt=serialport->write(sendText.toUtf8());
        }

        if(writecnt==-1){
            qDebug()<<" send error writecnt==-1 "<<sendText;
            ui->label_sendstatus->setText("Send Error writecnt==-1");
        }else{
            writecnttotal+=writecnt;
            qDebug()<<" sendOK "<<sendText;
            if(ui->checkBox_12->isChecked()){
                if(ui->checkBox_SaveTime->isChecked()){
                    sendText="【"+ mytime +"】" + sendText;
                }

                QByteArray tmp = sendText.toUtf8().toHex();
                QString nowhexcontent = ui->textEditRecord->toPlainText();
                tmp=nowhexcontent.toUtf8()+tmp;
                nowhexcontent=QString::fromUtf8(tmp);
                //ui->textEditRecord->setText(QString::fromUtf8(tmp));
                QString t_lastshow;
                for(int i=0;i<nowhexcontent.size();i+=2){
                    t_lastshow+=nowhexcontent.mid(i,2)+" ";
                }
                ui->textEditRecord->setText(t_lastshow.toUpper());
            }else{
                if(ui->checkBox_SaveTime->isChecked()){
                    ui->textEditRecord->insertPlainText("【"+ mytime +"】"+sendText);
                }else{
                    ui->textEditRecord->insertPlainText(sendText);
                }
            }
            ui->label_sendstatus->setText("Send OK");
            ui->label_sendnums->setNum(writecnttotal);

            ui->textEditRecord->moveCursor(QTextCursor::End);
            ui->textEditRecord->ensureCursorVisible();
        }
    }else{
        qDebug()<<" send error "<<sendText;
        ui->label_sendstatus->setText("Send Error");
        QMessageBox msgbox2;
        msgbox2.setWindowTitle("发送失败");
        msgbox2.setText("发送内容不能为空！");
        msgbox2.exec();
        timer->stop();
        ui->lineEdit_sendLine->setEnabled(true);
        ui->lineEdit_sendEachs->setEnabled(true);
        ui->checkBox_seedIntime->setChecked(false);
    }


}

//自接收信号处理
void Widget::on_serialData_ReadyToRead()
{
    QString revmessage = serialport->readAll();
    if(revmessage!=nullptr){
        qDebug()<<"send message:"<<revmessage;
        if(revmessage!=sendback){
            QByteArray msg =revmessage.toUtf8();
            ui->textEditHistory->append(QString::fromUtf8(msg));
            receivecnttotal+=revmessage.size();
            ui->label_reveivednums->setNum(receivecnttotal);
            sendback=revmessage;
        }
    }

}


//自动发送
void Widget::on_checkBox_seedIntime_clicked(bool checked)
{
    if(checked){
        timer->start(ui->lineEdit_sendEachs->text().toInt());
        ui->lineEdit_sendLine->setEnabled(false);
        ui->lineEdit_sendEachs->setEnabled(false);
    }else{
        timer->stop();
        ui->lineEdit_sendLine->setEnabled(true);
        ui->lineEdit_sendEachs->setEnabled(true);
    }

}

//清除
void Widget::on_pushButton_cleanRecord_clicked()
{
    ui->textEditRecord->clear();
}


//保存记录
void Widget::on_pushButton_SaveRecord_clicked()
{
    QString filename =  QFileDialog::getSaveFileName(this,tr("Open Txt"), "D:/QTtest/Qt_MyAssistant/MyAssistant", tr("Text files (*.txt);"));
    if(filename!=nullptr){
        QFile file(filename);
        if(!file.open(QIODevice::WriteOnly|QIODevice::Text)){
            return;
        }
        QTextStream out(&file);
        out<<ui->textEditHistory->toPlainText();
        file.close();
    }

}


//HEX显示
void Widget::on_checkBox_12_clicked(bool checked)
{
    if(checked){
        QString content = ui->textEditRecord->toPlainText();
        QByteArray temp =content.toUtf8();
        temp =temp.toHex();
        content =QString::fromUtf8(temp);
        QString lastshow;
        for(int i=0;i<content.size();i+=2){
            lastshow+=content.mid(i,2)+" ";
        }
        ui->textEditRecord->setText(lastshow.toUpper());
    }else{
        QString hexcontent = ui->textEditRecord->toPlainText();
        QByteArray hextemp =hexcontent.toUtf8();
        QByteArray shextemptring=QByteArray::fromHex(hextemp);
        ui->textEditRecord->setText(QString::fromUtf8(shextemptring));
    }
}
//隐藏控制面板
void Widget::on_pushButton_HideTable_clicked(bool checked)
{
    if(checked){
        ui->pushButton_HideTable->setText("拓展面板");
        ui->groupBoxTexts->hide();
    }else{
        ui->pushButton_HideTable->setText("隐藏面板");
        ui->groupBoxTexts->show();
    }
}
//隐藏历史按钮
void Widget::on_pushButton_HideHisory_clicked(bool checked)
{
    if(checked){
        ui->pushButton_HideHisory->setText("拓展历史");
        ui->groupBoxHistory->hide();
    }else{
        ui->pushButton_HideHisory->setText("隐藏历史");
        ui->groupBoxHistory->show();
    }
}

//实时刷新com串口栏
void Widget::on_comboxreflush()
{
    ui->comboBoxseriesNums->clear();
    QList<QSerialPortInfo> serialList = QSerialPortInfo::availablePorts();
    for(QSerialPortInfo serialInfo : serialList){
        qDebug()<<serialInfo.portName();
        ui->comboBoxseriesNums->addItem(serialInfo.portName());
    }
    ui->label_sendstatus->setText("com reflush!");
}

//点击文本空发送事件
void Widget::on_command_btn_clicked()
{
    QPushButton *btn =  qobject_cast<QPushButton *>(sender());
    int num = btn->property("btnid").toInt();
    QString lineEditname = QString("lineEdit_%1").arg(num);
    QLineEdit *lineedit =findChild<QLineEdit *>(lineEditname);
    if(lineedit){
        if(lineedit->text().size()>0){
            ui->lineEdit_sendLine->setText(lineedit->text());
        }else{
            return;
        }

    }


    QString checkboxname =QString("checkBox_%1").arg(num);
    QCheckBox *checkbox = findChild<QCheckBox *>(checkboxname);
    if(checkbox){
        ui->checkBox_HexSend->setChecked(checkbox->isChecked());
    }
    on_pushButton_send_clicked();
}

//点击循环按钮事件
void Widget::on_checkBox_10_clicked(bool checked)
{
    if(checked){
        loopsend->start(ui->spinBox->text().toInt());
    }else{
        loopsend->stop();
    }
}

//循环发送逻辑
void Widget::btn_handler()
{
    if(btnindex<btnarray.size()){
        QPushButton *btn=btnarray[btnindex];
        emit btn->click();
        btnindex++;
    }else{
        btnindex=0;
    }

}

//重置按钮逻辑
void Widget::on_pushButtonInit_clicked()
{
    QMessageBox msgbox;
    msgbox.setIcon(QMessageBox::Warning);
    msgbox.setText("重置操作不可逆！是否执行?");
    msgbox.setWindowTitle("警告");
    QPushButton *yesbtn =msgbox.addButton("确定",QMessageBox::YesRole);
    QPushButton *nobtn =msgbox.addButton("取消",QMessageBox::NoRole);
    msgbox.exec();
    if(msgbox.clickedButton()==yesbtn){
        qDebug()<<"yes";
        for(int i=0;i<leditarray.size();i++){
            leditarray[i]->clear();
            chkarray[i]->setChecked(false);
        }
    }
    if(msgbox.clickedButton()==nobtn){
        qDebug()<<"no";
    }

}


void Widget::on_pushButtonSave_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),
                                                    "D:/QTtest/Qt_MyAssistant/MyAssistant",
                                                    tr("Text (*.txt)"));
    QFile file(fileName);
    if(!file.open(QIODevice::WriteOnly |QIODevice::Text))
        return;
    QTextStream out(&file);
    for (int i = 0; i < leditarray.size(); ++i) {
        out<<chkarray[i]->isChecked()<<","<<leditarray[i]->text()<<"\n";
    }
    file.close();
}

void Widget::on_pushButtonLoad_clicked()
{
    int i=0;
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    "D:/QTtest/Qt_MyAssistant/MyAssistant",
                                                    tr("Text (*.txt)"));

    QFile file(fileName);
    if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
        return;
    QTextStream in(&file);
    while(!in.atEnd()){
        QString msg =in.readLine();
        QStringList sl =msg.split(",");
        if(sl.count()==2){
            leditarray[i]->setText(sl[1]);
            chkarray[i]->setChecked(sl[0].toInt());
        }
        i++;
    }
    file.close();
}







// void Widget::on_pushButton_clicked()
// {
//     QString msg = ui->lineEdit->text();
//     if(ui->checkBox->isChecked()){
//         if(ui->checkBox_HexSend->isChecked()==false){
//             ui->checkBox_HexSend->setChecked(true);
//             ui->lineEdit_sendLine->setText(msg);
//             on_pushButton_send_clicked();
//         }
//         ui->checkBox_HexSend->setChecked(false);
//     }else{
//         ui->lineEdit_sendLine->setText(msg);
//         on_pushButton_send_clicked();
//     }
// }


// void Widget::on_pushButton_2_clicked()
// {
//     QString msg = ui->lineEdit_2->text();
//     if(ui->checkBox_2->isChecked()){
//         if(ui->checkBox_HexSend->isChecked()==false){
//             ui->checkBox_HexSend->setChecked(true);
//             ui->lineEdit_sendLine->setText(msg);
//             on_pushButton_send_clicked();
//         }
//         ui->checkBox_HexSend->setChecked(false);
//     }else{
//         ui->lineEdit_sendLine->setText(msg);
//         on_pushButton_send_clicked();
//     }
// }


// void Widget::on_pushButton_3_clicked()
// {
//     QString msg = ui->lineEdit_3->text();
//     if(ui->checkBox_3->isChecked()){
//         if(ui->checkBox_HexSend->isChecked()==false){
//             ui->checkBox_HexSend->setChecked(true);
//             ui->lineEdit_sendLine->setText(msg);
//             on_pushButton_send_clicked();
//         }
//         ui->checkBox_HexSend->setChecked(false);
//     }else{
//         ui->lineEdit_sendLine->setText(msg);
//         on_pushButton_send_clicked();
//     }
// }


// void Widget::on_pushButton_4_clicked()
// {
//     QString msg = ui->lineEdit_4->text();
//     if(ui->checkBox_4->isChecked()){
//         if(ui->checkBox_HexSend->isChecked()==false){
//             ui->checkBox_HexSend->setChecked(true);
//             ui->lineEdit_sendLine->setText(msg);
//             on_pushButton_send_clicked();
//         }
//         ui->checkBox_HexSend->setChecked(false);
//     }else{
//         ui->lineEdit_sendLine->setText(msg);
//         on_pushButton_send_clicked();
//     }
// }


// void Widget::on_pushButton_5_clicked()
// {
//     QString msg = ui->lineEdit_5->text();
//     if(ui->checkBox_5->isChecked()){
//         if(ui->checkBox_HexSend->isChecked()==false){
//             ui->checkBox_HexSend->setChecked(true);
//             ui->lineEdit_sendLine->setText(msg);
//             on_pushButton_send_clicked();
//         }
//         ui->checkBox_HexSend->setChecked(false);
//     }else{
//         ui->lineEdit_sendLine->setText(msg);
//         on_pushButton_send_clicked();
//     }
// }


// void Widget::on_pushButton_6_clicked()
// {
//     QString msg = ui->lineEdit_6->text();
//     if(ui->checkBox_6->isChecked()){
//         if(ui->checkBox_HexSend->isChecked()==false){
//             ui->checkBox_HexSend->setChecked(true);
//             ui->lineEdit_sendLine->setText(msg);
//             on_pushButton_send_clicked();
//         }
//         ui->checkBox_HexSend->setChecked(false);
//     }else{
//         ui->lineEdit_sendLine->setText(msg);
//         on_pushButton_send_clicked();
//     }
// }


// void Widget::on_pushButton_7_clicked()
// {
//     QString msg = ui->lineEdit_7->text();
//     if(ui->checkBox_7->isChecked()){
//         if(ui->checkBox_HexSend->isChecked()==false){
//             ui->checkBox_HexSend->setChecked(true);
//             ui->lineEdit_sendLine->setText(msg);
//             on_pushButton_send_clicked();
//         }
//         ui->checkBox_HexSend->setChecked(false);
//     }else{
//         ui->lineEdit_sendLine->setText(msg);
//         on_pushButton_send_clicked();
//     }
// }


// void Widget::on_pushButton_8_clicked()
// {
//     QString msg = ui->lineEdit_8->text();
//     if(ui->checkBox_8->isChecked()){
//         if(ui->checkBox_HexSend->isChecked()==false){
//             ui->checkBox_HexSend->setChecked(true);
//             ui->lineEdit_sendLine->setText(msg);
//             on_pushButton_send_clicked();
//         }
//         ui->checkBox_HexSend->setChecked(false);
//     }else{
//         ui->lineEdit_sendLine->setText(msg);
//         on_pushButton_send_clicked();
//     }
// }


// void Widget::on_pushButton_9_clicked()
// {
//     QString msg = ui->lineEdit_9->text();
//     if(ui->checkBox_9->isChecked()){
//         if(ui->checkBox_HexSend->isChecked()==false){
//             ui->checkBox_HexSend->setChecked(true);
//             ui->lineEdit_sendLine->setText(msg);
//             on_pushButton_send_clicked();
//         }
//         ui->checkBox_HexSend->setChecked(false);
//     }else{
//         ui->lineEdit_sendLine->setText(msg);
//         on_pushButton_send_clicked();
//     }
// }

