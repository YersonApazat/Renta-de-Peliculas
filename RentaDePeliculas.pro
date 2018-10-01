#-------------------------------------------------
#
# Project created by QtCreator 2018-09-21T20:56:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RentaDePeliculas
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    menu.cpp \
    ventana_agregarusuario.cpp \
    nodo.cpp \
    lista.cpp \
    ventana_agregaradministrador.cpp \
    verpeli.cpp \
    cliente.cpp

HEADERS  += mainwindow.h \
    menu.h \
    ventana_agregarusuario.h \
    nodo.h \
    lista.h \
    ventana_agregaradministrador.h \
    verpeli.h \
    cliente.h

FORMS    += mainwindow.ui \
    menu.ui \
    ventana_agregarusuario.ui \
    ventana_agregaradministrador.ui \
    verpeliculas.ui \
    verpeli.ui
