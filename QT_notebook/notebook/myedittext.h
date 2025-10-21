#ifndef MYEDITTEXT_H
#define MYEDITTEXT_H
#include <QTextEdit>
#include<QWidget>
class MyEditText : public QTextEdit
{
public:
    MyEditText(QWidget *parent);
protected:
    void wheelEvent(QWheelEvent *e) override;
    void keyPressEvent(QKeyEvent *e) override;
    void keyReleaseEvent(QKeyEvent *e) override;
private:
    bool ctrlKeyPressed;
};

#endif // MYEDITTEXT_H
