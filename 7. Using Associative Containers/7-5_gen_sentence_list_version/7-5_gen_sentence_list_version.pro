TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    general.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    general.h

