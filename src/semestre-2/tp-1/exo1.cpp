#include "lib/mainwindow.h"
#include <QApplication>
#include <time.h>

// https://en.wikipedia.org/wiki/Insertion_sort
void insertionSort(Array& toSort) {
    for (uint i = 1; i < toSort.size(); i++) {
        uint j = i;
        while (j > 0 && (toSort.get(j - 1) > toSort.get(j))) {
            toSort.swap(j - 1, j);
            j -= 1;
        }
    }
}

int main(int argc, char *argv[]) {
	QApplication a(argc, argv);
	MainWindow w(insertionSort, 10);
	w.show();

	return a.exec();
}
