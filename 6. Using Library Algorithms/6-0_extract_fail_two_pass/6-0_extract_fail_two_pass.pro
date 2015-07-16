TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp \
    student_info.cpp \
    median.cpp \
    grade.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    student_info.h \
    median.h \
    grade.h

