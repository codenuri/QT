#ifndef DESIGNER2_H
#define DESIGNER2_H

#include <QWidget>
#include <QString>

#include "ui_form.h"

class Window2 : public QWidget
{
    Q_OBJECT
    Ui::Form* ui;
public:
    Window2() : ui( new Ui::Form )
    {
        ui->setupUi(this);

        ui->pushButton->setText("OK");
    }

};


#endif // DESIGNER2_H
