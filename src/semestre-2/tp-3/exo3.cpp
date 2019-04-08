#include "lib/mainwindow.h"
#include <QApplication>
#include <time.h>
#include <queue>
#include <stack>
#include <unordered_set>

MainWindow* w = nullptr;
using std::size_t;

struct BinarySearchTree : public BinaryTree
{
    BinarySearchTree(int value = 0) : BinaryTree(value) {}
	virtual ~BinarySearchTree() {}

    void insertNumber(int value) {
		Node* iterator = this;
		Node* lastMatch = NULL;

		while (iterator != NULL) {
			lastMatch = iterator;
			if (value < iterator->value) {
				iterator = iterator->left;
			} else {
				iterator = iterator->right;
			}
		}

		if (lastMatch == NULL) { // The tree is empty
			lastMatch = createNode(value);
		} else if (value < lastMatch->value) {
			lastMatch->left = createNode(value);
		} else {
			lastMatch->right = createNode(value);
		}
    }

    uint height() {
		uint height = 0;
		std::queue<Node*> q;
		Node* root = this;
		q.push(root);

		while (true) {
			int nodeCount = q.size();
			if (nodeCount == 0) {
				return height;
			}
			height++;

			// Dequeue all nodes of current level 
			// and Enqueue all nodes of next level 
			while (nodeCount > 0) {
				Node* node = q.front();
				q.pop();
				if (node->left != NULL) {
					q.push(node->left);
				}
				if (node->right != NULL) {
					q.push(node->right);
				}
				nodeCount--;
			}
		}
	}

    uint nodesCount() {
		uint count = 1;
		std::queue<Node*> q;
		Node* root = this;
		q.push(root);

		while (!q.empty()) {
			Node* temp = q.front();
			q.pop();
			if (temp->left != NULL) {
				q.push(temp->left);
				count++;
			}	
			if (temp->right != NULL) {
				q.push(temp->right);
				count++;
			}
		}
		return count;
	}

    bool isLeaf() const {
		if (this->left == NULL && this->right == NULL) {
			return true;
		} else {
			return false;
		}
	}

    void allLeaves(Node* leaves[], uint& leavesCount) {
		std::queue<Node*> q;
		Node* root = this;
		q.push(root);

		while (!q.empty()) {
			Node* temp = q.front();
			q.pop();
			
			if (temp->left != NULL) {
				q.push(temp->left);
			}
			if (temp->right != NULL) {
				q.push(temp->right);
			}
			if (temp->left == NULL && temp->right == NULL) {
				leaves[leavesCount] = this;
				leavesCount++;
			}
		}
	}

    void inorderTravel(Node* nodes[], uint& nodesCount) {
		std::stack<Node*> s;
		Node* curr = this;

		while (curr != NULL || s.empty() == false) {
			/* Reach the left most Node of the
			   curr Node */
			while (curr != NULL) {
				/* place pointer to a tree node on
				   the stack before traversing
				  the node's left subtree */
				s.push(curr);
				curr = curr->left;
			}

			/* Current must be NULL at this point */
			curr = s.top();
			s.pop();

			nodes[nodesCount] = curr;
			nodesCount++;

			/* we have visited the node and its
			   left subtree.  Now, it's right
			   subtree's turn */
			curr = curr->right;
		}
	}

	// FIXME
    void preorderTravel(Node* nodes[], uint& nodesCount) {
		std::stack<Node*> s;
		s.push(this);

		/* Pop all items one by one. Do following for every popped item
		   a) add it to the results
		   b) push its right child
		   c) push its left child
		Note that right child is pushed first so that left is processed first */
		while (s.empty() == false) {
			// Pop the top item from stack and print it
			Node* curr = s.top();
			nodes[nodesCount] = curr;
			nodesCount++;
			s.pop();

			// Push right and left children of the popped node to stack 
			if (curr->right) {
				s.push(curr->right);
			}
			if (curr->left) {
				s.push(curr->left);
			}
		}
	}

	// FIXME
    void postorderTravel(Node* nodes[], uint& nodesCount) {
		Node* temp = this;
		std::unordered_set<Node*> visited;

		while (temp && visited.find(temp) == visited.end()) {
			if (temp->left && visited.find(temp->left) == visited.end()) {
				// Visited left subtree 
				temp = temp->left;
			} else if (temp->right && visited.find(temp->right) == visited.end()) {
				// Visited right subtree 
				temp = temp->right;
			} else {
				nodes[nodesCount] = temp;
				nodesCount++;
				visited.insert(temp);
				temp = this;
			}
		}
		return;
	}

    Node* find(int value) {
		std::queue<Node*> q;
		Node* root = this;
		q.push(root);

		while (!q.empty()) {
			Node* temp = q.front();
			q.pop();
			if (temp->left != NULL) {
				q.push(temp->left);
			}
			if (temp->right != NULL) {
				q.push(temp->right);
			}
			if (temp->value == value) {
				return temp;
			}
		}
		return nullptr; // Not Found
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
