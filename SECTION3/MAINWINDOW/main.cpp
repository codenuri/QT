#include <QApplication>
#include "mainwindow.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    Window1 win1;
    Window2 win2;

    win1.show();
    win2.show();

    return app.exec();
}
