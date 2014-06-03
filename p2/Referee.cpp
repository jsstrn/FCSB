/*	
 *	Developed by Jesstern Rays a1674845
 *	Bachelor of Computer Science, University of Adelaide
 *	All Rights Reserved. Copyright (C) Jesstern Rays
 *	This work is licensed under CC BY-SA 4.0
 */

#include <iostream>
#include <cmath>
#include "Referee.h"
using namespace std;

/*************************************************/
/*               Class Definitions               */
/*************************************************/

/* constructor */
Referee::Referee() {
	p1_score = 0;
	p2_score = 0;
}

/* member functions */
int Referee::getP1Score() {
	return p1_score;
}
int Referee::getP2Score() {
	return p2_score;
}
void Referee::judge(int p1, int p2) {
	// function returns 0 for draw, -1 for lose, and 1 for win
	if (p1 == p2) {
		cout << endl << "It's a draw!" << endl; // Result is a draw
	} else if (p1 + 2 == p2 || p1 - 1 == p2) {
		p1_score = p1_score + 1;
		cout << endl << "You won!" << endl; // Human wins
	} else {
		p2_score = p2_score + 1;
		cout << endl << "You lost!" << endl; // Human loses
	}
}