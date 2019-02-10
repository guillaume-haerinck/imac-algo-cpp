#include "lib/mainwindow.h"
#include <QApplication>
#include <time.h>

MainWindow* w = nullptr;

void insertionSort(Array& toSort){
   // Array& secondArray = w->newArray(toSort.size());
   int key, j;
   for (uint i = 1; i < toSort.size(); i++) {
       key = toSort.get(i);
       j = i - 1;

       while (j >= 0 && toSort.get(j) > key) {
           toSort.set(j + 1, toSort.get(j));
           j = j - 1;
       }
       toSort.set(j + 1, key);
   }
}

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	uint elementCount=20;
	w = new MainWindow(insertionSort, elementCount);
	w->show();

	return a.exec();
}
