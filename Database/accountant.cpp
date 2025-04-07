#include "accountant.h"
#include "ui_accountant.h"

Accountant::Accountant(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Accountant)
{
    ui->setupUi(this);
}

Accountant::~Accountant()
{
    delete ui;
}
