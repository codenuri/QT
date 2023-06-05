#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // List Widget
    ui->list->addItem("first");
    ui->list->addItem("second");

    QIcon icon = style()->standardIcon(QStyle::SP_DirClosedIcon);

    QListWidgetItem* item = new QListWidgetItem(icon, "three");

    item->setFont(QFont("Verdana", 14));
    //ui->list->setFont(QFont("Verdana", 32));

    item->setSizeHint(QSize(30, 50));

    ui->list->addItem(item);


    // QTreeWidget

    ui->tree->setColumnCount(2);



    QStringList st;
    st << "AA" << "BB";
    ui->tree->setHeaderLabels(st);

    ui->tree->setHeaderHidden(true);


    QTreeWidgetItem* tm1 = new QTreeWidgetItem;

    tm1->setText(0, "parent1");
    tm1->setText(1, "parent1 설명");

    ui->tree->addTopLevelItem(tm1);


    QTreeWidgetItem* tm2 = new QTreeWidgetItem(ui->tree);

    tm2->setText(0, "parent2");
    tm2->setText(1, "parent2 설명");


    QTreeWidgetItem* child1 = new QTreeWidgetItem(tm1);

    child1->setText(0, "child1");
    child1->setText(1, "child1 설명");

    QTreeWidgetItem* child2 = new QTreeWidgetItem;

    child2->setText(0, "child2");
    child2->setText(1, "child2 설명");

    tm1->addChild(child2);
}



















Widget::~Widget()
{
    delete ui;
}















