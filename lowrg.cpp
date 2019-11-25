#include "lowrg.h"

#include<QMessageBox>

LowRg::LowRg(QObject *parent):QObject(parent)
{

}

void LowRg::checkLineOnLow(const QString &str)
{
    if(str.length()==0)
        QMessageBox::critical(Q_NULLPTR, QString::fromUtf8("Сообщение"),
                                 QString::fromUtf8("Строка пуста"));
    else
    {
        QChar c;
        foreach(c, str)
        {
            if(!( c >= 'a' && c <= 'z'))
            {
                QMessageBox::information(Q_NULLPTR, QString::fromUtf8("Сообщение"),
                                         QString::fromUtf8("Введенная строка НЕ в нижнем регистре!!!"));
            return;
            }
        }
     QMessageBox::information(Q_NULLPTR, QString::fromUtf8("Сообщение"),
                                 QString::fromUtf8("Верно"));
    }
}
