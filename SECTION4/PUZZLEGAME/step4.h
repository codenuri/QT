#ifndef STEP4_H
#define STEP4_H

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

    int board[COUNT][COUNT];

public:
    PuzzleWindow()
    {
        pm.load("D:\\puzzle.jpg");
        qDebug() << pm;
        this->setFixedSize( pm.width(), pm.height());

        block_w = pm.width()  / COUNT;
        block_h = pm.height() / COUNT;


        for( int y = 0; y < COUNT; ++y)
        {
            for (int x = 0; x < COUNT; ++x)
            {
                board[y][x] = x + y * COUNT; // 0 ~ 24
            }
        }
    }



protected:
    void paintEvent(QPaintEvent *event) override
    {
        QPainter g(this);


        for( int y = 0; y < COUNT; ++y)
        {
            for (int x = 0; x < COUNT; ++x)
            {

                if ( board[y][x] == EMPTY)
                {
                    g.fillRect( x*block_w, y * block_h, block_w, block_h, Qt::white );
                    continue;
                }

                int no = board[y][x];
                int bx = no % COUNT;
                int by = no / COUNT;
                g.drawPixmap(block_w * x, block_h * y,
                             block_w - 1, block_h - 1,
                             pm,
                             bx * block_w, by * block_h,
                             block_w, block_h);
            }
        }


    }



    void mousePressEvent(QMouseEvent *event) override
    {
    }
};


#endif // STEP4_H
