#-------------------------------------------------
#
# Project created by QtCreator 2013-11-30T22:46:12
#
#-------------------------------------------------

QT       += core gui

TARGET = GUI
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    arnold.cpp \
    rossler.cpp \
    encrypt.cpp \
    decrypt.cpp \
    dialog_sync.cpp \
    dialog_encrypt.cpp \
    dialog_decrypt.cpp \
    dialog_credits.cpp \
    dialog_howto.cpp

HEADERS  += mainwindow.h \
    arnold.h \
    rossler.h \
    encrypt.h \
    decrypt.h \
    dialog_sync.h \
    dialog_encrypt.h \
    dialog_decrypt.h \
    dialog_credits.h \
    dialog_howto.h

FORMS    += mainwindow.ui \
    dialog_sync.ui \
    dialog_encrypt.ui \
    dialog_decrypt.ui \
    dialog_credits.ui \
    dialog_howto.ui
