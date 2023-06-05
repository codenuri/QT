#ifndef DIGITAL_CLOCK_H
#define DIGITAL_CLOCK_H

#include <QLCDNumber>
#include <QTimer>
#include <QTime>

class DigitalClock : public QLCDNumber
{
    Q_OBJECT

public:
    DigitalClock(QWidget *parent = nullptr)
        : QLCDNumber(parent)
    {
        QTimer *timer = new QTimer(this);
        connect(timer, &QTimer::timeout, this, &DigitalClock::showTime);
        timer->start(1000);
        showTime();
    }

private slots:
    void showTime()
    {
        QTime time = QTime::currentTime();
        QString text = time.toString("hh:mm");
        if ((time.second() % 2) == 0)
            text[2] = ' ';
        display(text);
    }
};



#endif // DIGITAL_CLOCK_H
