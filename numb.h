#ifndef NUMB_H
#define NUMB_H

#include <QObject>


class Numb : public QObject
{
    Q_OBJECT
public:
    explicit Numb(QObject *parent = nullptr);

    Q_SLOT void checkLineOnNum(const QString & str);
};


#endif // NUMB_H
