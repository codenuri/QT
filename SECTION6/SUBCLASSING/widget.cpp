#include "widget.h"
#include "ui_widget.h"

#include "digital_clock.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    DigitalClock* clock = new DigitalClock(this);
    clock->setGeometry(10, 10, 200, 100);
}

Widget::~Widget()
{
    delete ui;
}

