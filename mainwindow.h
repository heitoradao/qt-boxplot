#ifndef MAINWINDOW_H
#define MAINWINDOW_H


namespace Ui {
class MainWindow;
}


#include <QMainWindow>


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
