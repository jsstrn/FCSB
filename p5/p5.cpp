/*	
 *	Developed by Faisal, Hafiz, and Jesstern
 *	Bachelor of Computer Science, University of Adelaide
 *	All Rights Reserved. Copyright (C) Jesstern Rays
 *	This work is licensed under CC BY-SA 4.0
 */


#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

/* * * * * Function Declarations * * * * */

/* Q1 — Find the length of a list  */
int listLength(Node*);

/* Q2 — Add a new node at the head of a list */
void listAddFront(Node* &, Node*);

/* Q3 — Find a node in a list */
Node* listFind(Node*, int);

/* Q4 — Add a new node at the tail of a list  */
void listAddBack(Node* &, Node*);

/* Q5 — Delete a node from a list */
Node* listDelete(Node* &, int);

/* Creates nodes in a list */
Node* listCreate(int);

/* Displays each node in a list */
void listDisplay(Node*);

/* Diplay length of a list */
void listLengthDisplay(int);

/* Display list details */
void listDisplayAll(Node* &);

/* * * * * * * Main Function * * * * * * */

int main()
{
	// Create 10 nodes in a list
	Node* firstNode = listCreate(10);
	listDisplay(firstNode);

	/* Q1 — Find the length of a list  */
	int length = listLength(firstNode);
	listLengthDisplay(length);
	
	/* Q2 — Add a new node at the head of a list */
	int input = 0;
	Node* frontNode = new Node();
	cout << "Enter a value to add to the front of the list: ";
	cin >> input;
	frontNode->data = input; // assign user input to node's data
	frontNode->next = NULL;  // next node is null
	listAddFront(firstNode, frontNode); // add node to list
	
	// Display list and its length
	listDisplayAll(firstNode);

	/* Q3 — Find a node in a list */
	cout << "Enter a value to search the list: ";
	cin >> input;
	Node* findNode = listFind(firstNode, input);
	if (findNode != NULL) {
		cout << "Node "<< findNode->data << " was found!" << endl;
	} else cout << "Node is not found!" << endl;
	cout << endl;

	/* Q4 — Add a new node at the tail of a list  */
	Node* backNode = new Node();
	cout << "Enter a value to add to the back of the list: ";
	cin >> input;
	backNode->data = input; // assign user input to node's data
	backNode->next = NULL;  // next node is null
	listAddBack(firstNode, backNode); // add node to back of list

	// Display list and its length
	listDisplayAll(firstNode);

	/* Q5 — Delete a node from a list */
	cout << "Enter a value to delete from the list: ";
	cin >> input;
	
	Node* deleteNode = listDelete(firstNode, input);
	if (deleteNode != NULL) {
		cout << "Node " << deleteNode->data << " is found and deleted!" << endl;
	} else cout << "Node is not in the list!" << endl;
	
	// Display list and its length
	listDisplayAll(firstNode);

	// delete pointers 
	delete frontNode, backNode, findNode, deleteNode;
	delete firstNode;
	return 0;
}

/* * * * * Function Definitions * * * * */

/* Q1 — Find the length of a list  */
int listLength(Node* firstNode) {
	Node* currentNode = firstNode;
	int count = 0;
	if (currentNode == NULL) return count; // empty list
	while (currentNode != NULL) {
		count++;
		currentNode = currentNode->next;
	}
	return count;
}

/* Q2 — Add a new node at the head of a list */
void listAddFront(Node* &firstNode, Node* newNode) {
	newNode->next = firstNode;
	firstNode = newNode;
}

/* Q3 — Find a node in a list */
Node* listFind(Node* firstNode, int value) {
	Node* currentNode = firstNode;
	while (currentNode != NULL) {
		if (currentNode->data == value) {
			return currentNode;
		}
		currentNode = currentNode->next;
	}
	return NULL;
}

/* Q4 — Add a new node at the tail of a list  */
void listAddBack(Node* &firstNode, Node* newNode) {
	Node* currentNode = firstNode;
	while (currentNode != NULL) {
		if (currentNode->next == NULL) {
			currentNode->next = newNode;
			newNode->next = NULL;
		}
		currentNode = currentNode->next;
	}
}

/* Q5 — Delete a node from a list */
Node* listDelete(Node* &firstNode, int value) {
	Node* currentNode = firstNode;
	Node* previousNode = firstNode;
	while (currentNode != NULL) {
		if (currentNode->data == value) {
			if (currentNode == firstNode) {
				delete firstNode;
				firstNode = firstNode->next;
			} else {
				previousNode->next = currentNode->next;
			}
			currentNode->next = NULL;
			return currentNode;
		}
		previousNode = currentNode;
		currentNode = currentNode->next;
	}
	return NULL; // value not found
}

/* Creates a predefined number of nodes in a list */
Node* listCreate(int size) {
	Node* newNode = NULL;
	for (int i = size - 1; i >= 0; --i) {
		Node* tmpNode = new Node();
		tmpNode->data = i;
		tmpNode->next = newNode;
		newNode = tmpNode;
	}
	return newNode;
}

/* Displays each node in a list */
void listDisplay(Node* firstNode) {
	Node* currentNode = firstNode;
	cout << endl;
	if (currentNode == NULL) cout << "List is empty!";
	else {
		cout << "List: ";
		while (currentNode != NULL) {
			cout << currentNode->data;
			if (currentNode->next != NULL) cout << " -> ";
			currentNode = currentNode->next;
		}
	}
	cout << endl;
}

/* Display the length of list */
void listLengthDisplay(int length) {
	cout << "There are " << length << " nodes in this list." << endl;
	cout << endl;
}

/* Display list details */
void listDisplayAll(Node* &firstNode) {
	listDisplay(firstNode);
	int length = listLength(firstNode);
	listLengthDisplay(length);
}
