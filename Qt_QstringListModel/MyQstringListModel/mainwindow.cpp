#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_strlsit<<"北京"<<"上海"<<"郑州"<<"周口"<<"深圳"<<"张家口";
    m_model=new QStringListModel(this);
    m_model->setStringList(m_strlsit);
    ui->listView->setModel(m_model);
    ui->listView->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::SelectedClicked);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    m_model->setStringList(m_strlsit);
}


void MainWindow::on_pushButton_2_clicked()
{
    m_model->removeRows(0,m_model->rowCount());
}


void MainWindow::on_checkBox_clicked(bool checked)
{
    if(checked)
        ui->listView->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::SelectedClicked);
    else
        ui->listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
}


void MainWindow::on_pushButton_4_clicked()
{
    m_model->insertRow(m_model->rowCount());
    QModelIndex index =m_model->index(m_model->rowCount()-1);
    m_model->setData(index,"new item",Qt::DisplayRole);
    ui->listView->setCurrentIndex(index);
}


void MainWindow::on_pushButton_6_clicked()
{
    QModelIndex index =ui->listView->currentIndex();
    m_model->insertRow(index.row());
    m_model->setData(index,"new item",Qt::DisplayRole);
    ui->listView->setCurrentIndex(index);
}


void MainWindow::on_pushButton_5_clicked()
{
    QModelIndex index= ui->listView->currentIndex();
    m_model->removeRow(index.row());
}


void MainWindow::on_pushButton_15_clicked()
{
    QModelIndex index;
    int row = ui->listView->currentIndex().row();
    m_model->moveRow(index,row,index,row-1);
}


void MainWindow::on_pushButton_16_clicked()
{
    QModelIndex index;
    int row = ui->listView->currentIndex().row();
    m_model->moveRow(index,row,index,row+2);
}





void MainWindow::on_pushButton_7_clicked(bool checked)
{
    if(checked){
        m_model->sort(0,Qt::AscendingOrder);
    }else{
        m_model->sort(0,Qt::DescendingOrder);
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->plainTextEdit->clear();
}


void MainWindow::on_pushButton_17_clicked()
{
    ui->plainTextEdit->clear();
    QStringList strlist =m_model->stringList();
    for(int i=0 ;i<strlist.count();i++){
        ui->plainTextEdit->appendPlainText(strlist.at(i));
    }

}


void MainWindow::on_listView_clicked(const QModelIndex &index)
{
    QString str =QString("模型索引：%1行，%2列").arg(index.row()).arg(index.column());
    str+=" "+m_model->data(index,Qt::DisplayRole).toString();
    ui->statusbar->showMessage(str);
}

