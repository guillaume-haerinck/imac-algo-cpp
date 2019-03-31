#include "lib/mainwindow.h"
#include <QApplication>
#include <time.h>
#define return w->popFunctionCall(evens.toString()); return;

MainWindow* w = nullptr;

void allEvens(Array& evens, Array& array, int evenSize, int arraySize){
    NOTIFY_START("allEvens", evens, array, evenSize, arraySize)

    int n = arraySize - 1;
    if (n >= 0) {
        if ((array[n]) % 2 == 0){
            evens[evenSize] = array[n];
        }
        allEvens(evens, array, evenSize + 1, arraySize - 1);
    }
}

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
	MainWindow::instruction_duration = 200;
    w = new AllEvensWindow(allEvens);
    w->show();

    a.exec();
}



