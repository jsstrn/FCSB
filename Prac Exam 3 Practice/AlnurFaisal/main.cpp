#include "contactlist.h"
#include <iostream>
#include <string>

using namespace std;

int menu();
void goodbye();

int main()
{
	contactlist* clist = new contactlist();
	int choice;
	int index;
	do
	{
		choice = menu();
		switch (choice) {
			case 1:
				// display the contact list
				clist->display();
				break;
			case 2:
				// create a new contact
				clist->createcontact();
				break;
			case 3:
				// insert a contact to an index location
				// prompt user for contact's index
				cout << "Enter contact's index: " << endl;
				cin >> index;
				clist->insertanywhere(index);
				break;
			case 4:
				// delete a contact from an index location
				// prompt user for contact's index
				cout << "Enter contact's index: " << endl;
				cin >> index;
				clist->deleteanywhere(index);
				break;
			case 0:
				goodbye();
				break;
			default:
				exit(EXIT_FAILURE);
		}
	} while (choice != 0);
	return 0;
}
int menu() {
	int choice = 0;
	int min_choice = 0;
	int max_choice = 4;
	cout << endl;
	cout << "* * * * * * * * * * * * * * * * * * * * * * *" << endl;
	cout << "1 - Display contact list" << endl;
	cout << "2 - Create a contact" << endl;
	cout << "3 - Insert a contact at a particular index" << endl;
	cout << "4 - Remove a contact from the contact list" << endl;
	cout << "0 - Exit the program" << endl;
	cout << "* * * * * * * * * * * * * * * * * * * * * * *" << endl;
	cout << "Enter selection: ";
	cin >> choice;
	cout << endl;
	if (cin.fail() || (choice < min_choice || choice > max_choice)) {
		cout << "You entered an invalid input. Program will now exit." << endl;
		exit(EXIT_FAILURE);
	}
	return choice;
}
void goodbye() {
	cout << "Goodbye!" << endl;
	exit(EXIT_SUCCESS);
}