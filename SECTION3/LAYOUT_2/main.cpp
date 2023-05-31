#include <QApplication>
#include "grid.h"
#include "form.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

//    GridWindow win;
    FormWindow win;
    win.show();

    return app.exec();
}
