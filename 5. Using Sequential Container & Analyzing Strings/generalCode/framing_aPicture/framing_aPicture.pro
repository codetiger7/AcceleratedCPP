TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    collection.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    collection.h

