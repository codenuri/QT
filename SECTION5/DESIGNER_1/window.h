#ifndef WINDOW_H
#define WINDOW_H
#include <QWidget>
#include <QString>
#include <QPushButton>
#include <QVBoxLayout>

namespace Ui
{
class Form
{
public:
    QPushButton* btn1;
    QPushButton* btn2;
    QVBoxLayout* layout;

    void setupUi( QWidget* form)
    {
        btn1 = new QPushButton("button1", form);
        btn2 = new QPushButton("button2", form);
        layout = new QVBoxLayout(form);

        layout->addWidget(btn1);
        layout->addWidget(btn2);
    }
};
}

/*
class Window : public QWidget, public Ui::Form
{
    Q_OBJECT

public:
    Window()
    {
        setupUi(this);

        // btn1
    }
};

*/
class Window : public QWidget
{
    Q_OBJECT

    Ui::Form* ui;
public:
    Window() : ui( new Ui::Form )
    {
        ui->setupUi(this);
        //ui->btn1
    }
    ~Window()
    {
        delete ui;
    }
};











#endif // WINDOW_H
