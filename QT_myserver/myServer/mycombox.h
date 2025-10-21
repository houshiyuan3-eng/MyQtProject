#ifndef MYCOMBOX_H
#define MYCOMBOX_H

#include <QComboBox>
#include <QWidget>
#include <QObject>

class myCombox : public QComboBox
{
    Q_OBJECT
public:
    myCombox(QWidget *parent);
protected:
    void mousePressEvent(QMouseEvent *e) override;
signals:
    void on_Combox_click();
};

#endif // MYCOMBOX_H
