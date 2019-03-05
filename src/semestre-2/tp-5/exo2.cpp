#include "lib/mainwindow.h"
#include <QApplication>
#include <time.h>
#include <stdio.h>

MainWindow* w = nullptr;
using std::size_t;
using std::string;

struct Map
{
	Map() {}

	int hash(string s)
	{
		return 0;
	}

	void insert(string key, int value)
	{

	}

	int get(string key)
	{
		return 0;
	}

	// int* key_array;
	// int* value_array;

	// or

	// Node* root;
};


int main(int argc, char *argv[])
{
	Map map;
	map.insert("Laura", 9);
	map.insert("Pierre", 5);
	map.insert("Eva", 14);
	map.insert("Yoann", 10);
	map.insert("Emilie", 15);

	printf("map[\"Laura\"]=%d\n", map.get("Laura"));
	printf("map[\"Yoann\"]=%d\n", map.get("Yoann"));

	return 0;
}
