#include "mytextedit.h"

#include <QWheelEvent>



MyTextEdit::MyTextEdit(QWidget *parent) :QTextEdit(parent)
{

}

void MyTextEdit::wheelEvent(QWheelEvent *e)
{
    if(onkeypressed){
        if(e->angleDelta().y()>0){
            zoomIn();
        }else{
            zoomOut();
        }
        e->accept();
    }else{
        QTextEdit::wheelEvent(e);
    }

}

void MyTextEdit::keyPressEvent(QKeyEvent *e)
{
    if(e->key()==Qt::Key_Control){
        onkeypressed=1;
    }
    QTextEdit::keyPressEvent(e);
}

void MyTextEdit::keyReleaseEvent(QKeyEvent *e)
{
    if(e->key()==Qt::Key_Control){
        onkeypressed=0;
    }
    QTextEdit::keyReleaseEvent(e);
}
