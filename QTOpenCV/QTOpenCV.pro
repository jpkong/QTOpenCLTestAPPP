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
    square_ocl.cpp \
    hog.cpp

HEADERS  += mainwindow.h \
    define.h \
    square_ocl.h

INCLUDEPATH += -L~/workspace/opencv-2.4.4/include
INCLUDEPATH += -L/usr/include/CL

LIBS += ~/workspace/opencv-2.4.4/lib/libopencv_core.so
LIBS += ~/workspace/opencv-2.4.4/lib/libopencv_imgproc.so
LIBS += ~/workspace/opencv-2.4.4/lib/libopencv_highgui.so
LIBS += ~/workspace/opencv-2.4.4/lib/libopencv_ml.so
LIBS += ~/workspace/opencv-2.4.4/lib/libopencv_video.so
LIBS += ~/workspace/opencv-2.4.4/lib/libopencv_features2d.so
LIBS += ~/workspace/opencv-2.4.4/lib/libopencv_ocl.so
LIBS += ~/workspace/opencv-2.4.4/lib/libopencv_calib3d.so
LIBS += ~/workspace/opencv-2.4.4/lib/libopencv_objdetect.so
LIBS += ~/workspace/opencv-2.4.4/lib/libopencv_contrib.so
LIBS += ~/workspace/opencv-2.4.4/lib/libopencv_legacy.so
LIBS += ~/workspace/opencv-2.4.4/lib/libopencv_flann.so
LIBS += ~/workspace/opencv-2.4.4/lib/libopencv_nonfree.so

FORMS    += mainwindow.ui
