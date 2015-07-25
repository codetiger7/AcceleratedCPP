TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    core.cpp \
    grade.cpp \
    grad.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    core.h \
    grad.h \
    grade.h \
    median.h \
    read_hw.h

