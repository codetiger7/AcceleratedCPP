TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    func.cpp \
    pline.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    func.h \
    pline.h

