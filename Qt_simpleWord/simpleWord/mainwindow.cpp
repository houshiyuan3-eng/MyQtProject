#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QActionGroup>
#include<QSpinBox>
#include<QFontComboBox>
#include<QLabel>
#include<QProgressBar>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include<QCursor>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QActionGroup * actionGroup = new QActionGroup(this);
    actionGroup->addAction(ui->file_chinese);
    actionGroup->addAction(ui->file_engilsh);
    actionGroup->setExclusive(true);

    spinBox =new QSpinBox(this);
    spinBox->setMinimum(5);
    spinBox->setMaximum(50);
    spinBox->setValue(ui->textEdit_content->font().pointSize());
    spinBox->setMinimumWidth(60);
    ui->toolBar->addWidget(spinBox);

    QFontComboBox *fontCombox = new QFontComboBox(this);
    fontCombox->setFont(ui->textEdit_content->font());
    fontCombox->setMinimumWidth(150);
    ui->toolBar->addWidget(fontCombox);

    ui->toolBar->addSeparator();

    ui->toolBar->addAction(ui->file_close);

    labelFile = new QLabel(this);
    labelFile->setMinimumWidth(150);
    labelFile->setAlignment(Qt::AlignmentFlag());
    labelFile->setText("文件名：");

    ui->toolBar_down->addWidget(labelFile);
    progressBar = new QProgressBar(this);
    progressBar->setMinimum(5);
    progressBar->setMaximum(50);
    progressBar->setValue(ui->textEdit_content->font().pointSize());
    // qDebug()<<ui->textEdit_content->font();
    ui->toolBar_down->addWidget(progressBar);

    ui->file_copy->setEnabled(false);
    ui->file_del->setEnabled(false);
    ui->file_paste->setEnabled(ui->textEdit_content->canPaste());




    labelrowandlen = new QLabel(this);
    labelrowandlen->setMinimumWidth(80);
    labelrowandlen->setText("  行， 列");
    ui->toolBar_down->addWidget(labelrowandlen);
    connect(spinBox,&QSpinBox::valueChanged,this,&MainWindow::on_fontSizeChanged);
    connect(fontCombox,&QFontComboBox::currentFontChanged,this,&MainWindow::on_fontStyleChanged);
    connect(ui->textEdit_content,&myEdit::upfontsize,this,&MainWindow::on_upfont);
    connect(ui->textEdit_content,&myEdit::downfontsize,this,&MainWindow::on_downfont);
    connect(ui->textEdit_content,&QTextEdit::cursorPositionChanged,this,&MainWindow::on_currentPosChange);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_textEdit_content_copyAvailable(bool b)
{
    ui->file_copy->setEnabled(b);
    ui->file_del->setEnabled(b);
    ui->file_paste->setEnabled(ui->textEdit_content->canPaste());
}


void MainWindow::on_textEdit_content_selectionChanged()
{
    QTextCharFormat fmt =ui->textEdit_content->currentCharFormat();
    ui->font_ltalic->setChecked(fmt.font().italic());
    ui->font_bold->setChecked(fmt.font().bold());
    ui->file_underline->setChecked(fmt.font().underline());
}


void MainWindow::on_font_bold_triggered(bool checked)
{
    QTextCharFormat fmt =ui->textEdit_content->currentCharFormat();
    if(checked)
        fmt.setFontWeight(QFont::Bold);
    else
        fmt.setFontWeight(QFont::Normal);
    ui->textEdit_content->setCurrentCharFormat(fmt);

}


void MainWindow::on_font_ltalic_triggered(bool checked)
{
    QTextCharFormat fmt =ui->textEdit_content->currentCharFormat();
    fmt.setFontItalic(checked);
    ui->textEdit_content->setCurrentCharFormat(fmt);
}


void MainWindow::on_file_underline_triggered(bool checked)
{
    QTextCharFormat fmt =ui->textEdit_content->currentCharFormat();
    fmt.setFontUnderline(checked);
    ui->textEdit_content->setCurrentCharFormat(fmt);
}

void MainWindow::on_fontSizeChanged(int value)
{
    QTextCharFormat fmt = ui->textEdit_content->currentCharFormat();
    fmt.setFontPointSize(value);
    ui->textEdit_content->setCurrentCharFormat(fmt);
    progressBar->setValue(value);

}

void MainWindow::on_fontStyleChanged(const QFont &font)
{
    QTextCharFormat fmt = ui->textEdit_content->currentCharFormat();
    fmt.setFont(font);
    ui->textEdit_content->setCurrentCharFormat(fmt);

}

void MainWindow::on_upfont()
{
    QTextCursor cursor = ui->textEdit_content->textCursor();
    QTextCharFormat fmt;
    int value = ui->textEdit_content->fontPointSize();
    if (value == 0) value = ui->textEdit_content->font().pointSize();
    if(value>50) return;
    fmt.setFontPointSize(value + 1);
    spinBox->setValue(value + 1);
    progressBar->setValue(value + 1);


    // 选中整个文档再应用
    cursor.select(QTextCursor::Document);
    cursor.mergeCharFormat(fmt);
    ui->textEdit_content->mergeCurrentCharFormat(fmt);
}

void MainWindow::on_downfont()
{
    QTextCursor cursor = ui->textEdit_content->textCursor();
    QTextCharFormat fmt;
    int value = ui->textEdit_content->fontPointSize();
    if (value == 0) value = ui->textEdit_content->font().pointSize();
    if(value<5) return;
    fmt.setFontPointSize(value - 1);
    spinBox->setValue(value - 1);
    progressBar->setValue(value - 1);

    // 选中整个文档再应用
    cursor.select(QTextCursor::Document);
    cursor.mergeCharFormat(fmt);
    ui->textEdit_content->mergeCurrentCharFormat(fmt);
}


void MainWindow::on_add_open_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    tr("Open txt"), "D:/QTtest/Qt_simpleWord/simpleWord", tr("Text files (*.txt)"));
    file.setFileName(fileName);
    ui->textEdit_content->clear();
    if(!file.open(QIODevice::ReadWrite|QIODevice::Text)){
        qDebug()<<"open file error!";
    }
    QTextStream in(&file);
    while(!in.atEnd()){
        QString context = in.readLine();
        ui->textEdit_content->append(context);
    }
    QList<QString> fname =fileName.split("/");
    labelFile->setText("文件名："+fname.last());
    file.close(); // ✅ 关闭文件
}




void MainWindow::on_file_save_triggered()
{
    QString fileName;

    // 如果还没有打开过文件，就让用户选择路径
    if (file.fileName().isEmpty()) {
        fileName = QFileDialog::getSaveFileName(
            this, tr("Save txt"),
            "D:/QTtest/Qt_simpleWord/simpleWord/untitle.txt",
            tr("Text files (*.txt)")
            );
        if (fileName.isEmpty())
            return; // 用户取消
        file.setFileName(fileName);
    } else {
        fileName = file.fileName();
    }
    QList<QString> fname =fileName.split("/");
    labelFile->setText("文件名："+fname.last());

    // 以“覆盖模式”打开文件
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate)) {
        QMessageBox::warning(this, tr("Error"), tr("Cannot open file for writing."));
        return;
    }

    QTextStream out(&file);
    out << ui->textEdit_content->toPlainText();
    file.close();

    QMessageBox::information(this, tr("Saved"), tr("文件保存成功!"));
}



void MainWindow::on_add_Files_triggered()
{
    if (!ui->textEdit_content->toPlainText().isEmpty()) {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, tr("提示"),
                                      tr("当前内容未保存，是否保存？"),
                                      QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel);

        if (reply == QMessageBox::Yes) {
            on_file_save_triggered(); // 调用保存函数
        } else if (reply == QMessageBox::Cancel) {
            return; // 用户取消新建
        }
    }

    // 清空编辑区内容
    ui->textEdit_content->clear();

    // 重置当前文件路径
    file.setFileName("");
}

void MainWindow::on_currentPosChange()
{
    QTextCursor cur = ui->textEdit_content->textCursor();
    int han = cur.blockNumber();
    int col =cur.columnNumber();
    labelrowandlen->setText(QString::number(han)+"行， " + QString::number(col) + "列");

    QList<QTextEdit::ExtraSelection> extselection;
    QTextEdit::ExtraSelection ext;
    ext.cursor = ui->textEdit_content->textCursor();
    QBrush br(Qt::gray);
    ext.format.setBackground(br);
    ext.format.setProperty(QTextFormat::FullWidthSelection,true);
    extselection.append(ext);
    ui->textEdit_content->setExtraSelections(extselection);
}

