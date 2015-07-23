TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

DEPENDPATH += \
      ../8-5_author_solution/split.h \


SOURCES += main.cpp \
    grammar-utils.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    grammar-utils.hpp

