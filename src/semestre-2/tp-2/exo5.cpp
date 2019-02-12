#include "lib/mainwindow.h"
#include <QApplication>
#include <time.h>

MainWindow* w = nullptr;

int isMandelbrot(QVector2D z, int n, QVector2D point){
	// recursiv Mandelbrot
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    w = new MandelbrotWindow(isMandelbrot);
    w->show();

    a.exec();
}



