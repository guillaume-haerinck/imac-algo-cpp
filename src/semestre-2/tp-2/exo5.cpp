#include "lib/mainwindow.h"
#include <QApplication>
#include <time.h>

MainWindow* w = nullptr;

int isMandelbrot(QVector2D z, int n, QVector2D point){
	// recursiv Mandelbrot

    if(n>=0){
        if(z.length()<=2 ){
           float x = z.x()*z.x()-z.y()*z.y()+point.x();
           float y = 2*z.x()*z.y()+point.y();
           z.setX(x);
           z.setY(y);
           return isMandelbrot(z,n-1,point);
        }
        else{
            return n;
        }
    }
    return n;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    w = new MandelbrotWindow(isMandelbrot);
    w->show();

    a.exec();
}
