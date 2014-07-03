#include "contactlist.h"
#include <iostream>
#include <string>

using namespace std;

contactlist::contactlist()
{
	head = NULL;
}
contactlist::~contactlist()
{
	while(head != NULL)
	{
		delete head;
		head = head->next;
	}
	cout << "Removing all contacts from memory." << endl;
}
void contactlist::createcontact()
{
	int node_count;
	int counter = 0;
	std::string store_name;
	std::string store_phone;
	cout << "Please specify how many contacts you want to create ?" << endl;
	cin >> node_count;
	for (int i=node_count; i>0; i--)
	{
		cout << "Please enter the contact name: " << endl;
		cin >> store_name;
		cout << "Please enter the contact number: " << endl;
		cin >> store_phone;
		counter++;
		cout << counter << " contact created." << endl;
		cout << endl;
		insertcontactlist(store_name, store_phone);
	}


}

void contactlist::insertcontactlist(std::string store_name, std::string store_phone)
{
	// this will insert nodes to the front of list
	// will create a condition to measure whether head is null
	// if null will add to head else will use comparison to measure and add
	contact* temp = new contact();
	contact* currpass = head;
	contact* prepass = NULL;
	temp->name = store_name;
	temp->phone = store_phone;
	if(currpass == NULL)
	{
		head = temp;
	}
	else
	{
		while(currpass != NULL)
		{
			if(currpass->name >= temp->name)
			{
				break;
			}
			else
			{
				prepass = currpass;
				currpass = currpass->next;
			}
		}
		if(currpass == head)
		{
			temp->next = head;
			head = temp;
		}
		else
		{
			temp->next = currpass;
			prepass->next = temp;
		}
	}
	
	
}

void contactlist::insertanywhere(int index)
{
	std::string store_name;
	std::string store_phone;
	contact* currpass = head;
	contact* prepass = NULL;
	if(currpass == NULL)
	{
		cout << "No list created. Not possible to insert at index location." << endl;
	}
	else
	{
		contact* temp = new contact();
		cout << "Please enter the contact name: " << endl;
		cin >> store_name;
		cout << "Please enter the contact number: " << endl;
		cin >> store_phone;
		temp->name = store_name;
		temp->phone = store_phone;
		for(int i=1; i!=index; i++)
		{
			prepass = currpass;
			currpass = currpass->next;

			if(currpass == NULL)
			{
				break;
			}
		}
		if(currpass == head)
		{
			temp->next = head;
			head = temp;
		}
		else if(currpass == NULL)
		{
			cout << "Index does not exist. Cannot insert at index location." << endl;
		}
		else
		{
			temp->next = currpass;
			prepass->next = temp;
		}
	}
	

}
void contactlist::deleteanywhere(int index)
{
	contact* currpass = head;
	contact* prepass = NULL;
	if(currpass == NULL)
	{
		cout << "No list created. Not possible to delete from index location." << endl;
	}
	else
	{
		for(int i=1; i<index; i++)
		{
			prepass = currpass;
			currpass = currpass->next;
			if(currpass == NULL)
			{ 
				break;
			}
		}
		if(currpass == NULL)
		{
			cout << "Index does not exist. Cannot delete from index location." << endl;
		}
		if(currpass == head)
		{
			head = head->next;
		}
		else
		{
			prepass->next = currpass->next;
		}
		delete currpass;
	}
	
}
void contactlist::display()
{
	contact* currpass = head;
	if(currpass == NULL)
	{
		cout << "Contact List Empty" << endl;
	}
	else
	{
		int index = 1;
		cout << endl;
		cout << "-\t------------\t\t--------------" << endl;
		cout << "#\tContact Name\t\tContact Number" << endl;
		cout << "-\t------------\t\t--------------" << endl;
		while(currpass != NULL)
		{
			cout << index << "\t";
			cout << currpass->name << "\t\t\t";
			cout << currpass->phone << endl;
			index++;
			currpass = currpass->next;
		}
	}

}



