#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QFile>
#include <QMainWindow>
#include <QSpinBox>
#include<QLabel>

QT_BEGIN_NAMESPACE

class QProgressBar;
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_textEdit_content_copyAvailable(bool b);

    void on_textEdit_content_selectionChanged();

    void on_font_bold_triggered(bool checked);

    void on_font_ltalic_triggered(bool checked);

    void on_file_underline_triggered(bool checked);

    void on_fontSizeChanged(int value);

    void on_fontStyleChanged(const QFont &font);

    void on_upfont();

    void on_downfont();

    void on_add_open_triggered();

    void on_file_save_triggered();

    void on_add_Files_triggered();

    void on_currentPosChange();

private:
    Ui::MainWindow *ui;
    QProgressBar *progressBar;
    QSpinBox *spinBox;
    QFile file;
    QLabel *labelFile;
    QLabel *labelrowandlen;

};
#endif // MAINWINDOW_H
