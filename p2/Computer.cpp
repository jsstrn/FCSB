/*	
 *	Developed by Jesstern Rays a1674845
 *	Bachelor of Computer Science, University of Adelaide
 *	All Rights Reserved. Copyright (C) Jesstern Rays
 *	This work is licensed under CC BY-SA 4.0
 */

#include <iostream>
#include <string>
#include "Player.h"
#include "Computer.h"
using namespace std;

/*************************************************/
/*               Class Definitions               */
/*************************************************/

/* constructor */
Computer::Computer(std::string n) : Player(n) { name = n; }

/* member functions */
int Computer::makeMove() {
	// returns a psuedo random number between 1 and 3
	int aiMove = rand() % 3 + 1;

	if (aiMove == 1) {
		cout << Computer::getName() << " played Rock." << endl;
	} else if (aiMove == 2) {
		cout << Computer::getName() << " played Paper." << endl;
	} else {
		cout << Computer::getName() << " played Scissors." << endl;
	}

	return aiMove;
}
