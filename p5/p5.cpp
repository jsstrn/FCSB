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

/* * * * * * * Main Function * * * * * * */

int main()
{
	// create 10 nodes
	Node* firstNode = listCreate(10);
	listDisplay(firstNode);

	/* Q1 — Find the length of a list  */
	int length = listLength(firstNode);
	cout << "There are " << length << " nodes in this list." << endl;
	
	/* Q2 — Add a new node at the head of a list */
	Node* frontNode = new Node();
	frontNode->data = 11;
	frontNode->next = NULL;
	listAddFront(firstNode, frontNode);
	listDisplay(firstNode);

	/* Q3 — Find a node in a list */
	Node* findNode = listFind(firstNode, 5);
	listDisplay(findNode);

	/* Q4 — Add a new node at the tail of a list  */
	Node* backNode = new Node();
	backNode->data = 99;
	backNode->next = NULL;
	listAddBack(firstNode, backNode);
	listDisplay(firstNode);

	/* Q5 — Delete a node from a list */
	listDelete(firstNode, 3);
	listDisplay(firstNode);

	delete firstNode, frontNode, backNode, findNode;
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
			currentNode->next = NULL;
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
	if (currentNode == NULL) cout << "List is empty!";
	while (currentNode != NULL) {
		cout << currentNode->data;
		if (currentNode->next != NULL) cout << " -> ";
		currentNode = currentNode->next;
	}
	cout << endl;
}

/* Q1 — Find the length of a list Write a function listLength, with signature

int listLength(node* head)


that traverses the list, counts the nodes, and returns the result to the
caller. Test your function on some lists that you have created, to verify that
it is working.

Q2 — Add a new node at the head of a list Write a function
listAddFront with signature void listAddFront(node* &head, node* newNode): The
function takes a new node, newNode (previously created with a call to the
newNode function), and adds it to the front of the list whose head is given by
head. Notice that the head parameter is passed by reference (&head). This is
vital, or your function will not be able to change the value of head that is
passed to it. Test your function carefully! Try adding to an empty list, and a
list with items already in it. To see if it is working, you can use listPrint.


Q3 — Find a node in a list Write a function listFind with signature:

node* listFind(node* head, int d)


The function searches a list until it finds a node that contains the value d.
If such a node is found, a pointer to it is returned to the caller. If a node
that contains d cant be found, the function returns NULL. Test your function
carefully! Try finding a value in an empty list, a list with items already in
it, and a list that does not contain the target value. 

Q4 — Add a new node at the tail of a list Write a function listAddBack with signature void
listAddBack(node* &head, node* newNode): The function takes a new node,
newNode (previously created with a call to the newN ode function), and adds it
to the back of the list (after the last node in the list) whose head is given
by head. Test your function carefully! Try adding to an empty list, and a list
with items already in it.

Q5 — Delete a node from a list


Write a function listDelete with signature:

node* listDelete(node* &head, int d)


The function searches a list until it finds a node that contains the value d.
If such a node is found, the node is unhooked from the list (so that the node
no longer appears in the list), and its pointer is returned to the caller. If
a node that contains d cant be found, return NULL. Once again, test your
function carefully! Try deleting from an empty list, a list with items already
in it, and a list that does not contain the target value.  */
