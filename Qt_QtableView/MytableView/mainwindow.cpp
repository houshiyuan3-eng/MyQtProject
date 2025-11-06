#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFileDialog>
#include<QFile>
#include<QRegularExpression>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_model = new QStandardItemModel(2,FixedColumnCount,this);
    m_select = new QItemSelectionModel(m_model,this);
    ui->tableView->setModel(m_model);
    ui->tableView->setSelectionModel(m_select);
    ui->tableView->setSelectionMode(QAbstractItemView::ExtendedSelection);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectItems);
    labCurFile = new QLabel("当前文件夹：",this);
    labCellPos =new QLabel("当前单元格：",this);
    labCellText = new QLabel("单元内容:",this);
    labCurFile->setMinimumWidth(130);
    labCellPos->setMinimumWidth(150);
    labCellText->setMinimumWidth(120);

    ui->statusbar->addWidget(labCurFile);
    ui->statusbar->addWidget(labCellPos);
    ui->statusbar->addWidget(labCellText);
    connect(m_select,&QItemSelectionModel::currentChanged,this,&MainWindow::on_CurrentChanged);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initModelDate(QStringList &fileContent)
{
    int rowcnt =fileContent.size();
    m_model->setRowCount(rowcnt-1);
    QStandardItem *item;
    QString header = fileContent.at(0);
    QStringList headerList = header.split(QRegularExpression(R"(\s+)"),Qt::SkipEmptyParts);
    m_model->setHorizontalHeaderLabels(headerList);
    int j;
    for(int i=1;i<rowcnt;i++){
        //qDebug()<<"in for i";
        QString lineText = fileContent.at(i);
        QStringList tmplist =lineText.split(QRegularExpression(R"(\s+)"),Qt::SkipEmptyParts);
        for(j=0;j<FixedColumnCount-1;j++){
            //qDebug()<<"in for j";
            item =new QStandardItem(tmplist.at(j));
            m_model->setItem(i-1,j,item);
        }
        item = new QStandardItem(headerList.at(j));
        item->setCheckable(true);
        item->setBackground(QBrush(Qt::yellow));
        if(tmplist.at(j)=="0")
            item->setCheckState(Qt::Unchecked);
        else
            item->setCheckState(Qt::Checked);
        m_model->setItem(i-1,j,item);
    }
}

void MainWindow::on_CurrentChanged(const QModelIndex &current, const QModelIndex &previous)
{
    if(current.isValid()){
        labCellPos->setText(QString::asprintf("当前单元格：%d行，%d列",current.row()+1,current.column()+1));
        QStandardItem *item = m_model->itemFromIndex(current);
        labCellText->setText("单元格内容："+item->text());
        QFont font = item->font();
    }

}

void MainWindow::on_actOpenFile_triggered()
{
    QString curPath = QCoreApplication::applicationDirPath();
    QString filename = QFileDialog::getOpenFileName(this,"打开文件",curPath,"数据文件(*.txt);;所有文件(*.*)");
    if(filename.isEmpty()) return;
    QFile file(filename);
    QStringList filecontent;
    if(file.open(QIODevice::ReadOnly|QIODevice::Text)){
        QTextStream in(&file);
        while (!in.atEnd()) {
            QString str =in.readLine();
            ui->plainTextEdit->appendPlainText(str);
            filecontent.append(str);
        }
        file.close();
        labCurFile->setText("当前文件："+filename);
        initModelDate(filecontent);
    }

}


void MainWindow::on_actreDate_triggered()
{
    ui->plainTextEdit->clear();
    QStandardItem *item;
    QString content;
    for(int i=0;i<m_model->columnCount();i++){
        item=m_model->horizontalHeaderItem(i);
        content=content+item->text()+"\t";
    }
    ui->plainTextEdit->appendPlainText(content);
    int j;
    for(int i=0;i<m_model->rowCount();i++){
        QString str;
        for(j=0;j<m_model->columnCount()-1;j++){
            item=m_model->item(i,j);
            str=str+item->text()+"\t";
        }
        item=m_model->item(i,j);
        if(item->checkState()==Qt::Checked)
            str+="1";
        else
            str+="0";
        ui->plainTextEdit->appendPlainText(str);
    }
}


void MainWindow::on_actappend_triggered()
{
    QStandardItem *item;
    QList<QStandardItem *> itemList;
    for(int i=0;i<FixedColumnCount-1;i++){
        item = new QStandardItem("0");
        itemList<<item;
    }
    item = new QStandardItem(m_model->headerData(FixedColumnCount-1,Qt::Horizontal).toString());
    item->setCheckable(true);
    itemList<<item;
    m_model->insertRow(m_model->rowCount(),itemList);
    m_select->clearSelection();
    m_select->setCurrentIndex(m_model->index(m_model->rowCount()-1,0),QItemSelectionModel::Select);
}


void MainWindow::on_actinsert_triggered()
{
    QStandardItem *item;
    QList<QStandardItem *> itemList;
    for(int i=0;i<FixedColumnCount-1;i++){
        item = new QStandardItem("0");
        itemList<<item;
    }
    item = new QStandardItem(m_model->headerData(FixedColumnCount-1,Qt::Horizontal).toString());
    item->setCheckable(true);
    itemList<<item;
    int row = ui->tableView->currentIndex().row();
    m_model->insertRow(row,itemList);
    m_select->clearSelection();
    m_select->setCurrentIndex(m_model->index(row,0),QItemSelectionModel::Select);


}


void MainWindow::on_actdel_triggered()
{
    QModelIndex index = m_select->currentIndex();
    if(index.row()!=m_model->rowCount()-1){
        m_model->removeRow(index.row());
        m_select->setCurrentIndex(index,QItemSelectionModel::Select);
    }else{
        m_model->removeRow(index.row());
    }

}

void MainWindow::on_actclose_triggered()
{
    close();
}


void MainWindow::on_actleft_triggered()
{
    if(!m_select->hasSelection()) return;
    QModelIndexList indexlist = m_select->selectedIndexes();
    for(auto index:indexlist){
        m_model->itemFromIndex(index)->setTextAlignment(Qt::AlignLeft|Qt::AlignVCenter);
    }
}


void MainWindow::on_actright_triggered()
{
    if(!m_select->hasSelection()) return;
    QModelIndexList indexlist = m_select->selectedIndexes();
    for(auto index:indexlist){
        m_model->itemFromIndex(index)->setTextAlignment(Qt::AlignRight|Qt::AlignVCenter);
    }
}


void MainWindow::on_actcenter_triggered()
{
    if(!m_select->hasSelection()) return;
    QModelIndexList indexlist = m_select->selectedIndexes();
    for(auto index:indexlist){
        m_model->itemFromIndex(index)->setTextAlignment(Qt::AlignCenter|Qt::AlignVCenter);
    }
}





void MainWindow::on_actbold_triggered(bool checked)
{
    if(!m_select->hasSelection()) return;
    QModelIndexList indexlist = m_select->selectedIndexes();
    for(auto index:indexlist){
        QFont font = m_model->itemFromIndex(index)->font();
        font.setBold(checked);
        m_model->itemFromIndex(index)->setFont(font);
    }
}

