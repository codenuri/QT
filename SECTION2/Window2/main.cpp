#include <QApplication>
#include <QWidget>
#include <QDebug>

#include <QPushButton>
#include <QSlider>

class Window : public QWidget
{

    QPushButton* btn;
    QSlider* slider;
public:
    Window()
    {
        btn = new QPushButton("OK", this);
        slider = new QSlider(Qt::Vertical, this);

        btn->setGeometry(10, 10, 100, 30);
        slider->setGeometry(50, 50, 10, 100);
    }

protected:
    void mousePressEvent(QMouseEvent *event) override
    {
        qDebug("mousePressEvent");
    }
};













int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    Window win;
    win.show();

    return app.exec();
}
