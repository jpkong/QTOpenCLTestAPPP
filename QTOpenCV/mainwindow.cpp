#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "define.h"
#include "opencv/cv.h"

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

    ui->lb_Version->setText(QString("OpenCV Version : ").append(CV_VERSION));
    imagerd = cvLoadImage("./pic1.png");
    QImage image = QImage((const unsigned char*)(imagerd->imageData), imagerd->width,imagerd->height,QImage::Format_RGB888).rgbSwapped();
    ui->lb_View->setPixmap(QPixmap::fromImage(image));
}
