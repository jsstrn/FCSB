/*	
 *	Developed by Mohamed Hafiz a1674846
 *	Bachelor of Computer Science, University of AdelaIDe
 */

#include <iostream>
using namespace std;

/*********************************************/
/*               Main Function               */
/*********************************************/

struct contact
{
	string name;
	int age;
	contact* next;
};

contact* front = NULL;

void addContact(string, int);
void insertContactName(string, int);
void insertContactAge(string, int);
void printContacts();
void deleteContact(string);
void deleteList();
void exitprog();

int main()
{
	int select, age;
	string name, choose;

	while(true)
	{
		cout << "\nPlease press 1 to add a contact." << endl;
		cout << "Please press 2 for inserting a contact by order of name." << endl;
		cout << "Please press 3 for inserting a contact by order of age." << endl;
		cout << "Please press 4 to print the contacts list." << endl;
		cout << "Please press 5 to delete a contact." << endl;
		cout << "Please press 6 to delete all contacts in the list." << endl;
		cout << "Please press 7 to exit." << endl;
		cin >> select;
	
	switch (select)
	{
		case 1:
				cout << "Please enter contact's name: ";
				cin >> name;
				cout << "Please enter contact's age: ";
				cin >> age;
				addContact(name,age);
				break;
		case 2:
				cout << "Please enter contact's name: ";
				cin >> name;
				cout << "Please enter contact's age: ";
				cin >> age;
				insertContactName(name,age);
				break;
		case 3:
				cout << "Please enter contact's name: ";
				cin >> name;
				cout << "Please enter contact's age: ";
				cin >> age;
				insertContactAge(name,age);
				break;
		case 4:
				printContacts();
				break;
		case 5:
				if(front==NULL) 
				{	
					printContacts();
					break;
				}
				else
				{
					cout << "Please enter contact's name to be deleted: ";
					cin >> name;
					cout << "Are you sure you want to delete all contacts? (y/n)";
					cin >> choose;
					if(choose=="y" || choose=="Y")
					{
						deleteContact(name);
						break;
					}
					else if(choose=="n" || choose=="N")
					{
						break;
					}
					else 
					{
						cout << "You have entered an invalid input!" << endl;
						break;
					}
				}
		case 6:
				if(front==NULL) 
				{	
					printContacts();
					break;
				}
				else
				{
					cout << "Are you sure you want to delete all contacts? (y/n)";
					cin >> choose;
					if(choose=="y" || choose=="Y")
					{
						deleteList();
						break;
					}
					else if(choose=="n" || choose=="N")
					{
						break;
					}
					else 
					{
						cout << "You have entered an invalid input!" << endl;
						break;
					}
				}
				
		case 7:
				cout << "Goodbye!" << endl;
				exitprog();
		default:
				cout << "You have entered an invalid input!" << endl;
				break;
		

	}
	}
	return 0;
}

void addContact(string name, int age)
{
	contact* newContact = new contact;
	newContact->name = name;
	newContact->age = age;

	if (front == NULL)
	{
		front = newContact;
	}	
	else
	{
		newContact->next = front;
		front = newContact;
	}

}

void insertContactName(string name, int age){

	contact* newContact = new contact;
	newContact->name = name;
	newContact->age = age;

	//if contacts list is empty
	if(front==NULL)
	{
		front = newContact;
	}
	else
	{
		contact* cur = front;
		contact* prev = NULL;

		//Traverse list to find the correct place
		while(cur!=NULL)
		{
			if(cur->name >= newContact->name)
			{
				break;
			}
			else
			{
				prev = cur;
				cur = cur->next;
			}
		}
		//insert at the front(not empty)
		if(cur == front)
		{
			newContact->next = front;
			front = newContact;
		}
		//insert beyond front(not empty)
		else
		{
			newContact->next = cur;
			prev->next = newContact;
		}
	}
}

void insertContactAge(string name, int age){
	contact* newContact = new contact;
	newContact->name = name;
	newContact->age = age;

	//if list is empty
	if(front == NULL)
	{
		front = newContact;
	}
	else
	{
		contact* cur = front;
		contact* prev = NULL;
		//Traverse list to find the right place
		while(cur!=NULL)
		{
			if(cur->age >= newContact->age)
			{
				break;
			}
			else
			{
				prev = cur;
				cur = cur->next;
			}
		}
		//insert at front(not empty)
		if(cur==front)
		{
			newContact->next = front;
			front = newContact;
		}
		//insert beyond front(not empty)
		else
		{
			newContact->next = cur;
			prev->next = newContact;
		}
	}
}

void printContacts(){
	
	contact* temp = front;

	if (temp==NULL) cout << "List is currently empty!" << endl;
	
	while(temp!=NULL)
	{
		cout << temp->name << ", " << temp->age;
		if(temp->next!=NULL) cout << "->";
		else cout << endl;
		temp = temp->next;
	}
}

void deleteContact(string name){

	// //if list is empty
	// if(front == NULL)
	// {
	// 	printContacts();
	// }
	// else
	// {
		contact* cur = front;
		contact* prev = NULL;
		//Traverse list to search for the contact
		while(cur!=NULL)
		{
			if(cur->name==name)
			{
				break;
			}
			else
			{
				prev = cur;
				cur = cur->next;
			}
		}
		//if name not found in the list
		if(cur==NULL)
		{
			cout << "Contact: " << name << " cannot be found in the list!" << endl;
		}
		else
		{
			//if the contact is found at the front
			if(cur == front)
			{
				front = front->next;
			}
			//if the contact is found beyond front
			else
			{
				prev->next = cur->next;
			}
			delete cur;
		}
}

void deleteList(){
	contact* tempfront = front, * temp;
	while (tempfront!=NULL)
	{
		temp = tempfront->next;
		delete tempfront;
		tempfront = temp;
	}
	front = NULL;
	cout << "Contacts have been deleted!" << endl;
}

void exitprog(){
	exit(0);
}
