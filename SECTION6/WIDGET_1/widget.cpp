#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);





    ui->edit1->setFont(QFont("Cambria", 24));
    ui->button->setFont(QFont("Cambria", 24));


    ui->edit2->setEchoMode(QLineEdit::Password);

    QRegularExpression rx("-?\\d{1,3}");
    QValidator *validator = new QRegularExpressionValidator(rx, this);

    ui->edit1->setValidator(validator);

    //--------------------------------------

    //ui->edit1->setStyleSheet("font-style: italic; background-color:yellow");
    qApp->setStyleSheet("QLineEdit{font-style: italic; background-color:yellow}");

    connect(ui->button, SIGNAL(clicked()), this, SLOT(button_clicked()));
}


Widget::~Widget()
{
    delete ui;
}

void Widget::button_clicked()
{
    QString s = ui->edit1->text();
    ui->edit1->setText("");

    ui->combo->addItem(s);

}














