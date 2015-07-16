TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    pline.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    pline.h

