#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "subject.h"
#include "topmenu.h"
#include "specie.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    TopMenu *menu;
    Subject *soggetto;
    Specie *specie;

public slots:
};

#endif // MAINWINDOW_H
