#ifndef DRAW1_H
#define DRAW1_H

#include <QWidget>
#include <QString>
#include <QPainter>

class Draw1Window : public QWidget
{
public:
    Draw1Window() {}


    // QWidget interface
protected:
    void mousePressEvent(QMouseEvent *event) override
    {
        //QPainter g(this);

        //g.drawRect(10, 10, 100, 100);
    }


    void paintEvent(QPaintEvent *event) override
    {
        QPainter g(this);

        g.drawRect(10, 10, 100, 100);
    }
};




#endif // DRAW1_H
