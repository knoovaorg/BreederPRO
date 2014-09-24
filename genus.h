#ifndef GENUS_H
#define GENUS_H

#include <QWidget>

namespace Ui {
class Genus;
}

class Genus : public QWidget
{
    Q_OBJECT

public:
    explicit Genus(QWidget *parent = 0);
    ~Genus();

private:
    Ui::Genus *ui;
};

#endif // GENUS_H
