TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    median.cpp \
    Student_info.cpp \
    grade.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    median.h \
    Student_info.h \
    grade.h

