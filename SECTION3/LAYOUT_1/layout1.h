#ifndef LAYOUT1_H
#define LAYOUT1_H
#include <QWidget>
#include <QPushButton>

class Layout1Window : public QWidget
{
    Q_OBJECT

    QPushButton* btn1;
    QPushButton* btn2;
    QPushButton* btn3;
public:
    Layout1Window()
    {
        btn1 = new QPushButton("button1", this);
        btn2 = new QPushButton("button2", this);
        btn3 = new QPushButton("button3", this);

        btn1->setGeometry(10, 10, 100, 30);
        btn2->setGeometry(10, 50, 100, 30);
        btn3->setGeometry(10, 90, 100, 30);
    }
};

#endif // LAYOUT1_H








