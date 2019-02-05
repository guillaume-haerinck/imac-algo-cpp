#include "lib/mainwindow.h"
#include <QApplication>
#include <time.h>

MainWindow* w=nullptr;

void quickSort(Array& toSort){
	// quick sort
}

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	uint elementCount=10;
	w = new MainWindow(quickSort, elementCount);
	w->show();

	return a.exec();
}
