#include "lib/mainwindow.h"
#include <QApplication>
#include <time.h>
#define return(return_value) int result=return_value; w->popFunctionCall(result); return result;

MainWindow* w = nullptr;


int search(int value, Array& toSort, int size){

    NOTIFY_START("search", toSort, size) // notify the call of this function to the MainWindow

	// recursiv search
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow::instruction_duration = 200;
    w = new SearchWindow(search);
    w->show();

    a.exec();
}



