#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "define.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


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
    int i = 0;
    //for(i=0; i<cDefine.EXAMPLE_LIST)
    i = (int)(sizeof(cDefine.EXAMPLE_LIST)/sizeof(cDefine.EXAMPLE_LIST[0]));

    //ui->te_Result->setText(std::to_string(i));

    // Event
    connect(ui->bt_Start,SIGNAL(clicked()), this, SLOT(Start()));
}
