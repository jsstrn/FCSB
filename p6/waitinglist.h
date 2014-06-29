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
	void insertPassenger(std::string, int, float);
	void editPassenger(int);
	void removePassenger(int);
	void displayPassenger(int);
	void displayList();
	Passenger* getPassenger(int);

}; // end WaitingList class

#endif