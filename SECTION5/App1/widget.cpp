#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect( ui->pushButton_3, SIGNAL(clicked()),
            this, SLOT(button3_click()));
}

Widget::~Widget()
{
    delete ui;
}

