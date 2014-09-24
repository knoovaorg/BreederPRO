#ifndef SUBJECT_H
#define SUBJECT_H

#include <QWidget>

namespace Ui {
class Subject;
}

class Subject : public QWidget
{
    Q_OBJECT

public:
    explicit Subject(QWidget *parent = 0);
    ~Subject();

private:
    Ui::Subject *ui;
};

#endif // SUBJECT_H
