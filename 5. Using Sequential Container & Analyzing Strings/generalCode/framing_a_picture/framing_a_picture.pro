TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    fun.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    fun.h

