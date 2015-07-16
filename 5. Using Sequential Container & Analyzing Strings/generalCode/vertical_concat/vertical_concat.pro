TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += ../framing_a_picture/

SOURCES += main.cpp \
    vcat.cpp \
     ../framing_a_picture/fun.cpp\

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    vcat.h  \
     ../framing_a_picture/fun.h \



