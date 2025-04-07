#include "studentlogin.h"
#include "ui_studentlogin.h"

StudentLogin::StudentLogin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::StudentLogin)
{
    ui->setupUi(this);
}

StudentLogin::~StudentLogin()
{
    delete ui;
}
