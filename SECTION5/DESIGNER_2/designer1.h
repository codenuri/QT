#ifndef DESIGNER1_H
#define DESIGNER1_H

#include <QWidget>
#include <QString>
#include "ui_form.h"

class Window1 : public QWidget,
                public Ui::Form
{
    Q_OBJECT

public:
    Window1()
    {
        setupUi(this);
    }

};

#endif // DESIGNER1_H
