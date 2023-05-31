#ifndef MOUSE_EVENT_H
#define MOUSE_EVENT_H

#include <QWidget>
#include <QString>
#include <QMouseEvent>
class MouseEventWindow : public QWidget
{
    Q_OBJECT

public:
    MouseEventWindow()
    {
        // 버튼을 누르지 않아도 move event 발생
        //this->setMouseTracking(true);
    }


    // QWidget interface
protected:
    void mousePressEvent(QMouseEvent *event) override
    {
        QPoint pt = event->pos();
        QString s = QString::asprintf("%s (%d, %d)", __func__, pt.x(), pt.y());
        this->setWindowTitle(s);
    }

    void mouseReleaseEvent(QMouseEvent *event) override
    {
        QPoint pt = event->pos();
        QString s = QString::asprintf("%s (%d, %d)", __func__, pt.x(), pt.y());
        this->setWindowTitle(s);
    }
    void mouseDoubleClickEvent(QMouseEvent *event) override
    {
        QPoint pt = event->pos();
        QString s = QString::asprintf("%s (%d, %d)", __func__, pt.x(), pt.y());
        this->setWindowTitle(s);
    }
    void mouseMoveEvent(QMouseEvent *event) override
    {
        QPoint pt = event->pos();
        QString s = QString::asprintf("%s (%d, %d)", __func__, pt.x(), pt.y());
        this->setWindowTitle(s);
    }
    void wheelEvent(QWheelEvent *event) override
    {
        this->setWindowTitle(__func__);
    }
    void enterEvent(QEnterEvent *event) override
    {
        this->setWindowTitle(__func__);
    }
    void leaveEvent(QEvent *event) override
    {
        this->setWindowTitle(__func__);
    }
};


#endif // MOUSE_EVENT_H
