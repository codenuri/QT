#include <iostream>
#include <QTime>
#include <QDebug>

int main()
{
    QTime time = QTime::currentTime();

//  std::cout << time;

    std::cout << time.hour() << std::endl;
    qDebug() << time;


    qDebug("a = %d f = %f", 10, 3.4);
    qDebug() << 10 << ", " << 3.4;

    return 0;
}




