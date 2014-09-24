#include "specie.h"
#include "ui_specie.h"

#include "Costanti.cpp"

Specie::Specie(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Specie)
{
    ui->setupUi(this);
    this->hide();
    genus = new Genus();
    ui->cbClasse->addItem(CLASSE_1);
    ui->cbClasse->addItem(CLASSE_2);
    ui->cbClasse->addItem(CLASSE_3);
    ui->cbClasse->addItem(CLASSE_4);
    ui->cbClasse->addItem(CLASSE_5);
    ui->cbClasse->addItem(CLASSE_6);
    ui->cbDocumento->addItem(DOC_CITES_A);
    ui->cbDocumento->addItem(DOC_CITES_B);
    ui->cbDocumento->addItem(DOC_SOLO_MARCA);
    ui->cbDocumento->addItem(DOC_PEDIGREE);
    connect(ui->pbAddGenus, SIGNAL(clicked()), genus, SLOT(show()));
    connect(ui->leSpecie, SIGNAL(textChanged(QString)), this, SLOT(copyTextSpToSubSp(QString)));
}

void Specie::copyTextSpToSubSp(QString text)
{
    ui->leSubspecie->setText(text.toLower());
}

Specie::~Specie()
{
    delete ui;
}
