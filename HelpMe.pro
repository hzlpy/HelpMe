#-------------------------------------------------
#
# Project created by QtCreator 2015-01-05T19:00:56
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HelpMe
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dish.cpp \
    table.cpp \
    util.cpp \
    logindialog.cpp \
    adminmainwindow.cpp \
    adddialog.cpp

HEADERS  += mainwindow.h \
    dish.h \
    table.h \
    util.h \
    logindialog.h \
    adminmainwindow.h \
    adddialog.h

FORMS    += mainwindow.ui \
    logindialog.ui \
    adminmainwindow.ui \
    adddialog.ui

RESOURCES += \
    toolBar.qrc

UI_DIR += ./UI
