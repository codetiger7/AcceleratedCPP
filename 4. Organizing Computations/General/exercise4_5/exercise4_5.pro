TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    readwords.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    readwords.h

