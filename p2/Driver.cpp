/*	
 *	Developed by Jesstern Rays a1674845
 *	Bachelor of Computer Science, University of Adelaide
 *	All Rights Reserved. Copyright (C) Jesstern Rays
 *	This work is licensed under CC BY-SA 4.0
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"
using namespace std;

/*********************************************/
/*               Main Function               */
/*********************************************/

/* function declaration */

void welcome();
void play();

/* main function */

int main() {
	welcome(); // welcome screen
	play();	
	return 0;
} // end main function 

/* all other functions */

void play() {
	// initialize human player
	Human *player1 = new Human("Jesstern");
	// initialize computer player
	Computer *player2 = new Computer("Mac OS X");
	// initialize referee
	Referee *theReferee = new Referee();
	
	// seed random number with current time
	srand(time(0));

	char play_again;
	do {
		// start game
		cout << endl << "Let's play!" << endl;
		int err;
		theReferee->judge( player1->makeMove(), player2->makeMove() );
		// print out score
		cout << endl << player1->getName() << " " << theReferee->getP1Score();
		cout << " - " << theReferee->getP2Score() << " " << player2->getName();
		cout << endl;

		// play again?
		cout << endl << "Would you like to play again? [y/n] ";
		cin >> play_again;
	} while (play_again == 'y' || play_again == 'Y');

	// say goodbye
	cout << endl << "Thanks for playing! Goodbye!" << endl;
	cout << "Developed by Faisal, Hafiz, and Jesstern." << endl << endl;
	
} // end play function

void welcome() {
	cout << endl << endl << endl;
	cout << "< * < * < * < * < Rock | Paper | Scissors > * > * > * > * >" << endl;
	cout << "< * < * < * < * <       Version 2.0       > * > * > * > * >" << endl;
	cout << endl << "Do you have what it takes to beat the bot?" << endl;
} // end welcome function



