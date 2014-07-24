#include <iostream>
#include "Node.h"
#include "CircularQueue.h"

using namespace std;

CircularQueue::CircularQueue()
{
	head = NULL;
	size = 0;
}
CircularQueue::~CircularQueue()
{
	int counter = 0;
	Node* currpass = head;
	Node* nexpass = NULL;
	while(counter < size)
	{
		nexpass = currpass->next;
		delete currpass;
		currpass = nexpass;
		counter++;
	}
}
bool CircularQueue::isEmpty()
{
	Node* currpass = head;
	if(currpass == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void CircularQueue::add(int element, int position)
{
	Node* currpass = head;
	Node* prepass = NULL;
	bool answer;
	answer = isEmpty();

	if(answer == true)
	{
		cout << "You have not created a link list." << endl;
		cout << "Creating a link list." << endl;
		cout << "What is your size for the list: " << endl;
		cin >> size;
		cout << endl;
		int counter = 0;
		for(int i=size; i > 0; i--)
		{
			Node* newnode = new Node;
			cout << "Enter a numeric value: ";
			cin >> newnode->value;
			cout << endl;
			newnode->next = head;
			head = newnode;
			counter++;
			cout << counter << " node created." << endl;
			cout << endl;
		}
		currpass = head;
		for(int i=0; i < size; i++)
		{
			prepass = currpass;
			currpass = currpass->next;
		}
		prepass->next = head;

	}
	else
	{
		for(int i=1; i < position; i++)
		{
			if(currpass == NULL) break;
			prepass = currpass;
			currpass = currpass->next;
		}
		if(currpass == NULL)
		{
			cout << "Position Not Found!" << endl;
			cout << endl;
		}
		else if(currpass == head)
		{
			Node* newnode = new Node;
			newnode->value = element;
			newnode->next = currpass;
			head = newnode;
			currpass = head;
			for(int i=0; i < size; i++)
			{
				prepass = currpass;
				currpass = currpass->next;
			}
			prepass->next = head;
			size++;

			cout << "Node created in " << position;
			cout << " position." << endl;
			cout << endl;
		}
		else
		{
			Node* newnode = new Node;
			newnode->value = element;
			newnode->next = currpass;
			prepass->next = newnode;
			size++;

			cout << "Node created in " << position;
			cout << " position." << endl;
			cout << endl;
		}
	}
}
void CircularQueue::display()
{
	Node* currpass = head;
	for(int i=0; i < size; i++)
	{
		cout << currpass->value << " ,";
		currpass = currpass->next;
	}
	cout << endl;
}
int CircularQueue::operator-(int position)
{
	Node* currpass = head;
	Node* prepass = NULL;
	Node* nextpass = NULL;
	bool answer;
	answer = isEmpty();

	if(answer == true)
	{
		cout << "No deletion can be made on an empty list.";
		cout << endl;
	}
	else
	{
		for(int i=1; i < position; i++)
		{
			if(currpass == NULL) break;
			
			prepass = currpass;
			currpass = currpass->next;
			nextpass = currpass->next;
		}
		if(currpass == NULL)
		{
			cout << "Position Not Found!" << endl;
			cout << endl;
		}
		else if(currpass == head)
		{
			head = currpass->next;
			delete currpass;
			currpass = head;
			for(int i=0; i < size; i++)
			{
				prepass = currpass;
				currpass = currpass->next;
			}
			prepass->next = head;
			size--;


		}
		else
		{
			prepass->next = nextpass;
			delete currpass;
			size--;
		}
		cout << "Node deleted from input position." << endl;
		cout << endl;

	}
	

}
