#include "BinarySearchTree.h"
#include <iostream>
using namespace std;

/* main function */
int main()
{
	// instantiate a binary search tree object
	BinarySearchTree* bst = new BinarySearchTree();

	// root of binary tree
	binNode* root = new binNode();
	root = NULL;

	// create values in an array
	int arr[9] = {15, 9, 2, 3, 4, 1, 21, 9, 17};

	// add values to binary search tree
	for (int i = 0; i < 9; ++i) {
		bst->addToTree(root, arr[i]);
	}

	// print binary search tree
	cout << "Binary Search Tree: ";
	bst->traverseInOrder(root);

	// delete pointer
	delete root;

	return 0;
} // end main function