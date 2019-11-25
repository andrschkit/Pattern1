#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked,this, &MainWindow::check);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    qint32 msg_butt = QMessageBox::question(this,QString ("Close app"), QString("Do you want to close app?"),QMessageBox::Ok,QMessageBox::Cancel);
    if (msg_butt==QMessageBox::Ok)
          event->accept();
    else
          event->ignore();

}

void MainWindow::check()
{
    if(ui->radioButton->isChecked())
       emit changeLineOnNum(ui->lineEdit->displayText());
    else if(ui->radioButton_2->isChecked())
       emit changeLineOnHigh(ui->lineEdit->displayText());
    else
         emit changeLineOnLow(ui->lineEdit->displayText());

}

