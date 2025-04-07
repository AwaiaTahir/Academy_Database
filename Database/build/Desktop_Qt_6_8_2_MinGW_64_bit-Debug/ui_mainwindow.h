/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(136, 138, 511, 323));
        QFont font;
        font.setPointSize(10);
        widget->setFont(font);
        widget->setStyleSheet(QString::fromUtf8("#widget {\n"
"	background-color : #e9ecef;\n"
"	border-radius : 10px;\n"
"	border : 2px solid  #3DCCC7;\n"
"}"));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(138, 52, 267, 43));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Britannic")});
        font1.setPointSize(24);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color : #3DCCC7;"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 134, 97, 101));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton::checked {\n"
"    background-color: transparent;\n"
"    border: 2px solid #3DCCC7;\n"
"}\n"
""));
        pushButton->setCheckable(true);
        pushButton->setChecked(false);
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(148, 134, 97, 101));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton::checked {\n"
"    background-color: transparent;\n"
"    border: 2px solid #3DCCC7;\n"
"}"));
        pushButton_2->setCheckable(true);
        pushButton_2->setChecked(false);
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(268, 134, 97, 101));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton::checked {\n"
"    background-color: transparent;\n"
"    border: 2px solid #3DCCC7;\n"
"}"));
        pushButton_3->setCheckable(true);
        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(386, 134, 97, 101));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton::checked {\n"
"    background-color: transparent;\n"
"    border: 2px solid #3DCCC7;\n"
"}"));
        pushButton_4->setCheckable(true);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(46, 210, 67, 16));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(12);
        font2.setBold(false);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color : #3DCCC7;\n"
"background-color : transparent;"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(154, 212, 87, 16));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color : #3DCCC7;\n"
"background-color : transparent;"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(276, 212, 81, 16));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color : #3DCCC7;\n"
"background-color : transparent;"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(386, 212, 97, 17));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("color : #3DCCC7;\n"
"background-color : transparent;"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(46, 146, 71, 65));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color : transparent;\n"
"	border : none;\n"
"}\n"
"\n"
"\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/Admin1.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_5->setIcon(icon);
        pushButton_5->setIconSize(QSize(50, 50));
        pushButton_5->setCheckable(true);
        pushButton_5->setChecked(false);
        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(160, 146, 71, 65));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color : transparent;\n"
"	border : none;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/student-48.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_6->setIcon(icon1);
        pushButton_6->setIconSize(QSize(50, 50));
        pushButton_6->setCheckable(true);
        pushButton_6->setChecked(false);
        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(282, 146, 71, 65));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color : transparent;\n"
"	border : none;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/teacher-48.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_7->setIcon(icon2);
        pushButton_7->setIconSize(QSize(50, 50));
        pushButton_7->setCheckable(true);
        pushButton_7->setChecked(false);
        pushButton_15 = new QPushButton(widget);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setGeometry(QRect(400, 146, 71, 65));
        pushButton_15->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color : transparent;\n"
"	border : none;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/businessman-48.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_15->setIcon(icon3);
        pushButton_15->setIconSize(QSize(50, 50));
        pushButton_15->setCheckable(true);
        pushButton_15->setChecked(false);
        pushButton_16 = new QPushButton(widget);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setGeometry(QRect(226, 280, 79, 25));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial Rounded MT")});
        font3.setBold(true);
        pushButton_16->setFont(font3);
        pushButton_16->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3DCCC7;\n"
"    border-radius: 5px;\n"
"    color: white;\n"
"    font-size: 12px;\n"
"    font-weight: bold;\n"
"    border: 2px solid #2FA3A0;\n"
"    box-shadow: 3px 3px 5px rgba(0, 0, 0, 0.4); \n"
"}\n"
"\n"
"/* Simulating button press */\n"
"QPushButton:pressed {\n"
"    background-color: #058F8A;\n"
"    border: 2px solid #1E7E7B;\n"
"    transform: translateY(2px); \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #68D8D6;\n"
"}\n"
"\n"
"\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "What's Your Role ?", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Admin", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Student", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Teacher", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Accountant", nullptr));
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        pushButton_15->setText(QString());
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
