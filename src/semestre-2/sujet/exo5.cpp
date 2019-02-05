#include "lib/mainwindow.h"
#include <QApplication>
#include <time.h>

MainWindow* w=nullptr;

void merge(Array& first, Array& second, Array& result);

void splitAndMerge(Array& origin, Array& first, Array& second)
{
	// split and remerge
}

void merge(Array& first, Array& second, Array& result)
{
	// merge
}

void mergeSort(Array& toSort)
{
	// merge sort
}

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	uint elementCount=10;
	w = new MainWindow(mergeSort, elementCount);
	w->show();

	return a.exec();
}
