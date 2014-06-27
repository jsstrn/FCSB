/*	
 *	Developed by Jesstern Rays a1674845
 *	Bachelor of Computer Science, University of Adelaide
 *	All Rights Reserved. Copyright (C) Jesstern Rays
 *	This work is licensed under CC BY-SA 4.0
 */

#include <iostream>
#include <string>
#include <vector>
#include "waitinglist.h"
using namespace std;

/*********************************************/
/*               Main Function               */
/*********************************************/

int main()
{
	WaitingList* wList = new WaitingList();
	Passenger* p1 = wList->addPassenger("Aegon", 1, 5000.0);
	Passenger* p2 = wList->addPassenger("Bran", 2, 4000.0);
	Passenger* p3 = wList->addPassenger("Catelyn", 3, 3000.0);
	Passenger* p4 = wList->addPassenger("Daenerys", 4, 6000.0);
	Passenger* p5 = wList->addPassenger("Eddard", 5, 7000.0);
	Passenger* p6 = wList->addPassenger("Cersei", 6, 8000.0);

	wList->insertPassenger(p1);
	wList->insertPassenger(p2);
	wList->insertPassenger(p3);
	wList->insertPassenger(p4);
	wList->insertPassenger(p5);
	wList->insertPassenger(p6);
	wList->displayList();

	return 0;
} // end main function 