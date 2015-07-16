TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    str.cpp \

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    str.h \
    vec.h \

