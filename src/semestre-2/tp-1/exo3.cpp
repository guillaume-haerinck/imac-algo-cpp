#include "lib/mainwindow.h"
#include <QApplication>
#include <time.h>


void bubbleSort(Array& toSort){
   for (uint i = 0; i < toSort.size() - 1; i++) {
       for (uint j = 0; j < toSort.size() - i - 1; j++) {
           if (toSort.get(j) > toSort.get(j + 1)) {
               toSort.swap(j, j + 1);
           }
       }
   }
}

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	uint elementCount=20;
    MainWindow w(bubbleSort, elementCount);
	w.show();

	return a.exec();
}
