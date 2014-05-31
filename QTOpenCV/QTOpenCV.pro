#-------------------------------------------------
#
# Project created by QtCreator 2014-05-04T13:29:29
#
#-------------------------------------------------

QT       += core gui

TARGET = QTOpenCV
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h \
    define.h

INCLUDEPATH += -L~/workspace/opencv-2.4.4/include
LIBS += -L~/workspace/opencv-2.4.4/lib
LIBS += -lopencv_core
LIBS += -lopencv_imgproc
LIBS += -lopencv_highgui
LIBS += -lopencv_ml
LIBS += -lopencv_video
LIBS += -lopencv_ocl

FORMS    += mainwindow.ui

RESOURCES +=
