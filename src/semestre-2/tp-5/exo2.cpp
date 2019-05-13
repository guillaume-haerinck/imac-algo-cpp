#include <QApplication>
#include <time.h>
#include <stdio.h>

using std::size_t;
using std::string;

int hash(string key)
{
	return 0;
}

struct Node
{
	Node(string key, int value)
	{
		this->key = key;
		this->value = value;
		this->key_hash = hash(key);

		this->left = this->right = nullptr;
	}

	void insertNode(Node* node)
	{

	}

	void insertNode(string key, int value)
	{
		this->insertNode(new Node(key, value));
	}

	string key;
	int key_hash;

	int value;

	Node* left;
	Node* right;
};

struct Map
{
	Map() {
		this->root = nullptr;
	}

	void insert(string key, int value)
	{

	}

	int get(string key)
	{
		return 0;
	}

	Node* root;
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
