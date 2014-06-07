#-------------------------------------------------
#
# Project created by QtCreator 2014-05-04T13:29:29
#
#-------------------------------------------------

QT       += core gui

TARGET = QTOpenCV
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    square_ocl.cpp

HEADERS  += mainwindow.h \
    define.h \
    square_ocl.h

INCLUDEPATH += -L~/workspace/opencv-2.4.4/include
INCLUDEPATH += -L/usr/include/CL

LIBS += -L~/workspace/opencv-2.4.4/lib
LIBS += -L/usr/lib

LIBS += -lopencv_core
LIBS += -lopencv_imgproc
LIBS += -lopencv_highgui
LIBS += -lopencv_ml
LIBS += -lopencv_video
LIBS += -lopencv_ocl
LIBS += -lopencv_features2d
LIBS += -lopencv_calib3d
LIBS += -lopencv_objdetect
LIBS += -lopencv_contrib
LIBS += -lopencv_legacy
LIBS += -lopencv_flann
LIBS += -lopencv_nonfree
LIBS += -lOpenCL

FORMS    += mainwindow.ui
