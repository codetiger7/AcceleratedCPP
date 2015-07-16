TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    student_info.cpp \
    grade.cpp \
    median.cpp \
    analysis.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    student_info.h \
    grade.h \
    median.h \
    analysis.h

