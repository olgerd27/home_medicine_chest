#-------------------------------------------------
#
# Project created by QtCreator 2015-06-28T09:52:42
#
#-------------------------------------------------

QT       += core gui widgets sql

TARGET = hmedchest
TEMPLATE = app

SOURCES += main.cpp\
        main_window.cpp \
    charts_form.cpp \
    queries_form.cpp \
    medicine_cards_form.cpp

HEADERS  += main_window.h \
    custom_widgets.h \
    charts_form.h \
    queries_form.h \
    medicine_cards_form.h

FORMS    += main_window.ui \
    charts_form.ui \
    queries_form.ui \
    medicine_cards_form.ui

RESOURCES += \
    resources.qrc
