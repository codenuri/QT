#ifndef MENU2_H
#define MENU2_H

#include <QMainWindow>
#include <QString>
#include <QMessageBox>
#include <QMenuBar>
#include <QMenu>
#include <QAction>

#include <QToolBar>
#include <QStatusBar>
#include <QContextMenuEvent>
#include <QPixmap>
#include <QIcon>

class Menu2Window : public QMainWindow
{
    Q_OBJECT
    QAction* ac1;
    QAction* ac2;
public:
    Menu2Window()
    {
        setFixedSize(500,500);

        // 1. create menu
        QPixmap pm("D:\\melon.png");
        QIcon icon(pm);

        QMenu* menu = menuBar()->addMenu("&File"); // ALF + F

        ac1 = menu->addAction(icon, "&New", QKeySequence("Ctrl+N"));
        ac2 = menu->addAction(icon, "E&xit", QKeySequence("Ctrl+X"));


        // 2. connect signal-slot
        connect( ac1, &QAction::triggered, this, &Menu2Window::file_new);
        connect( ac2, &QAction::triggered, this, &Menu2Window::close);

        // 3. toolbar
        QToolBar* toolbar = addToolBar("main toolbar");
        toolbar->addAction(ac1);
        toolbar->addAction(ac2);

        // 4. status bar
        statusBar()->showMessage("Test");
        ac1->setStatusTip("create new document");
        ac2->setStatusTip("close window");


    }
    // mouse right button
    void contextMenuEvent(QContextMenuEvent *event)
    {
        QMenu menu(this);
        menu.addAction(ac1);
        menu.addAction(ac2);
        menu.exec(event->globalPos());
    }

public slots:
    void file_new()
    {
        QMessageBox msgBox;
        msgBox.setText("select file-new menu");
        msgBox.exec();
    }
};

#endif // MENU2_H
