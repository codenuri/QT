#ifndef WINDOW_H
#define WINDOW_H
#include <QDebug>
#include <QWidget>
#include <QPushButton>

class Window : public QWidget
{
    Q_OBJECT

    QPushButton* btn;
public:
    Window()
    {
        btn = new QPushButton("OK", this);

        QObject::connect(btn, SIGNAL(clicked()), this, SLOT(im_slot()));

//      QObject::connect(btn, &QPushButton::clicked, this, &Window::im_slot);

//      QObject::connect(btn, SIGNAL(clicked()), this, SLOT(im_not_slot()));
        QObject::connect(btn, &QPushButton::clicked, this, &Window::im_not_slot);

//      QObject::connect(btn, &QPushButton::clicked, this, [](){ qDebug("i am lambda");});

        QObject::connect(btn, &QPushButton::clicked, [](){ qDebug("i am lambda");});
    }

public slots:
    void im_slot() { qDebug(__func__);}

public:
    void im_not_slot() { qDebug(__func__);}
};



#endif // WINDOW_H











