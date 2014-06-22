#-------------------------------------------------
#
# Project created by QtCreator 2014-05-04T13:29:29
#
#-------------------------------------------------

QT       += core gui

TARGET = QTOpenCV
TEMPLATE = app


SOURCES += mainwindow.cpp\
        main.cpp \
    square_ocl.cpp \
    hog.cpp \
    global.cpp

HEADERS  += mainwindow.h \
    define.h \
    square_ocl.h \
    global.h \
    ui_mainwindow.h \
    template.hpp \
    hog.hpp

INCLUDEPATH += -L/usr/local/include/opencv
INCLUDEPATH += -L/usr/include/CL

LIBS += /usr/local/lib/libopencv_core.so
LIBS += /usr/local/lib/libopencv_imgproc.so
LIBS += /usr/local/lib/libopencv_highgui.so
LIBS += /usr/local/lib/libopencv_ml.so
LIBS += /usr/local/lib/libopencv_video.so
LIBS += /usr/local/lib/libopencv_features2d.so
LIBS += /usr/local/lib/libopencv_ocl.so
LIBS += /usr/local/lib/libopencv_calib3d.so
LIBS += /usr/local/lib/libopencv_objdetect.so
LIBS += /usr/local/lib/libopencv_contrib.so
LIBS += /usr/local/lib/libopencv_legacy.so
LIBS += /usr/local/lib/libopencv_flann.so
LIBS += /usr/local/lib/libopencv_nonfree.so

FORMS    += mainwindow.ui
