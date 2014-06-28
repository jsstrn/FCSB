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

	wList->insertPassenger(1);
	wList->insertPassenger(2);
	wList->insertPassenger(3);
	wList->insertPassenger(1);
	wList->insertPassenger(2);
	wList->insertPassenger(3);

	Passenger* p1 = new Passenger();
	p1->priority = 1;
	p1->airfare = 2.5;
	p1->name = "Ali";
	wList->insertPassenger(p1);
	// wList->insertPassenger("Bran", 2, 4000.0);
	// wList->insertPassenger("Catelyn", 3, 3000.0);
	// wList->insertPassenger("Daenerys", 4, 6000.0);
	// wList->insertPassenger("Eddard", 5, 7000.0);
	// wList->insertPassenger("Cersei", 6, 8000.0);

	wList->displayList();

	return 0;
} // end main function 