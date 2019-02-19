#include "lib/mainwindow.h"
#include <QApplication>
#include <time.h>

MainWindow* w = nullptr;
using std::size_t;

struct BinarySearchTree : public BinaryTree
{
	BinarySearchTree(int value=0) : BinaryTree(value) {}
	virtual ~BinarySearchTree() {}

	void insertNumber(int value)
	{	}

	uint height() const
	{
		uint height = 1;
		return height;
	}

	uint nodesCount() const
	{
		uint count = 1;
		return count;
	}

	bool isLeaf() const
	{
		return false;
	}

	void allLeaves(Node* leaves[], uint& leavesCount)
	{

	}

	void inorderTravel(Node* nodes[], uint& nodesCount)
	{

	}

	void preorderTravel(Node* nodes[], uint& nodesCount)
	{

	}

	void postorderTravel(Node* nodes[], uint& nodesCount)
	{

	}

	Node* find(int value)
	{

	}
};

Node* createNode(int value) {
	return new BinarySearchTree(value);
}

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow::instruction_duration = 200;
	BinarySearchTree bst;
	w = new BinarySearchTreeWindow(bst);
	w->show();

	return a.exec();
}
