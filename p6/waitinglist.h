/*	
 *	Developed by Faisal, Hafiz, Jesstern
 *	Bachelor of Computer Science, University of Adelaide
 *	All Rights Reserved. Copyright (C) Jesstern Rays
 *	This work is licensed under CC BY-SA 4.0
 */

#ifndef WAITINGLIST_H
#define WAITINGLIST_H
#include <string>
using namespace std;
 
/**************************************************/
/*               Class Declarations               */
/**************************************************/

/* Passenger struct */
struct Passenger {
	std::string name;	// passenger's name
	int priority;		// passenger's priority
	float airfare;		// passenger's airfare
	Passenger* next;	// points to the next passenger
};

/*
 * Abstract Data Type (ADT) operations:
 * - Insert elements based on priority and airfare
 * - Read elements at a position
 * - Write/modify elements at a position
 * - Remove elements at a position
*/

/* WaitingList class */
class WaitingList 
{
private:
	/* member variables */
	Passenger* front; // first passenger in the waiting list
public:
	/* constructor */
	WaitingList();
	/* destructor */
	~WaitingList();
	/* member functions */
	// insert a new passenger into the list (prompt for passenger details)
	void insertPassenger();
	// insert a new passenger into the list (passenger details provided)
	void insertPassenger(string, int, float);
	// removes a passenger from the list
	void removePassenger(int);
	// displays one passenger in the list
	void displayPassenger(int);	
	// displays all passengers in the list
	void displayList();

}; // end WaitingList class

#endif