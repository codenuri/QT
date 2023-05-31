#ifndef MENU1_H
#define MENU1_H

#include <QMainWindow>
#include <QString>
#include <QMessageBox>
#include <QMenuBar>
#include <QMenu>
#include <QAction>

class Menu1Window : public QMainWindow
{
    Q_OBJECT

public:
    Menu1Window()
    {
        //createMenu1();
        createMenu2();
    }

    void createMenu1()
    {
        QMenuBar* menubar = menuBar();

        QMenu* menu = new QMenu("File");

        menubar->addMenu(menu);

        QAction* ac1 = new QAction("New");
        QAction* ac2 = new QAction("Exit");

        menu->addAction(ac1);
        menu->addSeparator();
        menu->addAction(ac2);

        connect( ac1, &QAction::triggered,
                 this, &Menu1Window::file_new);

        connect( ac2, &QAction::triggered,
                this, &Menu1Window::close);
    }
    void createMenu2()
    {
        QMenu* menu = menuBar()->addMenu("File");

        QAction* ac1 = menu->addAction("New");
        menu->addSeparator();
        QAction* ac2 = menu->addAction("Exit");

        connect( ac1, &QAction::triggered,
                this, &Menu1Window::file_new);

        connect( ac2, &QAction::triggered,
                this, &Menu1Window::close);
    }


public slots:
    void file_new()
    {
        QMessageBox msgBox;
        msgBox.setText("select file-new menu");
        msgBox.exec();
    }
};

#endif // MENU1_H















