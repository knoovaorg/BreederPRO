#include "topmenu.h"
#include "ui_topmenu.h"

TopMenu::TopMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TopMenu)
{
    ui->setupUi(this);
    connect(ui->pbSpecie, SIGNAL(clicked()), this, SLOT(emitOpenSpecie()));
}
void TopMenu::emitOpenSpecie()
{
    emit openSpecie();
}

TopMenu::~TopMenu()
{
    delete ui;
}
