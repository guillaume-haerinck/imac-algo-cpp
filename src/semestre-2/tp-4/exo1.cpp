#include "lib/mainwindow.h"
#include <QApplication>
#include <time.h>

MainWindow* w = nullptr;

// Un tas, donc on renvoie element du haut
// https://www.fluentcpp.com/2018/03/13/heaps-priority-queues-stl-part-1/
int Heap::leftChild(int nodeIndex)
{
    return (nodeIndex + 1) * 2 - 1;
}

int Heap::rightChild(int nodeIndex)
{
    return (nodeIndex + 1) * 2;
}

void Heap::insertHeapNode(int heapSize, int value)
{

}

void Heap::heapify(int heapSize, int nodeIndex)
{

}

void Heap::buildHeap(Array& numbers)
{

}

void Heap::heapSort()
{

}

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow::instruction_duration = 50;
	w = new HeapWindow();
	w->show();

	return a.exec();
}
