#ifndef MYEDIT_H
#define MYEDIT_H

#include <QEvent>
#include <QTextEdit>

class myEdit : public QTextEdit
{
    Q_OBJECT
public:
    myEdit(QWidget *parnet);
protected:
    void keyPressEvent(QKeyEvent *e) override;
    void keyReleaseEvent(QKeyEvent *e) override;
    void wheelEvent(QWheelEvent *e) override;
private:
    int onpressed = 0;
signals:
    void upfontsize();
    void downfontsize();
};

#endif // MYEDIT_H
