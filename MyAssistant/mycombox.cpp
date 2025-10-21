#include "mycombox.h"

#include <QMouseEvent>

MyComBox::MyComBox(QWidget *parent):QComboBox(parent)
{

}

void MyComBox::mousePressEvent(QMouseEvent *e)
{
    if(e->button()==Qt::LeftButton){
            emit reflush();
    }
    QComboBox::mousePressEvent(e);
}
