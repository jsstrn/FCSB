/*	
 *	Developed by Jesstern Rays a1674845
 *	Bachelor of Computer Science, University of Adelaide
 *	All Rights Reserved. Copyright (C) Jesstern Rays
 *	This work is licensed under CC BY-SA 4.0
 */

#ifndef GAME_H
#define GAME_H
#include <string>
 
/**************************************************/
/*               Class Declarations               */
/**************************************************/

class Game
{
protected:
	/* member variables */
	std::string title;
	int qty;
	double price;
public:
	/* constructor */
	Game(std::string t, int q, double p);

	/* member functions */
	std::string getTitle();
	int getQty();
	double getPrice();

	void setTitle(std::string);
	void setQty(int);
	void setPrice(double);

	// virtual and pure virtual functions
	virtual double calcTotalPrice();
	virtual void printItem();

}; // end base class

#endif