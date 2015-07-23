TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    student_info.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    student_info.h

