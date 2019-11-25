#include "numb.h"
#include "QChar"
#include <QMessageBox>

Numb::Numb(QObject *parent):QObject(parent)
{

}

void Numb::checkLineOnNum(const QString &str)
{
    if(str.length()==0)
        QMessageBox::critical(Q_NULLPTR, QString::fromUtf8("Сообщение"),
                                 QString::fromUtf8("Строка пуста"));
    else
    {
        QChar c;
        foreach(c, str)
        {
            if(!(c >= '0' && c <= '9'))
            {
                QMessageBox::information(Q_NULLPTR, QString::fromUtf8("Сообщение"),
                                         QString::fromUtf8("Строка не число"));
            return;
            }
        }
     QMessageBox::information(Q_NULLPTR, QString::fromUtf8("Сообщение"),
                                 QString::fromUtf8("Верно"));
    }

}
