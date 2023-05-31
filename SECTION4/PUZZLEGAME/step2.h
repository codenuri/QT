#ifndef STEP2_H
#define STEP2_H

#include <QWidget>
#include <QString>
#include <QDebug>
#include <QPixmap>
#include <QPainter>
#include <QMouseEvent>
#include <QApplication>
#include <algorithm>


class PuzzleWindow : public QWidget
{
    static constexpr int COUNT = 5;
    static constexpr int EMPTY = COUNT * COUNT - 1;

    QPixmap pm;
public:
    PuzzleWindow()
    {
        pm.load("D:\\puzzle.jpg");
        qDebug() << pm;

        this->setFixedSize( pm.width(), pm.height());
    }

protected:
    void paintEvent(QPaintEvent *event) override
    {
        QPainter g(this);

        g.drawPixmap(0, 0, pm);
    }

    void mousePressEvent(QMouseEvent *event) override
    {
    }
};


#endif // STEP2_H
