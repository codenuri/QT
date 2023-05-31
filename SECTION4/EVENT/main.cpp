#include <QApplication>
#include "mouse_event.h"
#include "keyboard_event.h"
#include "window_event.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

//  MouseEventWindow win;
//  KeyboardEventWindow win;
    WindowEventWindow win;

    win.show();

    return app.exec();
}
