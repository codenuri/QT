#ifndef STEP3_H
#define STEP3_H
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

    int block_w, block_h;

public:
    PuzzleWindow()
    {
        pm.load("D:\\puzzle.jpg");
        qDebug() << pm;
        this->setFixedSize( pm.width(), pm.height());

        block_w = pm.width()  / COUNT;
        block_h = pm.height() / COUNT;
    }

protected:
    void paintEvent(QPaintEvent *event) override
    {
        QPainter g(this);

        // g.drawPixmap(0, 0, pm);

        // g.drawPixmap(0, 0, block_w, block_h, pm); // 축소 출력

        int no = 21;

        int bx = no % COUNT;
        int by = no / COUNT;

        g.drawPixmap(0, 0, block_w, block_h,
                     pm, bx * block_w, by * block_h, block_w, block_h);


    }



    void mousePressEvent(QMouseEvent *event) override
    {
    }
};
#endif // STEP3_H
