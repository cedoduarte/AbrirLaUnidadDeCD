TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    DuCD.c \
    main.c

LIBS += -lwinmm

HEADERS += \
    DuCD.h
