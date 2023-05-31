#include <QCoreApplication>
#include "signal_slot.h"

int main(int argc, char** argv)
{
    QCoreApplication app(argc, argv);

    PrintValue pv;

    InfiniteCounter ic;

    QObject::connect( &ic, SIGNAL(valueChanged(int)), &pv, SLOT(print(int)));

    ic.run();

    return app.exec();
}
