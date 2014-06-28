/*	
 *	Developed by Jesstern Rays a1674845
 *	Bachelor of Computer Science, University of Adelaide
 *	All Rights Reserved. Copyright (C) Jesstern Rays
 *	This work is licensed under CC BY-SA 4.0
 */

#include <iostream>
#include "waitinglist.h"
using namespace std;

/*************************************************/
/*               Class Definitions               */
/*************************************************/

/* constructor */
WaitingList::WaitingList() {
	front = NULL;
}
/* destructor */
WaitingList::~WaitingList() {
	while (front != NULL) {
		delete front;
		front = front->next;
	}
}
/* member functions */

void WaitingList::insertPassenger(std::string name, int priority, float airfare) {
	// create a new passenger
	Passenger* newPass = new Passenger();
	newPass->priority = priority;
	newPass->name = name;
	newPass->airfare = airfare;

	/* (1) empty list */
	if (front == NULL) {
		// newPass->next = newPass;
		newPass->next = NULL;
		front = newPass;
	}

<<<<<<< HEAD
		if (curPass->priority < newPass->priority) {
			if (curPass == front) {
				// insert at the front
				cout << "a" << endl;
				newPass->next = front;
				front = newPass;
				return;
			} else {
				// insert in between
				cout << "b" << endl;
				prePass->next = newPass;
				newPass->next = curPass;
				return;
			}
		}
		if (curPass->priority > newPass->priority) {
			if (curPass->next == NULL) {
				// insert at the back
				cout << "c" << endl;
				curPass->next = newPass;
				// newPass->next = NULL;
				back = newPass;
				return;
=======
	else {
		// traverse list
		Passenger* curPass = front;	// pointer for current passenger
		Passenger* prePass = NULL;	// pointer for previous passenger
		while (curPass != NULL) {
			if (curPass->priority >= newPass->priority) {
				break;
>>>>>>> FETCH_HEAD
			} else {
				prePass = curPass;
				curPass = curPass->next;
			}
		} // end while loop

		/* (2) insert before front of list */
		if (curPass == front) {
			newPass->next = front;
			front = newPass;
		}
		/* (3) insert anywhere after front of list */
		else {
			newPass->next = curPass;
			prePass->next = newPass;
		}
	} // end else statement
}

bool WaitingList::isEmpty() {
	// returns true if list is empty, returns false otherwise
	if (front == NULL) return true;
	return false;
}

void WaitingList::displayList() {
	// displays the contents of the list
	Passenger* currentPassenger = front;
	if (currentPassenger == NULL) {
		cout << "The waiting list is empty!" << endl;
		return;
	}
	int index = 1;
	cout << "-\t-\t-------\t\t----" << endl;
	cout << "#\tP\tAirfare\t\tName" << endl;
	cout << "-\t-\t-------\t\t----" << endl;
	while (currentPassenger != NULL) {
		cout << index << "\t";
		cout << currentPassenger->priority << "\t";
		printf("$%.2f\t", currentPassenger->airfare);
		cout << currentPassenger->name << endl;
		++index;
		currentPassenger = currentPassenger->next;
	}
}

