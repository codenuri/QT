#include <QApplication>
#include "draw1.h"
#include "draw2.h"
#include "draw3.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

//  Draw1Window win;
//  Draw2Window win;
    Draw3Window win;
    win.show();

    return app.exec();
}
