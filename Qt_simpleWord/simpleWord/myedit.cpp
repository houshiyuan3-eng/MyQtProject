#include "myedit.h"

#include <QKeyEvent>


myEdit::myEdit(QWidget *parent) :QTextEdit(parent){

}

void myEdit::keyPressEvent(QKeyEvent *e)
{
    qDebug()<<"keyPressEvent";
    if(e->key()==Qt::Key_Control){
        onpressed =1;
    }
    QTextEdit::keyPressEvent(e);
}

void myEdit::keyReleaseEvent(QKeyEvent *e)
{
    if(e->key()==Qt::Key_Control){
        onpressed =0;
    }
    QTextEdit::keyReleaseEvent(e);
}

void myEdit::wheelEvent(QWheelEvent *e)
{
    if(onpressed){
        if(e->angleDelta().y()>0){
            emit upfontsize();
        }else{
            emit downfontsize();
        }
        e->accept();
    }else{
        QTextEdit::wheelEvent(e);
    }
}



