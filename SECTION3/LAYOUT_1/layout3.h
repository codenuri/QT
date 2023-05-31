#ifndef LAYOUT3_H
#define LAYOUT3_H
#include <QPushButton>
#include <QBoxLayout>

class Layout3Window : public QWidget
{
    Q_OBJECT

    QPushButton* btn1;
    QPushButton* btn2;
    QPushButton* btn3;
    QPushButton* btn4;

    //QBoxLayout* layout;
    QVBoxLayout* layout;
public:
    Layout3Window()
    {
        btn1 = new QPushButton("button1", this);

        btn1->setSizePolicy(QSizePolicy::Expanding,
                            QSizePolicy::Expanding);

        btn2 = new QPushButton("button2", this);
        btn2->setSizePolicy(QSizePolicy::Expanding,
                            QSizePolicy::Expanding);

        btn3 = new QPushButton("button3", this);

        btn3->setSizePolicy(QSizePolicy::Fixed,
                            QSizePolicy::Fixed);

        btn4 = new QPushButton("button4", this);

        //layout = new QBoxLayout(QBoxLayout::TopToBottom);
        layout = new QVBoxLayout(this);

        layout->addWidget(btn1);
        layout->addSpacing(20);
        layout->addWidget(btn2);
        layout->addStretch(0);
        layout->addWidget(btn3);
        layout->addStretch(2);
        layout->addWidget(btn4);

        this->setLayout(layout);
    }
};

#endif // LAYOUT3_H
