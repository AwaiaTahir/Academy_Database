#ifndef ACCOUNTANT_H
#define ACCOUNTANT_H

#include <QWidget>

namespace Ui {
class Accountant;
}

class Accountant : public QWidget
{
    Q_OBJECT

public:
    explicit Accountant(QWidget *parent = nullptr);
    ~Accountant();

private:
    Ui::Accountant *ui;
};

#endif // ACCOUNTANT_H
