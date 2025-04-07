#ifndef ACCOUNTANTLOGIN_H
#define ACCOUNTANTLOGIN_H

#include <QWidget>

namespace Ui {
class AccountantLogin;
}

class AccountantLogin : public QWidget
{
    Q_OBJECT

public:
    explicit AccountantLogin(QWidget *parent = nullptr);
    ~AccountantLogin();

private:
    Ui::AccountantLogin *ui;
};

#endif // ACCOUNTANTLOGIN_H
