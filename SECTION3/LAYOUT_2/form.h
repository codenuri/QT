#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QString>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>

class FormWindow : public QWidget
{
    Q_OBJECT

//  QGridLayout* layout;
    QFormLayout* layout;
public:
    FormWindow()
    {
        layout = new QFormLayout;

        /*
        layout->addWidget(new QLabel("ID"), 0, 0);
        layout->addWidget(new QLabel("PASS"), 1, 0);
        layout->addWidget(new QLabel("EMAIL"), 2, 0);

        layout->addWidget(new QLineEdit, 0, 1);
        layout->addWidget(new QLineEdit, 1, 1);
        layout->addWidget(new QLineEdit, 2, 1);
*/
        layout->addRow(new QLabel("ID"), new QLineEdit);
        layout->addRow(new QLabel("PASS"), new QLineEdit);
        layout->addRow(new QLabel("EMAIL"), new QLineEdit);
        layout->addRow(new QLabel("AAA"));
        setLayout(layout);

    }
};

#endif // FORM_H
