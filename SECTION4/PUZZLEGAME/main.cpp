#include <QApplication>
#include "puzzlegame.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    PuzzleWindow win;
    win.show();

    return app.exec();
}
