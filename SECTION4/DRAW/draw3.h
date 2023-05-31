#ifndef DRAW3_H
#define DRAW3_H

#include <QWidget>
#include <QString>
#include <QPainter>
#include <QPaintEvent>
#include <QThread>

class Draw3Window : public QWidget
{
    int count = 0;
public:
    Draw3Window() {}

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
        this->update();  // Q 에 이벤트 넣기
        this->update();  // Q 에 이벤트 넣기
//         this->repaint();
//        this->repaint();
        QThread::sleep(1); // 1초.
    }
};

#endif // DRAW3_H
