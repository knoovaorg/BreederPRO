#include "subject.h"
#include "ui_subject.h"

Subject::Subject(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Subject)
{
    ui->setupUi(this);
}

Subject::~Subject()
{
    delete ui;
}
