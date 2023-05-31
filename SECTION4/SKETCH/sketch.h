#ifndef SKETCH_H
#define SKETCH_H

#include <QWidget>
#include <QString>
#include <QMouseEvent>
#include <QPainter>
#include <QImage>

class SketchWindow : public QWidget
{
    QImage image;

    QPoint from;
    bool draw = false;

    int pen_width = 5;
    QColor pen_color = Qt::black;

public:
    SketchWindow() : image(300, 300, QImage::Format_RGB32)
    {
        image.fill(qRgb(255, 255, 255));
    }

protected:
    void paintEvent(QPaintEvent *event) override
    {
        QPainter g(this);

        QRect rc = event->rect();

        g.drawImage(rc, image, rc);
    }

    void mousePressEvent(QMouseEvent *event) override
    {
        if ( event->button() == Qt::LeftButton)
        {
            draw = true;
            from = event->pos();
        }

    }

    void mouseMoveEvent(QMouseEvent *event) override
    {
        if ( draw )
        {
            QPoint to = event->pos();

            QPainter g(&image);

            g.setPen(QPen(pen_color, pen_width, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));

            g.drawLine(from, to);

            // update();


            int rad = (pen_width / 2) + 2;
            update(QRect(from, to).normalized().adjusted(-rad, -rad, +rad, +rad));

            from = to;
        }
    }

    void mouseReleaseEvent(QMouseEvent *event) override
    {
        if ( event->button() == Qt::LeftButton)
        {
            draw = false;
        }
    }



    // QWidget interface
protected:
    void resizeEvent(QResizeEvent *event) override
    {
        if (width() > image.width() || height() > image.height()) {
            int newWidth = qMax(width() + 128, image.width());
            int newHeight = qMax(height() + 128, image.height());
            resizeImage(&image, QSize(newWidth, newHeight));
            update();
        }
    }

    void resizeImage(QImage *image, const QSize &newSize)
    {
        if (image->size() == newSize)
            return;

        QImage newImage(newSize, QImage::Format_RGB32);
        newImage.fill(qRgb(255, 255, 255));

        QPainter painter(&newImage);
        painter.drawImage(QPoint(0, 0), *image);
        *image = newImage;
    }
};


#endif // SKETCH_H




