#ifndef LOWRG_H
#define LOWRG_H

#include <QObject>

class LowRg : public QObject
{
    Q_OBJECT
public:
    explicit LowRg(QObject *parent = nullptr);

    Q_SLOT void checkLineOnLow(const QString & str);
};

#endif // LOWRG_H
