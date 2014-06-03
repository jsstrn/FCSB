/*	
 *	Developed by Jesstern Rays a1674845
 *	Bachelor of Computer Science, University of Adelaide
 *	All Rights Reserved. Copyright (C) Jesstern Rays
 *	This work is licensed under CC BY-SA 4.0
 */

#include <iostream>
#include <string>
#include "Player.h"
using namespace std;

/*************************************************/
/*               Class Definitions               */
/*************************************************/

/* constructor */
Player::Player(std::string n) { name = n; }

/* member functions */
std::string Player::getName() { return name; }

void Player::setName(std::string n) { name = n; }