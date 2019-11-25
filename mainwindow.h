#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCloseEvent>

namespace Ui { class MainWindow; }

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    Q_SIGNAL void changeLineOnNum(const QString & new_str);
    Q_SIGNAL void changeLineOnLow(const QString & new_str);
    Q_SIGNAL void changeLineOnHigh(const QString & new_str);

private slots:
    void check();
private:
    Ui::MainWindow *ui;
    void closeEvent(QCloseEvent *event);
};
#endif // MAINWINDOW_H
