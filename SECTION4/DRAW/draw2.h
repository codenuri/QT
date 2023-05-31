#ifndef DRAW2_H
#define DRAW2_H

#include <QWidget>
#include <QString>
#include <QPainter>
#include <QPaintEvent>

class Draw2Window : public QWidget
{
    int count = 0;
public:
    Draw2Window() {}

protected:
    void paintEvent(QPaintEvent *event) override
    {
        qDebug() << event->region();

        QPainter g(this);

        QString s = QString::asprintf("count = %d", count);

        g.drawText( 10, 10, s);
    }

    void mousePressEvent(QMouseEvent *event) override
    {
        ++count;
        // this->update();

        //this->update(100, 100, 200, 200);
        // this->update(0, 0, 100, 100);

    }
};






#endif // DRAW2_H
