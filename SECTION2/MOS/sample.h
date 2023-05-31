#ifndef SAMPLE_H
#define SAMPLE_H

#include <QObject>

class Sample : public QObject
{
//    Q_OBJECT
public:
    explicit Sample(QObject *parent = nullptr);

    /*
// Q_OBJECT
public: static const QMetaObject staticMetaObject;
    virtual const QMetaObject *metaObject() const;
    virtual void *qt_metacast(const char *);
    virtual int qt_metacall(QMetaObject::Call, int, void **);
    static inline QString tr(const char *s, const char *c = nullptr, int n = -1) { return staticMetaObject.tr(s, c, n); }
private: static void qt_static_metacall(QObject *, QMetaObject::Call, int, void **); struct QPrivateSignal { explicit QPrivateSignal() = default; };
    */


    void f1();

signals:

};

#endif // SAMPLE_H
