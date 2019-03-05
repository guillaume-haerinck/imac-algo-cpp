#include "lib/mainwindow.h"
#include <QApplication>
#include <time.h>

MainWindow* w=nullptr;

void recursivQuickSort(Array& toSort, int size)
{
	Array& lowerArray = w->newArray(size);
	Array& greaterArray= w->newArray(size);

	// Recursiv Quick sort
}

void quickSort(Array& toSort){
	recursivQuickSort(toSort, toSort.size());
}

/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot
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
*/

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index
void quickSort(Array& toSort, int low = 0, int high = 9)
{
    if (low < high)
    {
        // pi is partitioning index, arr[p] is nowat right place
        int pi = partition(toSort, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(toSort, low, pi - 1);
        quickSort(toSort, pi + 1, high);
    }
}
        */

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	Array::instruction_duration = 200;
	w = new MainWindow(quickSort, 15);
    w->show();

    return a.exec();
}
