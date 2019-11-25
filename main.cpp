#include "mainwindow.h"
#include <QApplication>
#include <QObject>
#include "numb.h"
#include "lowrg.h"
#include "highrg.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    LowRg ll;
    Numb nl;
    HIghRg hl;

    QObject::connect(&w, &MainWindow::changeLineOnNum, &nl, &Numb::checkLineOnNum);
    QObject::connect(&w, &MainWindow::changeLineOnLow, &ll, &LowRg::checkLineOnLow);
    QObject::connect(&w, &MainWindow::changeLineOnHigh, &hl, &HIghRg::checkLineOnHigh);



    w.show();

    return a.exec();
}
