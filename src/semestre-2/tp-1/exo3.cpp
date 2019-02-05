#include "lib/mainwindow.h"
#include <QApplication>
#include <time.h>


void bubbleSort(Array& toSort){
	// bubble sort
}

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	uint elementCount=20;
	MainWindow w(insertionSort, elementCount);
	w.show();

	return a.exec();
}
