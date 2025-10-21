#include "widget.h"
#include "ui_widget.h"
#include<QFileDialog>
#include <QMessageBox>
#include <QShortcut>
#include<qdebug.h>
#include <QCloseEvent>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //虽然通过上述代码 进行了widget和ui的窗口关联 但是如果发生窗空变化时候 里面的布局不会发生改变
    //通过下面的这行代码 让窗口变化时 布局随之改变
    this->setLayout(ui->verticalLayout);
    ui->widgetdown->setLayout(ui->horizontalLayout);
    connect(ui->textEdit,SIGNAL(cursorPositionChanged()),this,SLOT(oncursorPositionChanged()));
    QShortcut *shortcutopen = new QShortcut(QKeySequence(tr("Ctrl+O", "File|Open")),
                             this);
    QShortcut *shortcutsave = new QShortcut(QKeySequence(tr("Ctrl+S", "File|Save")),
                                            this);
    QShortcut *shortcutfontadd = new QShortcut(QKeySequence(tr("Ctrl+Shift+=", "File|Save")),
                                            this);
    QShortcut *shortcutfontdel = new QShortcut(QKeySequence(tr("Ctrl+Shift+-", "File|Save")),
                                               this);

    connect(shortcutopen,&QShortcut::activated,[=]{
        on_btn_open_clicked();
    });
    connect(shortcutsave,&QShortcut::activated,[=]{
        on_btn_save_clicked();
    });
    connect(shortcutfontadd,&QShortcut::activated,[=]{
        qDebug()<<"hello";
        QFont font =ui->textEdit->font();
        int fontsize=font.pointSize();
        if(fontsize==-1) return;
        int newfontsize=fontsize+1;
        font.setPointSize(newfontsize);
        ui->textEdit->setFont(font);
    });
    connect(shortcutfontdel,&QShortcut::activated,[=]{
        qDebug()<<"hello";
        QFont font =ui->textEdit->font();
        int fontsize=font.pointSize();
        if(fontsize==-1) return;
        int newfontsize=fontsize-1;
        font.setPointSize(newfontsize);
        ui->textEdit->setFont(font);
    });
}

Widget::~Widget()
{
    delete ui;
}

void Widget::closeEvent(QCloseEvent *event)
{
    int ret = QMessageBox::warning(this,tr("侯世源的记事本"),tr("Do you want close the window?\n close the window"),QMessageBox::Ok|QMessageBox::No);
    switch (ret) {
    case QMessageBox::Ok:
        event->accept();
        break;
    case QMessageBox::No:
        event->ignore();
    default:
        break;
    }

}



void Widget::on_btn_open_clicked()
{
    QString filename= QFileDialog::getOpenFileName(this,tr("Open File"),"D:/QTtest/QT_notebook/notebook",tr("Text(*.txt)"));
    ui->textEdit->clear();

    file.setFileName(filename);
    this->setWindowTitle(filename+"-侯世源的记事本");
    if(!file.open(QIODevice::ReadWrite| QIODevice::Text)){
        qDebug()<<"open file error";
    }

    QTextStream in(&file);
    while(!in.atEnd()){
        QString context =in.readLine();
        ui->textEdit->append(context);
    }
    // file.close();



}


void Widget::on_btn_save_clicked()
{
    if(!file.isOpen()){
        QString filename = QFileDialog::getSaveFileName(this,tr("Open File"),"D:/QTtest/QT_notebook/notebook/untitled.txt",tr("Text(*.txt)"));
        file.setFileName(filename);
        if(!file.open(QIODevice::WriteOnly)|QIODevice::Text){
            qDebug()<<"file open error";
        }
    }
    QTextStream out(&file);
    QString context= ui->textEdit->toPlainText();
    QMessageBox messagebox;
    messagebox.setInformativeText("文件保存成功！");
    messagebox.setStandardButtons(QMessageBox::Ok);
    int ret = messagebox.exec();
    // file.close();
}


void Widget::on_btn_close_clicked()
{
    // qDebug()<<"click";

    QMessageBox msgBox;
    msgBox.setText("The document has been modified.");
    msgBox.setInformativeText("Do you want to save your changes?");
    msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Save);
    int ret = msgBox.exec();
    switch (ret) {
    case QMessageBox::Save:
        on_btn_save_clicked();
        break;
    case QMessageBox::Discard:
        ui->textEdit->clear();
        if(file.isOpen()){
            file.close();
            ui->textEdit->clear();
            this->setWindowTitle("侯世源的记事本");
        }
        break;
    case QMessageBox::Cancel:
        // Cancel was clicked
        break;
    default:
        // should never be reached
        break;
    }





}


void Widget::on_comboBox_currentIndexChanged(int index)
{
    ui->textEdit->clear();
    if(file.isOpen()){
        QTextStream in(&file);
        qDebug()<<file.fileName();
        file.seek(0);
        while(!in.atEnd()){
            QString context =in.readLine();
            ui->textEdit->append(context);
        }{
            ui->textEdit->clear();
            if(file.isOpen()){
                QTextStream in(&file);
                qDebug()<<file.fileName();
                file.seek(0);
                while(!in.atEnd()){
                    QString context =in.readLine();
                    ui->textEdit->append(context);
                }
            }
        }
    }
}

void Widget::oncursorPositionChanged()
{
    QTextCursor tcur =ui->textEdit->textCursor();
    QString blocknum =QString::number(tcur.blockNumber());
    QString columnum =QString::number(tcur.columnNumber());
    const QString labnum="行: "+blocknum+" , 列: "+columnum;
    ui->labelposition->setText(labnum);


    QList<QTextEdit::ExtraSelection> extraSelection;
    QTextEdit::ExtraSelection ext;
    ext.cursor=ui->textEdit->textCursor();
    QBrush qbrush(Qt::lightGray);
    ext.format.setBackground(qbrush);
    ext.format.setProperty(QTextFormat::FullWidthSelection,true);
    extraSelection.append(ext);
    ui->textEdit->setExtraSelections(extraSelection);


}

