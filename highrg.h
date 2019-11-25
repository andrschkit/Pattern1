#ifndef HIGHRG_H
#define HIGHRG_H

#include <QObject>

class HIghRg : public QObject
{
    Q_OBJECT
public:
    explicit HIghRg(QObject *parent = nullptr);

    Q_SLOT void checkLineOnHigh(const QString & str);
};

#endif // HIGHRG_H
