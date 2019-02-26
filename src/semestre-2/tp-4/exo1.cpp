#include "lib/mainwindow.h"
#include <QApplication>
#include <time.h>

MainWindow* w = nullptr;

int Heap::leftChild(int nodeIndex)
{
	return 0;
}

int Heap::rightChild(int nodeIndex)
{
	return 0;
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
