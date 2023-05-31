#ifndef KEYBOARD_EVENT_H
#define KEYBOARD_EVENT_H

#include <QWidget>
#include <QString>
#include <QKeyEvent>

class KeyboardEventWindow : public QWidget
{
    Q_OBJECT

public:
    KeyboardEventWindow()
    {
    }
protected:
    void keyPressEvent(QKeyEvent *event) override
    {
        QString s = QString::asprintf("%s, %d, %d", __func__,
                                      event->nativeScanCode(),
                                      event->nativeVirtualKey());
        s += " " + event->text();

        this->setWindowTitle(s);

    }
    void keyReleaseEvent(QKeyEvent *event) override
    {
    }
};

#endif // KEYBOARD_EVENT_H






