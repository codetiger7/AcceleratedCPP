TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    student_info.cpp \
    grade.cpp \
    median.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    student_info.h \
    ../../4. Organizing Computations/4-0_c_revised_grading_program/grade.h \
    grade.h \
    median.h

