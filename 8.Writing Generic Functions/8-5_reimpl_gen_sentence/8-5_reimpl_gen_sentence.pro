TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    gen_sentence.cpp \
    xref.cpp \
    split.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    gen_sentence.h \
    xref.h \
    split.h \
    random.h \
    rexref.hpp

