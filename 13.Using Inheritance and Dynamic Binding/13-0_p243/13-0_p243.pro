TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    core.cpp \
    grade.cpp \
    student_info.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    core.h \
    grade.h \
    read_hw.h \
    median.h \
    grad.h \
    student_info.h

