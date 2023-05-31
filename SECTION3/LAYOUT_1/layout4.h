#ifndef LAYOUT4_H
#define LAYOUT4_H
#include <QWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QTextEdit>


class Layout4Window : public QWidget
{
    Q_OBJECT

    QTextEdit*   edit;
    QPushButton* btn_ok;
    QPushButton* btn_cancel;

    QHBoxLayout* hlayout;
    QVBoxLayout* vlayout;
public:
    Layout4Window()
    {
        edit       = new QTextEdit(this);
        btn_ok     = new QPushButton("Ok", this);
        btn_cancel = new QPushButton("Cancel", this);

        btn_ok->setSizePolicy(QSizePolicy::Fixed,
                              QSizePolicy::Fixed);

        btn_cancel->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);

        hlayout = new QHBoxLayout;
        vlayout = new QVBoxLayout;

        hlayout->setAlignment(Qt::AlignRight);

        hlayout->addWidget(btn_ok);
        hlayout->addWidget(btn_cancel);

        vlayout->addWidget(edit);
        vlayout->addLayout(hlayout); // 핵심

        this->setLayout(vlayout);
    }
};
#endif // LAYOUT4_H



