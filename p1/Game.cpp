/*	
 *	Developed by Jesstern Rays a1674845
 *	Bachelor of Computer Science, University of Adelaide
 *	All Rights Reserved. Copyright (C) Jesstern Rays
 *	This work is licensed under CC BY-SA 4.0
 */

#include <iostream>
#include <iomanip>
#include "Game.h"
using namespace std;

/*************************************************/
/*               Class Definitions               */
/*************************************************/

/* constructor */
Game::Game(std::string t, int q, double p) { 
	title = t;
	qty = q;
	price = p; 
}

/* member functions */
std::string Game::getTitle() {
	return title;
}
void Game::setTitle(std::string t) {
	title = t;
}
double Game::getPrice() {
	return price;
}
void Game::setPrice(double p) {
	price = p;
}
int Game::getQty() {
	return qty;
}
void Game::setQty(int q) {
	qty = q;
}
double Game::calcTotalPrice() {
	return price * qty;
}
void Game::printItem() {
	cout << title << "\t" << "$" << price << "\t";
	cout << qty << "\t" << "$" << calcTotalPrice() << endl;
}

