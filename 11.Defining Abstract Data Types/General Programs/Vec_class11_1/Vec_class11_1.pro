TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    vec.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    vec.h

