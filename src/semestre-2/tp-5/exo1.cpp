#include "lib/TP5.h"
#include <QApplication>
#include <time.h>

MainWindow* w = nullptr;

int HashTable::hash(std::string element)
{
	int hashValue = element[0];

	if (hashValue > size()) {
		return hashValue % size();
	} else {
		return hashValue;
	}
}

void HashTable::insert(std::string element)
{
	set(hash(element), element);
}

bool HashTable::contains(std::string element)
{
	int hashValue = hash(element);
	std::string data = get(hashValue);

	if (data == element) {
		return true;
	} else {
		return false;
	}
}

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow::instruction_duration = 50;
	w = new HashWindow();
	w->show();

	return a.exec();
}
