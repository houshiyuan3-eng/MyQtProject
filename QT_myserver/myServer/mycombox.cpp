#include "mycombox.h"

#include <QMouseEvent>

myCombox::myCombox(QWidget *parent):QComboBox(parent){

}

void myCombox::mousePressEvent(QMouseEvent *e)
{
    if(e->button()==Qt::LeftButton){
        emit on_Combox_click();
    }
    QComboBox::mousePressEvent(e);
}
