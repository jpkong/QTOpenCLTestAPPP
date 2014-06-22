#include <QtGui/QApplication>
#include "mainwindow.h"
#include <opencv2/ocl/ocl.hpp>
//#include <opencv2/highgui/highgui.hpp>

//extern void printHelp();
#if 1
int main(int argc, char *argv[])
{
/*
    try
    {
        if (argc < 2)
            printHelp();
        Args args = Args::read(argc, argv);
        if (help_showed)
            return -1;
        App app(args);
        app.run();
    }
    catch (const Exception& e) { return cout << "error: "  << e.what() << endl, 1; }
    catch (const exception& e) { return cout << "error: "  << e.what() << endl, 1; }
    catch(...) { return cout << "unknown exception" << endl, 1; }
    return 0;
*/

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
#endif
