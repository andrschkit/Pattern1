#include "highrg.h"

#include "QMessageBox"

HIghRg::HIghRg(QObject *parent):QObject(parent)
{

}

void HIghRg::checkLineOnHigh(const QString &str)
{
    if(str.length()==0)
        QMessageBox::critical(Q_NULLPTR, QString::fromUtf8("Сообщение"),
                                 QString::fromUtf8("Строка пуста"));
    else
    {
        QChar c;
        foreach(c, str)
        {
            if(!( c >= 'A' && c <= 'Z'))
            {
                QMessageBox::information(Q_NULLPTR, QString::fromUtf8("Сообщение"),
                                         QString::fromUtf8("Введенная строка НЕ в верхнем регистре!"));
            return;
            }
        }
     QMessageBox::information(Q_NULLPTR, QString::fromUtf8("Сообщение"),
                                 QString::fromUtf8("Верно"));
    }
}

