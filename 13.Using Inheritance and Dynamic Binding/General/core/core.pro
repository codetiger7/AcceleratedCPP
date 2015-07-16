TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    core.cpp \
    grad.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    core.h \
    grad.h

