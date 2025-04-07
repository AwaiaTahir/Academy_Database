#ifndef STUDENTLOGIN_H
#define STUDENTLOGIN_H

#include <QWidget>

namespace Ui {
class StudentLogin;
}

class StudentLogin : public QWidget
{
    Q_OBJECT

public:
    explicit StudentLogin(QWidget *parent = nullptr);
    ~StudentLogin();

private:
    Ui::StudentLogin *ui;
};

#endif // STUDENTLOGIN_H
