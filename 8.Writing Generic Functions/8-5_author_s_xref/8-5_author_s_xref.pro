TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    xref-utils.hpp \
DEPENDPATH += \
        ../8-5_author_solution/split.h


