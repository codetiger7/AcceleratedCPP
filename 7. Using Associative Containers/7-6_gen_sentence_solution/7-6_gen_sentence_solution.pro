TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    helper.cpp \
    split.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    helper.h \
    split.h

