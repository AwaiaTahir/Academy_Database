/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QWidget *centralwidget;
    QWidget *leftPanel;
    QLabel *welcomeLabel;
    QPushButton *signInButton;
    QWidget *rightPanel;
    QLabel *signupLabel;
    QLineEdit *nameInput;
    QLineEdit *emailInput;
    QLineEdit *passwordInput;
    QPushButton *signUpButton;
    QStatusBar *statusbar;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(800, 500);
        centralwidget = new QWidget(Form);
        centralwidget->setObjectName("centralwidget");
        leftPanel = new QWidget(centralwidget);
        leftPanel->setObjectName("leftPanel");
        leftPanel->setGeometry(QRect(0, 0, 400, 500));
        welcomeLabel = new QLabel(leftPanel);
        welcomeLabel->setObjectName("welcomeLabel");
        welcomeLabel->setGeometry(QRect(102, 100, 200, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Rounded MT")});
        font.setBold(true);
        welcomeLabel->setFont(font);
        welcomeLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        signInButton = new QPushButton(leftPanel);
        signInButton->setObjectName("signInButton");
        signInButton->setGeometry(QRect(152, 250, 100, 40));
        rightPanel = new QWidget(centralwidget);
        rightPanel->setObjectName("rightPanel");
        rightPanel->setGeometry(QRect(400, 0, 400, 500));
        signupLabel = new QLabel(rightPanel);
        signupLabel->setObjectName("signupLabel");
        signupLabel->setGeometry(QRect(120, 50, 160, 40));
        signupLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        nameInput = new QLineEdit(rightPanel);
        nameInput->setObjectName("nameInput");
        nameInput->setGeometry(QRect(100, 120, 200, 40));
        emailInput = new QLineEdit(rightPanel);
        emailInput->setObjectName("emailInput");
        emailInput->setGeometry(QRect(100, 180, 200, 40));
        passwordInput = new QLineEdit(rightPanel);
        passwordInput->setObjectName("passwordInput");
        passwordInput->setGeometry(QRect(100, 240, 200, 40));
        passwordInput->setEchoMode(QLineEdit::EchoMode::Password);
        signUpButton = new QPushButton(rightPanel);
        signUpButton->setObjectName("signUpButton");
        signUpButton->setGeometry(QRect(140, 310, 120, 40));
        statusbar = new QStatusBar(Form);
        statusbar->setObjectName("statusbar");

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Login Signup", nullptr));
        leftPanel->setStyleSheet(QCoreApplication::translate("Form", "background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 #3DCCC7, stop:1 #1E6F73);", nullptr));
        welcomeLabel->setStyleSheet(QCoreApplication::translate("Form", "color: white; font-size: 30px; font-weight: bold; background-color: transparent;", nullptr));
        welcomeLabel->setText(QCoreApplication::translate("Form", "Hello, Friend!", nullptr));
        signInButton->setStyleSheet(QCoreApplication::translate("Form", "\n"
"        QPushButton {\n"
"            background-color: transparent; \n"
"            color: white; \n"
"            border: 2px solid white; \n"
"            border-radius: 20px; \n"
"            padding: 5px;\n"
"        }\n"
"        QPushButton:hover {\n"
"            background-color: rgba(255, 255, 255, 0.2);\n"
"        }\n"
"        QPushButton:pressed {\n"
"            background-color: rgba(255, 255, 255, 0.4);\n"
"        }\n"
"      ", nullptr));
        signInButton->setText(QCoreApplication::translate("Form", "SIGN IN", nullptr));
        rightPanel->setStyleSheet(QCoreApplication::translate("Form", "background: white;", nullptr));
        signupLabel->setStyleSheet(QCoreApplication::translate("Form", "color: black; font-size: 20px; font-weight: bold;", nullptr));
        signupLabel->setText(QCoreApplication::translate("Form", "Create Account", nullptr));
        nameInput->setStyleSheet(QCoreApplication::translate("Form", "border: 1px solid gray; border-radius: 10px; padding: 5px;", nullptr));
        nameInput->setPlaceholderText(QCoreApplication::translate("Form", "Name", nullptr));
        emailInput->setStyleSheet(QCoreApplication::translate("Form", "border: 1px solid gray; border-radius: 10px; padding: 5px;", nullptr));
        emailInput->setPlaceholderText(QCoreApplication::translate("Form", "Email", nullptr));
        passwordInput->setStyleSheet(QCoreApplication::translate("Form", "border: 1px solid gray; border-radius: 10px; padding: 5px;", nullptr));
        passwordInput->setPlaceholderText(QCoreApplication::translate("Form", "Password", nullptr));
        signUpButton->setStyleSheet(QCoreApplication::translate("Form", "\n"
"        QPushButton {\n"
"            background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 #3DCCC7, stop:1 #2FA3A0);\n"
"            color: white;\n"
"            border-radius: 20px;\n"
"            padding: 5px;\n"
"        }\n"
"        QPushButton:hover {\n"
"            background: #68D8D6;\n"
"        }\n"
"        QPushButton:pressed {\n"
"            background: #058F8A;\n"
"        }\n"
"      ", nullptr));
        signUpButton->setText(QCoreApplication::translate("Form", "SIGN UP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
