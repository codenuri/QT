#include <QApplication>
#include <QWidget>
#include <QPalette>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    QWidget win;
//  win.show();

    win.setWindowTitle("First GUI Application");
    win.move(100, 100);
    //  win.resize(500, 500);
    win.setFixedSize(500,500);
    win.setWindowOpacity(0.5);

    QPalette pal = QPalette();
    pal.setColor(QPalette::Window, Qt::blue);
    win.setAutoFillBackground(true);
    win.setPalette(pal);
    win.show();

    return app.exec();
}
