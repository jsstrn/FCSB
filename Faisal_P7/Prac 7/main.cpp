#include <iostream>
#include "bintree.h"

using namespace std;

int main()
{
	btree* newtree = new btree();

	//create root for newtree
	newtree->create(43);

	//create children of root
	newtree->create(21);
	newtree->create(24);
	newtree->create(56);
	newtree->create(64);
	newtree->create(12);
	//display all nodes on trees
	newtree->display2();



}

