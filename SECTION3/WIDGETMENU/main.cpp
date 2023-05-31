#include <QApplication>
#include "widgetmenu.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    WidgetMenuWindow win;
    win.show();

    return app.exec();
}
