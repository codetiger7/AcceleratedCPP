TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    frame.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    frame.h

