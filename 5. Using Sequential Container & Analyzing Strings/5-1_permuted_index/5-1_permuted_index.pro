TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    phelpers.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    phelpers.h

