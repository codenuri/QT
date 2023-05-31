#include <QApplication>
#include "menu1.h"
#include "menu2.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

//    Menu1Window win;
    Menu2Window win;
    win.show();

    return app.exec();
}
