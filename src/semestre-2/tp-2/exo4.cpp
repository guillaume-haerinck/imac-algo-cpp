#include "lib/mainwindow.h"
#include <QApplication>
#include <time.h>
#define return w->popFunctionCall(evens.toString()); return;

MainWindow* w = nullptr;

void allEvens(Array& evens, Array& array, int evenSize, int arraySize){

    NOTIFY_START("allEvens", evens, array, evenSize, arraySize) // notify the call of this function to the MainWindow

	// recursiv evens search
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	MainWindow::instruction_duration = 200;
    w = new AllEvensWindow(allEvens);
    w->show();

    a.exec();
}



