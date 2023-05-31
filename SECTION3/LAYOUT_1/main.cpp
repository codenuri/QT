#include <QApplication>
#include "layout1.h"
#include "layout2.h"
#include "layout3.h"
#include "layout4.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

//    Layout1Window win;
//    Layout2Window win;
//    Layout3Window win;
    Layout4Window win;
    win.show();

    return app.exec();
}
