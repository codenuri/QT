#include <QApplication>
#include "designer1.h"
#include "designer2.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

//  Window1 win;
    Window2 win;
    win.show();

    return app.exec();
}
