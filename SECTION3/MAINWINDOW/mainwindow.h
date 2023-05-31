#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QMainWindow>
#include <QHBoxLayout>
#include <QPushButton>

class Window1 : public QWidget
{
    Q_OBJECT
public:
    Window1()
    {
        setWindowTitle("Widget");

        QLayout* p = layout();
        qDebug("%p", p);
    }
};

class Window2 : public QMainWindow
{
    Q_OBJECT
public:
    Window2()
    {
        setWindowTitle("QMainWindow");

        QLayout* p = layout();
        qDebug("%p", p);

        qDebug() << p->metaObject()->className();
        qDebug() << p->metaObject()->superClass()->className();

        QHBoxLayout* layout = new QHBoxLayout;

        auto w = new QWidget;
        w->setLayout(layout);

        setCentralWidget(w);

        layout->addWidget(new QPushButton("button1"));
        layout->addWidget(new QPushButton("button2"));
    }
};









#endif // MAINWINDOW_H
