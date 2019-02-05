#include "lib/mainwindow.h"
#include <QApplication>
#include <time.h>

void insertionSort(Array& toSort){

}

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow w(insertionSort, 10);
	w.show();

	return a.exec();
}
