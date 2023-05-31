#ifndef STEP1_H
#define STEP1_H

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
public:
    PuzzleWindow()
    {
    }

protected:
    void paintEvent(QPaintEvent *event) override
    {
    }

    void mousePressEvent(QMouseEvent *event) override
    {
    }
};

#endif // STEP1_H
