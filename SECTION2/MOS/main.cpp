#include <QDebug>
#include "sample.h"

int main()
{
    Sample sam;

    const QMetaObject* mo = sam.metaObject();

    qDebug() << mo->className();

    return 0;
}

