#include <iostream>

struct binNode
{
	int data;
	binNode* left;
	binNode* right;
};

class BinarySearchTree
{
private:
	// member variables
public:
	// constructor
	BinarySearchTree();
	// destructor
	~BinarySearchTree();

	// member functions
	void traverseInOrder(binNode*);
	void addToTree(binNode* &, int);
};