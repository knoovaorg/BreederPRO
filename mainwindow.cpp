#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "subject.h"
#include "topmenu.h"
#include "specie.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    menu = new TopMenu();
    soggetto = new Subject();
    specie = new Specie();
    connect(menu, SIGNAL(openSpecie()), specie, SLOT(show()));
    ui->MainLayout->addWidget(menu,0, 1, 1, 6);
    ui->MainLayout->addWidget(soggetto, 1, 1, 3, 1);
}


MainWindow::~MainWindow()
{
    delete ui;
}
