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
    query_form.cpp \
    graph_form.cpp \
    medicine_card_form.cpp

HEADERS  += main_window.h \
    query_form.h \
    graph_form.h \
    medicine_card_form.h \
    custom_widgets.h

FORMS    += main_window.ui \
    query_form.ui \
    graph_form.ui \
    medicine_card_form.ui

RESOURCES += \
    resources.qrc
