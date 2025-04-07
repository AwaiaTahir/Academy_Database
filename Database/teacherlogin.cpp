#include "teacherlogin.h"
#include "ui_teacherlogin.h"

TeacherLogin::TeacherLogin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TeacherLogin)
{
    ui->setupUi(this);
}

TeacherLogin::~TeacherLogin()
{
    delete ui;
}
