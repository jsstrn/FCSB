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
	else {
		// traverse list
		Passenger* curPass = front;	// pointer for current passenger
		Passenger* prePass = NULL;	// pointer for previous passenger
		while (curPass != NULL) {
			if (curPass->priority > newPass->priority)
				break;
			else if (curPass->priority == newPass->priority && curPass->airfare < newPass->airfare)
				break;
			else {
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

void WaitingList::editPassenger(int index) {
	int count = 1;
	Passenger* currentPassenger = front;
	while (currentPassenger != NULL) {
		if (count == index) break;
		++count;
		currentPassenger = currentPassenger->next;
	}

}

void WaitingList::removePassenger(int index) {
	int count = 1;
	Passenger* currentPassenger = front;
	Passenger* previousPassenger = NULL;
	while (currentPassenger != NULL) {
		if (count == index) break;
		++count;
		previousPassenger = currentPassenger;
		currentPassenger = currentPassenger->next;
	}
	if (currentPassenger == NULL) {
		cout << "You entered an invalid index number." << endl;
	} else {
		// remove passenger at front of the list
		if (currentPassenger == front)
			front = front->next;
		// remove passenger after front of the list
		else
			previousPassenger->next = currentPassenger->next;
		// delete pointer
		delete currentPassenger;
	}
}

Passenger* WaitingList::getPassenger(int index) {
	int count = 1;
	Passenger* currentPassenger = front;
	while (currentPassenger != NULL) {
		if (count == index) break;
		++count;
		currentPassenger = currentPassenger->next;
	}
	return currentPassenger;
}

void WaitingList::displayPassenger(int index) {
	Passenger* thisPassenger = WaitingList::getPassenger(index);
	cout << "-\t-\t-------\t\t----" << endl;
	cout << "#\tP\tAirfare\t\tName" << endl;
	cout << "-\t-\t-------\t\t----" << endl;
	cout << index << "\t";
	cout << thisPassenger->priority << "\t";
	printf("$%.2f\t", thisPassenger->airfare);
	cout << thisPassenger->name << endl;
	cout << "-\t-\t-------\t\t----" << endl;
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
	cout << "-\t-\t-------\t\t----" << endl;
}



