#ifndef SIGNAL_SLOT_H
#define SIGNAL_SLOT_H

#include <QDebug>
#include <QThread>

class PrintValue : public QObject
{
    Q_OBJECT

public slots:
    void print(int value) { qDebug("value : %d", value);}
};


class InfiniteCounter : public QObject
{
     Q_OBJECT

public:
    void run()
    {
        int cnt = 0;

        while(1)
        {
            QThread::sleep(1);
            ++cnt;

            emit valueChanged(cnt);
        }
    }

signals:
    void valueChanged(int);
};

#endif // SIGNAL_SLOT_H
