#include "BinarySearchTree.h"
#include <iostream>
using namespace std;

BinarySearchTree::BinarySearchTree() { }

BinarySearchTree::~BinarySearchTree() { }

void BinarySearchTree::traverseInOrder(binNode* root) {
	if (root != NULL) {
		// call left node
		traverseInOrder(root->left);
		// print node's data
		cout << root->data << ", ";
		// call right node
		traverseInOrder(root->right);
	}
} // end traverseInOrder function

void BinarySearchTree::addToTree(binNode* &root, int value) {
	// when tree is empty
	if (root == NULL) {
		binNode* newNode = new binNode();
		newNode->data = value;
		root = newNode;
	}
	// when tree is not empty
	else {
		// value is smaller
		if (root->data > value) {
			// add to left side
			addToTree(root->left, value);
		}
		// value is larger
		if (root->data < value) {
			// add to right side
			addToTree(root->right, value);
		}
	}
} // end addToTree function