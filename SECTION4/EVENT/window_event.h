#ifndef WINDOW_EVENT_H
#define WINDOW_EVENT_H

#include <QWidget>
#include <QString>

class WindowEventWindow : public QWidget
{
    Q_OBJECT

public:
    WindowEventWindow()
    {
    }

    // QWidget interface
protected:
    void moveEvent(QMoveEvent *event) override
    {
        this->setWindowTitle(__func__);
    }
    void resizeEvent(QResizeEvent *event) override
    {
        this->setWindowTitle(__func__);
    }
};

#endif // WINDOW_EVENT_H
