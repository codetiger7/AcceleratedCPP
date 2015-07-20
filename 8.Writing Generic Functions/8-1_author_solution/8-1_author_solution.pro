TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    student_info.cpp \
    median.cpp \
    analysis.cpp \
    grade.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    analysis.hpp \
    student_info.h \
    median.h \
    grade.h

