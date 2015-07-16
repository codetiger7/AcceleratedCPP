TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    functions.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    functions.h

