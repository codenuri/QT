#ifndef GRID_H
#define GRID_H

#include <QWidget>
#include <QString>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>

class GridWindow : public QWidget
{
    Q_OBJECT

    QGridLayout* layout;
public:
    GridWindow()
    {
        layout = new QGridLayout;

        layout->addWidget(new QLabel("ID"), 0, 0);
        layout->addWidget(new QLabel("PASS"), 1, 0);
        layout->addWidget(new QLabel("EMAIL"), 2, 0);

        layout->addWidget(new QLineEdit, 0, 1);
        layout->addWidget(new QLineEdit, 1, 1);
        layout->addWidget(new QLineEdit, 2, 1);

        layout->addWidget(new QLineEdit, 3, 0, 2, 0);

        setLayout(layout);
    }
};
#endif // GRID_H




