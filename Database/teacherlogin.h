#ifndef TEACHERLOGIN_H
#define TEACHERLOGIN_H

#include <QWidget>

namespace Ui {
class TeacherLogin;
}

class TeacherLogin : public QWidget
{
    Q_OBJECT

public:
    explicit TeacherLogin(QWidget *parent = nullptr);
    ~TeacherLogin();

private:
    Ui::TeacherLogin *ui;
};

#endif // TEACHERLOGIN_H
