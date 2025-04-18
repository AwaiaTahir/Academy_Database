QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    accountant.cpp \
    accountantlogin.cpp \
    adminlogin.cpp \
    form.cpp \
    main.cpp \
    mainwindow.cpp \
    student.cpp \
    studentlogin.cpp \
    teacher.cpp \
    teacherlogin.cpp

HEADERS += \
    accountant.h \
    accountantlogin.h \
    adminlogin.h \
    form.h \
    mainwindow.h \
    student.h \
    studentlogin.h \
    teacher.h \
    teacherlogin.h

FORMS += \
    accountant.ui \
    accountantlogin.ui \
    adminlogin.ui \
    form.ui \
    mainwindow.ui \
    student.ui \
    studentlogin.ui \
    teacher.ui \
    teacherlogin.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resourses.qrc
