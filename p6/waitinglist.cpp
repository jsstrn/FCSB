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
	back = NULL;
}
/* destructor */
WaitingList::~WaitingList() {
	while (front != NULL) {
		delete front;
		front = front->next;
	}
}
/* member functions */
Passenger* WaitingList::addPassenger(std::string name, int priority, float airfare) {
	Passenger* newPassenger = new Passenger();
	newPassenger->name = name;
	newPassenger->priority = priority;
	newPassenger->airfare = airfare;
	newPassenger->next = NULL;
	return newPassenger;
}

void WaitingList::insertPassenger(Passenger* newPass) {
	Passenger* curPass = front;	// pointer for current passenger
	Passenger* prePass = front;	// pointer for previous passenger
	if (isEmpty()) {
		front = back = newPass;
		back->next = NULL;
	}
	while (curPass != NULL) {
		/********************************************
		 * Conditions:
		 * - newPass-priority > curPass->priority
		 *   - insert at the back
		 *   - insert after curPass
		 * - newPass-priority < curPass->priority
		 *   - insert at the front
		 *   - insert before curPass
		 * - newPass-priority == curPass->priority
		 *   - newPass->airfare > curPass->airfare
		 *     - insert at the front
		 *     - insert before curPass
		 *   - newPass->airfare < curPass->airfare
		 *     - insert at the back
		 *     - insert after curPass
		 ********************************************/

		if (curPass->priority > newPass->priority) {
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
		if (curPass->priority < newPass->priority) {
			if (curPass->next == NULL) {
				// insert at the back
				cout << "c" << endl;
				curPass->next = newPass;
				// newPass->next = NULL;
				back = newPass;
				return;
			} else {
				// insert in between
				cout << "d" << endl;
				newPass->next = curPass->next;
				curPass->next = newPass;
				return;
			}
		}
		if (curPass->priority == newPass->priority) {
			if (curPass->airfare < newPass->airfare) {
				// insert before current passenger
			} else if (curPass->airfare >= newPass->airfare) {
				// insert after current passenger
			}
		}
		prePass = curPass;		 // increment prePass to curPass
		curPass = curPass->next; // increment curPass to next
	}
}

bool WaitingList::isEmpty() {
	// returns true if list is empty, returns false otherwise
	if (front == NULL) return true;
	return false;
}

void WaitingList::displayList() {
	// displays the contents of the list
	Passenger* currentPassenger = front;
	if (currentPassenger == NULL) cout << "The waiting list is empty!" << endl;
	cout << "#\tAirfare\t\tName" << endl;
	while (currentPassenger != NULL) {
		cout << currentPassenger->priority << "\t";
		printf("$%.2f\t", currentPassenger->airfare);
		cout << currentPassenger->name << endl;
		currentPassenger = currentPassenger->next;
	}
}

