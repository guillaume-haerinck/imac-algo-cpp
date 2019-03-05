#include "lib/TP5.h"
#include <QApplication>
#include <time.h>

MainWindow* w = nullptr;

int HashTable::hash(std::string element)
{
	return 0;
}

void HashTable::insert(std::string element)
{
	return;
}

bool HashTable::contains(std::string element)
{
	return false;
}

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow::instruction_duration = 50;
	w = new HashWindow();
	w->show();

	return a.exec();
}
