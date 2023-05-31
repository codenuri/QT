#ifndef WIDGETMENU_H
#define WIDGETMENU_H

#include <QWidget>
#include <QMainWindow>
#include <QString>
#include <QMenu>
#include <QMenuBar>
#include <QAction>
#include <QVBoxLayout>

//class WidgetMenuWindow : public QMainWindow
class WidgetMenuWindow : public QWidget
{
    Q_OBJECT

public:
    WidgetMenuWindow()
    {

//      QMenu* menu = menuBar()->addMenu("File");

        QMenuBar* menubar = new QMenuBar(this);

        QMenu* menu = menubar->addMenu("File");

        menu->addAction("New");
        menu->addAction("Exit");

        //menubar->setGeometry(0, 0, 200,30);

        QVBoxLayout* layout = new QVBoxLayout;

        //layout->addWidget(menubar);
        layout->setMenuBar(menubar);

        setLayout(layout);
    }

};






#endif // WIDGETMENU_H
