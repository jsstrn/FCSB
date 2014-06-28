/*	
 *	Developed by Faisal, Hafiz, Jesstern
 *	Bachelor of Computer Science, University of Adelaide
 *	All Rights Reserved. Copyright (C) Jesstern Rays
 *	This work is licensed under CC BY-SA 4.0
 */

#include <iostream>
#include <string>
#include <ctime>
#include "waitinglist.h"
using namespace std;

/*********************************************/
/*               Main Function               */
/*********************************************/

int menu();
void goodbye();

int main()
{
	// random seed
	srand(time(NULL));
	// initialize a new waiting list
	WaitingList* wList = new WaitingList();
	// an array of names
	string arrNames[] = {"Milton", "Kerry", "Elliott", "Omar", "Bran", "Andy", "Rupert", "Tory", "Loren", "Alex"};
	// generate 10 passengers and insert them into the waiting list
	for (int i = 0; i < 10; ++i) {
		// generate random number between 1 and 7
		int randPriority = rand() % 7 + 1;
		// generate random price between $1000.00 and $9999.99
		float randAirfare = (rand() % 999999 + 100000) / 100.0;
		// insert into the waiting list
		wList->insertPassenger(arrNames[i], randPriority, randAirfare);
	}
	// display the waiting list
	wList->displayList();
	
	// initialize variables for passenger
	string name; int priority; float airfare;

	int choice;
	do {
		choice = menu();
		switch (choice) {
			case 1:
				// display the waiting list
				wList->displayList();
				break;
			case 2:
				// insert a new passenger into the waiting list
				cout << "Enter the passenger's details below: " << endl;
				cout << "    Name: ";
				cin >> name;
				cout << "Priority: ";
				cin >> priority;
				cout << " Airfare: ";
				cin >> airfare;
				wList->insertPassenger(name, priority, airfare);
				break;
			case 0:
				goodbye();
			default:
				exit(EXIT_FAILURE);
		}
	} while (choice != 0);

	return 0;
} // end main function 
int menu() {
	int choice = 0;
	int min_choice = 0;
	int max_choice = 2;
	cout << "1 - Display the waiting list" << endl;
	cout << "2 - Add a passenger to the waiting list" << endl;
	cout << "0 - Exit the program" << endl;
	cout << ">> ";
	cin >> choice;
	if (cin.fail() || (choice < min_choice || choice > max_choice)) {
		cout << "You entered an invalid input. Program will now exit." << endl;
		exit(EXIT_FAILURE);
	}
	return choice;
}
void goodbye() {
	cout << "Goodbye!" << endl;
	cout << "Developed by Faisal, Hafiz, and Jesstern." << endl;
	exit(EXIT_SUCCESS);
}