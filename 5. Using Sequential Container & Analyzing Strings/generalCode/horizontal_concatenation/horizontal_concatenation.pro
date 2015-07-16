TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt


INCLUDEPATH += ../framing_a_picture/ a


SOURCES += main.cpp \
    horizontal_cat.cpp \
     ../framing_a_picture/fun.cpp\


include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    horizontal_cat.h \
     ../framing_a_picture/fun.h\


