#ifndef MYCOMBOX_H
#define MYCOMBOX_H

#include <QComboBox>

class MyComBox : public QComboBox
{
        Q_OBJECT
public:
    MyComBox(QWidget *parent);
protected:
    void mousePressEvent(QMouseEvent *e) override;
signals:
    void reflush();
};

#endif // MYCOMBOX_H
