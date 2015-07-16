TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    function.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    function.h

