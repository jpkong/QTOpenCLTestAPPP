#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "define.h"

#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/ocl/ocl.hpp>
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/features2d/features2d.hpp>

using namespace cv;
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Init();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Start()
{
    ui->te_Result->setText("TEST");
}

void MainWindow::Init()
{
    // Event
    connect(ui->bt_Start,SIGNAL(clicked()), this, SLOT(Start()));

    // OpenCV Version
    ui->lb_Version->setText(QString("OpenCV Version : ").append(CV_VERSION));

    // OCL Init
    vector<ocl::Info> info;
    //cv::ocl::getDevice(info);

    //OpenCVTest();
}

// OpenCV Porting Simply Test
void MainWindow::OpenCVTest()
{
    imagerd = cvLoadImage("./pic1.png");
    QImage image = QImage((const unsigned char*)(imagerd->imageData), imagerd->width,imagerd->height,QImage::Format_RGB888).rgbSwapped();
    ui->lb_View->setPixmap(QPixmap::fromImage(image));

}
