#include "lib/mainwindow.h"
#include <QApplication>
#include <time.h>

MainWindow* w = nullptr;
using std::size_t;

void binarySearchAll(Array& array, int toSearch, int& indexMin, int& indexMax) {
    int l = 0;
    int r = array.size() - 1;
    bool bExist = false;
    while (l <= r) {
        int m = l + (r - l) / 2;

        // Check if x is present at mid
        if (array.get(m) == toSearch)
            bExist = true;

        // If x greater, ignore left half
        if (array.get(m) < toSearch)
            l = m + 1;

        // If x is smaller, ignore right half
        else
            r = m - 1;
    }

    if (indexMax > array.size() - 1) { indexMax = array.size() - 1; }
    if (indexMin < 0) { indexMin = 0; }

    if (bExist) {
        array.set(indexMin, toSearch);
        array.set(indexMax, toSearch);
    } else {
        // if we reach here, then element was
        // not present
        array.set(indexMin, -1);
        array.set(indexMax, -1);
    }
}

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow::instruction_duration = 500;
	w = new BinarySearchAllWindow(binarySearchAll);
	w->show();

	return a.exec();
}
