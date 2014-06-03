/*	
 *	Developed by Jesstern Rays a1674845
 *	Bachelor of Computer Science, University of Adelaide
 *	All Rights Reserved. Copyright (C) Jesstern Rays
 *	This work is licensed under CC BY-SA 4.0
 */

#ifndef HUMAN_H
#define HUMAN_H
#include <string>
#include "Player.h"
 
/**************************************************/
/*               Class Declarations               */
/**************************************************/

class Human : public Player
{
protected:
	/* member variables */
public:
	/* constructor */
	Human(std::string);

	/* member functions */
	virtual int makeMove();
}; // end subclass

#endif