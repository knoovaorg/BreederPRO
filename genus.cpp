#include "genus.h"
#include "ui_genus.h"
#include "Costanti.cpp"

Genus::Genus(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Genus)
{
    ui->setupUi(this);

    ui->cbClasse->addItem(CLASSE_1);
    ui->cbClasse->addItem(CLASSE_2);
    ui->cbClasse->addItem(CLASSE_3);
    ui->cbClasse->addItem(CLASSE_4);
    ui->cbClasse->addItem(CLASSE_5);
    ui->cbClasse->addItem(CLASSE_6);
}

Genus::~Genus()
{
    delete ui;
}
