/*	
 *	Developed by Jesstern Rays a1674845
 *	Bachelor of Computer Science, University of Adelaide
 *	All Rights Reserved. Copyright (C) Jesstern Rays
 *	This work is licensed under CC BY-SA 4.0
 */

#ifndef COMPUTER_H
#define COMPUTER_H
#include <string>
#include "Player.h"
 
/**************************************************/
/*               Class Declarations               */
/**************************************************/

class Computer : public Player
{
protected:
	/* member variables */
public:
	/* constructor */
	Computer(std::string);

	/* member functions */
	virtual int makeMove();

}; // end Computer subclass

#endif