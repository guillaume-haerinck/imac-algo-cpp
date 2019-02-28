#include "lib/mainwindow.h"
#include <QApplication>
#include <time.h>

MainWindow* w = nullptr;
using std::size_t;

struct BinarySearchTree : public BinaryTree
{
    BinarySearchTree(int value = 0) : BinaryTree(value) {}
	virtual ~BinarySearchTree() {}

    // https://www.geeksforgeeks.org/binary-search-tree-set-1-search-and-insertion/
    void insertNumber(int value) {
        if (r >= l) {
            int mid = l + (r - l) / 2;

            // If the element is present at the middle
            // itself
            if (arr[mid] == x)
                right = createNode(value);

            // If element is smaller than mid, then
            // it can only be present in left subarray
            if (arr[mid] > x)
                return binarySearch(arr, l, mid - 1, x);

            // Else the element can only be present
            // in right subarray
            return binarySearch(arr, mid + 1, r, x);
        }

        // We reach here when element is not
        // present in array
        if (value >= this->value) {
            right = createNode(value);
        } else {
            left = createNode(value);
        }
    }

    uint height() const {
		uint height = 1;
		return height;
	}

    uint nodesCount() const {
		uint count = 1;
		return count;
	}

    bool isLeaf() const {
		return false;
	}

    void allLeaves(Node* leaves[], uint& leavesCount) {

	}

    void inorderTravel(Node* nodes[], uint& nodesCount) {

	}

    void preorderTravel(Node* nodes[], uint& nodesCount) {

	}

    void postorderTravel(Node* nodes[], uint& nodesCount) {

	}

    Node* find(int value) {

	}
};

Node* createNode(int value) {
	return new BinarySearchTree(value);
}

int main(int argc, char *argv[]) {
	QApplication a(argc, argv);
	MainWindow::instruction_duration = 200;
	BinarySearchTree bst;
	w = new BinarySearchTreeWindow(bst);
	w->show();

	return a.exec();
}
