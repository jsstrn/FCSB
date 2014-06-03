/*	
 *	Developed by Jesstern Rays a1674845
 *	Bachelor of Computer Science, University of Adelaide
 *	All Rights Reserved. Copyright (C) Jesstern Rays
 *	This work is licensed under CC BY-SA 4.0
 */

#ifndef PLAYER_H
#define PLAYER_H
#include <string>
 
/**************************************************/
/*               Class Declarations               */
/**************************************************/

class Player
{
protected:
	/* member variables */
	std::string name;
public:
	/* constructor */
	Player(std::string);

	/* member functions */
	std::string getName();
	void setName(std::string);
	virtual int makeMove() = 0; // pure virtual function
}; // end Player class

#endif