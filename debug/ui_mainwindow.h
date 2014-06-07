/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun Jun 8 00:32:14 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QLabel *lb_View;
    QComboBox *cb_ExampleList;
    QPushButton *bt_Start;
    QGroupBox *gb_OpType;
    QRadioButton *rb_OpCV;
    QRadioButton *rb_OpCL;
    QGroupBox *gb_Result;
    QTextEdit *te_Result;
    QLabel *lb_Version;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(623, 579);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(20, 70, 351, 291));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        frame->setPalette(palette);
        frame->setStyleSheet(QString::fromUtf8("background-color: black"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lb_View = new QLabel(frame);
        lb_View->setObjectName(QString::fromUtf8("lb_View"));
        lb_View->setGeometry(QRect(0, 0, 351, 291));
        cb_ExampleList = new QComboBox(centralWidget);
        cb_ExampleList->setObjectName(QString::fromUtf8("cb_ExampleList"));
        cb_ExampleList->setGeometry(QRect(20, 30, 351, 27));
        cb_ExampleList->setEditable(false);
        cb_ExampleList->setMinimumContentsLength(0);
        cb_ExampleList->setFrame(true);
        bt_Start = new QPushButton(centralWidget);
        bt_Start->setObjectName(QString::fromUtf8("bt_Start"));
        bt_Start->setGeometry(QRect(430, 30, 131, 27));
        gb_OpType = new QGroupBox(centralWidget);
        gb_OpType->setObjectName(QString::fromUtf8("gb_OpType"));
        gb_OpType->setGeometry(QRect(400, 80, 201, 61));
        gb_OpType->setStyleSheet(QString::fromUtf8(""));
        gb_OpType->setFlat(false);
        gb_OpType->setCheckable(false);
        rb_OpCV = new QRadioButton(gb_OpType);
        rb_OpCV->setObjectName(QString::fromUtf8("rb_OpCV"));
        rb_OpCV->setGeometry(QRect(10, 30, 51, 22));
        rb_OpCV->setChecked(true);
        rb_OpCL = new QRadioButton(gb_OpType);
        rb_OpCL->setObjectName(QString::fromUtf8("rb_OpCL"));
        rb_OpCL->setGeometry(QRect(100, 30, 51, 22));
        gb_Result = new QGroupBox(centralWidget);
        gb_Result->setObjectName(QString::fromUtf8("gb_Result"));
        gb_Result->setGeometry(QRect(20, 370, 581, 131));
        te_Result = new QTextEdit(gb_Result);
        te_Result->setObjectName(QString::fromUtf8("te_Result"));
        te_Result->setGeometry(QRect(0, 20, 581, 101));
        te_Result->setReadOnly(false);
        lb_Version = new QLabel(centralWidget);
        lb_Version->setObjectName(QString::fromUtf8("lb_Version"));
        lb_Version->setGeometry(QRect(20, 0, 241, 17));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 623, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        cb_ExampleList->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QT Open CV & CL TEST", 0, QApplication::UnicodeUTF8));
        lb_View->setText(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
        cb_ExampleList->clear();
        cb_ExampleList->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "SQUARE", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "HOG", 0, QApplication::UnicodeUTF8)
        );
        bt_Start->setText(QApplication::translate("MainWindow", "Start", 0, QApplication::UnicodeUTF8));
        gb_OpType->setTitle(QApplication::translate("MainWindow", "Operation Type", 0, QApplication::UnicodeUTF8));
        rb_OpCV->setText(QApplication::translate("MainWindow", "CV", 0, QApplication::UnicodeUTF8));
        rb_OpCL->setText(QApplication::translate("MainWindow", "CL", 0, QApplication::UnicodeUTF8));
        gb_Result->setTitle(QApplication::translate("MainWindow", "RESULT", 0, QApplication::UnicodeUTF8));
        lb_Version->setText(QApplication::translate("MainWindow", "<html><head/><body><p>OpenCV Version : </p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
