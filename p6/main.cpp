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
		int priority = rand() % 7 + 1; // generate random number from 1 to 7
		float airfare = (rand() % 999999 + 100000) / 100.0;
		wList->insertPassenger(arrNames[i], priority, airfare);
	}
	// display the waiting list
	wList->displayList();

	return 0;
} // end main function 