#include "lib/mainwindow.h"
#include <QApplication>
#include <time.h>

MainWindow* w = nullptr;
using std::size_t;

// Iterative
int binarySearch(Array& array, int toSearch)
{
    int l = 0;
    int r = array.size() - 1;
    while (l <= r) {
            int m = l + (r - l) / 2;

            // Check if x is present at mid
            if (array.get(m) == toSearch)
                return m;

            // If x greater, ignore left half
            if (array.get(m) < toSearch)
                l = m + 1;

            // If x is smaller, ignore right half
            else
                r = m - 1;
        }

        // if we reach here, then element was
        // not present
        return -1;
}

// Recursive TODO
/*
int binarySearch(Array& array, int toSearch)
{

}
*/

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow::instruction_duration = 500;
	w = new BinarySearchWindow(binarySearch);
	w->show();

	return a.exec();
}
