#include "accountantlogin.h"
#include "ui_accountantlogin.h"

AccountantLogin::AccountantLogin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AccountantLogin)
{
    ui->setupUi(this);
}

AccountantLogin::~AccountantLogin()
{
    delete ui;
}
