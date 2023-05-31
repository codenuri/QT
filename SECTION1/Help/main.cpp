#include <qDebug>
#include <QCoreApplication>
#include <QTime>

int main(int argc, char** argv)
{
    QCoreApplication app(argc, argv);

    QTime time = QTime::currentTime();

    qDebug() << time;


    return app.exec();
}
