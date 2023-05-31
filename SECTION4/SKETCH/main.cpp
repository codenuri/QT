#include <QApplication>
#include "sketch.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    SketchWindow win;
    win.show();

    return app.exec();
}
