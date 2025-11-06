#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QRandomGenerator>

#include <QDate>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_settablehead_clicked()
{
    ui->tableWidget->clear();
    QStringList headerText;
    headerText<<"姓名"<<"性别"<<"出生日期"<<"民族"<<"分数"<<"是否党员";
    ui->tableWidget->setColumnCount(headerText.size());
    for(int i=0;i<ui->tableWidget->columnCount();i++){
        QTableWidgetItem *item = new QTableWidgetItem(headerText.at(i));
        QFont font =headerText.front();
        font.setBold(true);
        font.setPointSize(11);
        item->setFont(font);
        item->setForeground(QBrush(Qt::red));
        ui->tableWidget->setHorizontalHeaderItem(i,item);
    }
}


void MainWindow::on_pushButton_setrcol_clicked()
{
    ui->tableWidget->setRowCount(ui->spinBox->value());
}


void MainWindow::on_pushButton_init_clicked()
{
    ui->tableWidget->clearContents();
    QDate birth(2000,2,2);
    for(int i =0 ;i<ui->tableWidget->rowCount();i++){
        QString name = QString("学生%1").arg(i);
        QString sex =(i%2)?"男":"女";
        bool ispart =(i%2)?false:true;
        int score = QRandomGenerator::global()->bounded(60,100);
        createItemsARow(i,name,sex,birth,"汉族",score,ispart);
        birth=birth.addDays(20);
    }
}

void MainWindow::createItemsARow(int rowNo, QString name, QString sex, QDate date, QString nation, int score, bool isPM)
{
    int stuID =2022101000;
    //姓名
    QTableWidgetItem *item =new QTableWidgetItem(name,ctname);
    item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    stuID=stuID+rowNo;
    ui->tableWidget->setItem(rowNo,colname,item);
    //性别
    item = new QTableWidgetItem(sex,ctsex);
    item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    QIcon icon;
    if(sex=="男"){
        icon.addFile(":/images/icon/nan.png");
    }else{
        icon.addFile(":/images/icon/nv.png");
    }
    item->setIcon(icon);
    item->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    ui->tableWidget->setItem(rowNo,colsex,item);
    //年龄
    item = new QTableWidgetItem(date.toString("yyyy-MM-dd"),ctdate);
    item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    ui->tableWidget->setItem(rowNo,coldate,item);
    //民族
    item = new QTableWidgetItem(nation,ctnation);
    item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    ui->tableWidget->setItem(rowNo,colnation,item);
    //分数
    item = new QTableWidgetItem(QString::number(score),ctscore);
    item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    ui->tableWidget->setItem(rowNo,colscore,item);
    //
    item = new QTableWidgetItem("党员",ctispartm);
    item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::ItemIsUserCheckable);
    item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    if(isPM){
        item->setCheckState(Qt::Checked);
    }else{
        item->setCheckState(Qt::Unchecked);
    }
    item->setBackground(QBrush(Qt::yellow));
    ui->tableWidget->setItem(rowNo,colispartm,item);
}


void MainWindow::on_pushButton_inscol_clicked()
{
    int currow = ui->tableWidget->currentRow();
    ui->tableWidget->insertRow(currow);
    createItemsARow(currow,"new student","男",QDate::fromString("2000-01-01","yyyy-MM-dd"),"汉族",79,true);
}


void MainWindow::on_pushButton_addcol_clicked()
{
    int currow = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(currow);
    createItemsARow(currow,"new student","女",QDate::fromString("2000-01-01","yyyy-MM-dd"),"汉族",79,false);
}


void MainWindow::on_pushButton_delcol_clicked()
{
    int currow = ui->tableWidget->currentRow();
    ui->tableWidget->removeRow(currow);
}


void MainWindow::on_pushButton_reh_clicked()
{
    ui->tableWidget->resizeRowsToContents();
}


void MainWindow::on_pushButton_rew_clicked()
{
    ui->tableWidget->resizeColumnsToContents();
}


void MainWindow::on_pushButton_showtext_clicked()
{

    QTableWidgetItem *item;
    ui->textEdit->clear();
    for(int i = 0;i<ui->tableWidget->rowCount();i++){
        QString str=QString("第%1行：").arg(i);
        for(int j =0;j<ui->tableWidget->columnCount()-1;j++){
            item =ui->tableWidget->item(i,j);
            str+=item->text()+" ";
        }
        item = ui->tableWidget->item(i,colispartm);
        if(item->checkState()){
            str+="是党员";
        }else{
            str+="非党员";
        }
        ui->textEdit->append(str);
    }
}


void MainWindow::on_checkBox_edit_clicked(bool checked)
{
    if(checked){
        ui->tableWidget->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::SelectedClicked);
    }else{
        ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    }
}


void MainWindow::on_checkBox_scolor_clicked(bool checked)
{
    ui->tableWidget->setAlternatingRowColors(checked);
}


void MainWindow::on_checkBox_showhead_clicked(bool checked)
{
    ui->tableWidget->horizontalHeader()->setVisible(checked);
}


void MainWindow::on_checkBox_showrowhead_clicked(bool checked)
{
    ui->tableWidget->verticalHeader()->setVisible(checked);
}





void MainWindow::on_radioButton_choicecol_clicked()
{
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
}


void MainWindow::on_radioButton_choiceitem_clicked()
{
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectItems);
}

