#include "lib/mainwindow.h"
#include <QApplication>
#include <time.h>

MainWindow* w=nullptr;

void insertionSort(Array& toSort){
	// sort by insertion
}

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	uint elementCount=20;
	w = new MainWindow(insertionSort, elementCount);
	w->show();

	return a.exec();
}
