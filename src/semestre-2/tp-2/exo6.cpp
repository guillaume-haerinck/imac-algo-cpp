#include "../tp-1/lib/mainwindow.h"
#include <QApplication>
#include <time.h>

void quickSort(Array& toSort) {
    // TODO
}

int main(int argc, char *argv[]) {
	QApplication a(argc, argv);
    MainWindow w(quickSort, 10);
	w.show();

	return a.exec();
}
