#include <iostream>
#include "bintree.h"

using namespace std;

btree::btree()
{
	root = NULL;
}
btree::~btree()
{
	destroyBtree(root);
}
void btree::createBtree(int number, binnode* leaf)
{
	//tranverse left if number is less than parent number
	if(number < leaf->value)
	{
		if(leaf->left != NULL)
		{
			createBtree(number, leaf->left);
		}
		else
		{
			leaf->left=new binnode;
      		leaf->left->value=number;
      		leaf->left->left=NULL;   
      		leaf->left->right=NULL;
		}
	}
	// transverse right if number is more than parent number
	else if(number > leaf->value)
	{
		if(leaf->right!=NULL)
		{
			createBtree(number, leaf->right);
		}
      	
    	else
    	{
      		leaf->right=new binnode;
      		leaf->right->value=number;
      		leaf->right->left=NULL;  
      		leaf->right->right=NULL;
		}
	}
}
void btree::destroyBtree(binnode* leaf)
{
	// will delete all nodes from trees
	if(leaf!=NULL)
  	{
    	destroyBtree(leaf->left);
    	destroyBtree(leaf->right);
    	delete leaf;
	}
}
void btree::create(int number)
{
	//create new binary tree nodes
	if(root!=NULL)
    createBtree(number, root);
  	else
  	{
    	root=new binnode;
    	root->value=number;
    	root->left=NULL;
    	root->right=NULL;
  	}
}
void btree::display2()
{
	// display all nodes in binary tree
	display(root);
}
void btree::display(binnode* leaf)
{
	if(leaf == NULL) return;
	else
	{
		display(leaf->left);
		cout<<leaf->value << ", ";
		display(leaf->right);
	}
}

