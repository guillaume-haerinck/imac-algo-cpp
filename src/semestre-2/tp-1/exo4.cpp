#include "lib/mainwindow.h"
#include <QApplication>
#include <time.h>

MainWindow* w=nullptr;

/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
int partition (Array& toSort, int low, int high)
{
    int pivot = toSort[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (toSort[j] <= pivot)
        {
            i++;    // increment index of smaller element
            toSort.swap(i, j);
        }
    }
    toSort.swap(i + 1, high);
    return (i + 1);
}

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(Array& toSort, int low = 0, int high = 9)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(toSort, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(toSort, low, pi - 1);
        quickSort(toSort, pi + 1, high);
    }
}

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	uint elementCount=10;
	w = new MainWindow(quickSort, elementCount);
	w->show();

	return a.exec();
}
