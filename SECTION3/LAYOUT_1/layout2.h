#ifndef LAYOUT2_H
#define LAYOUT2_H

#include <QWidget>
#include <QPushButton>
#include <QBoxLayout>

class Layout2Window : public QWidget
{
    Q_OBJECT

    QPushButton* btn1;
    QPushButton* btn2;
    QPushButton* btn3;

    QBoxLayout* layout;
public:
    Layout2Window()
    {
        btn1 = new QPushButton("button1", this);
        btn2 = new QPushButton("button2", this);
        btn3 = new QPushButton("button3", this);

        //layout = new QBoxLayout(QBoxLayout::TopToBottom);
        layout = new QBoxLayout(QBoxLayout::RightToLeft, this);

        layout->addWidget(btn1);
        layout->addWidget(btn2);
        layout->addWidget(btn3);

        //this->setLayout(layout);
    }
};

#endif // LAYOUT2_H




