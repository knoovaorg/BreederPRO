#ifndef TOPMENU_H
#define TOPMENU_H

#include <QWidget>
#include "specie.h"

namespace Ui {
class TopMenu;
}

class TopMenu : public QWidget
{
    Q_OBJECT

public:
    explicit TopMenu(QWidget *parent = 0);
    ~TopMenu();

private:
    Ui::TopMenu *ui;
    Specie *specie;

private slots:
    void emitOpenSpecie();

signals:
    void openSpecie();
};

#endif // TOPMENU_H
