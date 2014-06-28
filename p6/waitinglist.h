/*	
 *	Developed by Jesstern Rays a1674845
 *	Bachelor of Computer Science, University of Adelaide
 *	All Rights Reserved. Copyright (C) Jesstern Rays
 *	This work is licensed under CC BY-SA 4.0
 */

#ifndef WAITINGLIST_H
#define WAITINGLIST_H
 
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
 * - Create new elements
 * - Insert elements based on a predefined order
 * - Read elements at a position
 * - Write/modify elements at a position
 * - Remove elements at a position
*/

/* WaitingList class */
class WaitingList 
{
private:
	/* member variables */
	Passenger* front;	// first passenger in the queue
	Passenger* back;	// last passenger in the queue
public:
	/* constructor */
	WaitingList();
	/* destructor */
	~WaitingList();

	/* member functions */

	// adds a new passenger
	Passenger* addPassenger(std::string, int, float);

	
	// inserts a new passenger to the waiting list
	void insertPassenger(Passenger*);

	bool isEmpty();
	
	void displayList();



}; // end WaitingList class

#endif