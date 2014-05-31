#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <opencv2/imgproc/imgproc.hpp>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void Init();

private:
    void OpenCVTest();

private slots:
    void Start();

public:

private:
    Ui::MainWindow *ui;
    IplImage*   imagerd;
};

#endif // MAINWINDOW_H
