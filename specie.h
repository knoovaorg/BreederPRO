#ifndef SPECIE_H
#define SPECIE_H

#include <QWidget>
#include "genus.h"

namespace Ui {
class Specie;
}

class Specie : public QWidget
{
    Q_OBJECT

public:
    explicit Specie(QWidget *parent = 0);
    ~Specie();

private:
    Ui::Specie *ui;
    Genus *genus;

private slots:
    void copyTextSpToSubSp(QString);
};

#endif // SPECIE_H
