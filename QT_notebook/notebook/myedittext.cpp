#include "myedittext.h"

#include <QTextEdit>
MyEditText::MyEditText(QWidget *parent) : QTextEdit(parent){

}

void MyEditText::wheelEvent(QWheelEvent *e)
{
    qDebug()<<"helo";
}

void MyEditText::keyPressEvent(QKeyEvent *e)
{

}

void MyEditText::keyReleaseEvent(QKeyEvent *e)
{

}
