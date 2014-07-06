#ifndef BINTREE_H
#define BINTREE_H
#include <iostream>
using namespace std;

struct binnode
{
	int value;
	binnode* left;
	binnode* right;
};

class btree
{
	public:
		btree();
		~btree();
		void createBtree(int number, binnode* leaf);
		void destroyBtree(binnode* leaf);
		void create(int number);
		void display(binnode*);
		void display2();
	private:	
		binnode* root;
		

};
#endif