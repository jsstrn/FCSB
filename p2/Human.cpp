/*	
 *	Developed by Jesstern Rays a1674845
 *	Bachelor of Computer Science, University of Adelaide
 *	All Rights Reserved. Copyright (C) Jesstern Rays
 *	This work is licensed under CC BY-SA 4.0
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include "Player.h"
#include "Human.h"
using namespace std;

/*************************************************/
/*               Class Definitions               */
/*************************************************/

/* constructor */
Human::Human(std::string n) : Player(n) { name = n; }

/* member functions */
int Human::makeMove() {
	cout << endl;
	cout << "[1] - Rock" << endl;
	cout << "[2] - Paper" << endl;
	cout << "[3] - Scissors" << endl;

	cout << endl<< "Select a number between 1 and 3: ";
	int my_move;
	cin >> my_move;

	if (my_move == 1) {
		cout << endl << "You played Rock. ";
	} else if (my_move == 2) {
		cout << endl << "You played Paper. ";
	} else if (my_move == 3) {
		cout << endl << "You played Scissors. ";
	} else {
		cout << "You entered an invalid input. ";
		cout << "Program will now terminate. Goodbye." << endl;
		exit(EXIT_FAILURE); 
	}
	return my_move;
}
