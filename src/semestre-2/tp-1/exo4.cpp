#include "lib/mainwindow.h"
#include <QApplication>
#include <time.h>

MainWindow* w = nullptr;

int partition(Array& toSort, int begin, int end) {
    int pivot = toSort[end];
    int i = begin;
    for (int j=begin; j<end; j++) {
        if (toSort[j] < pivot){
            toSort.swap(i, j);
            i=i+1;
        }
    }
    toSort.swap(i, end);
    return i;
}

void quickSortAux(Array& toSort, int begin, int end){
    if (begin < end) {
        int p = partition(toSort, begin, end);
        quickSortAux(toSort, begin, p-1);
        quickSortAux(toSort, p+1, end);
    }
}

void quickSort(Array& toSort) {
    quickSortAux(toSort, 0, toSort.size() - 1);
}

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	uint elementCount=10;
	w = new MainWindow(quickSort, elementCount);
	w->show();

	return a.exec();
}
