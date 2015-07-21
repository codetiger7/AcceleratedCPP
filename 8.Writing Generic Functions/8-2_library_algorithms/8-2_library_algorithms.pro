TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    median.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    library.hpp \
    median.h

