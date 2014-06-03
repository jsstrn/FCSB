/*	
 *	Developed by Jesstern Rays a1674845
 *	Bachelor of Computer Science, University of Adelaide
 *	All Rights Reserved. Copyright (C) Jesstern Rays
 *	This work is licensed under CC BY-SA 4.0
 */

#ifndef REFEREE_H
#define REFEREE_H
 
/**************************************************/
/*               Class Declarations               */
/**************************************************/

class Referee
{
protected:
	/* member variables */
	int p1_score;
	int p2_score;
public:
	/* constructor */
	Referee();
	/* member functions */
	int getP1Score();
	int getP2Score();
	void judge(int, int);
}; // end Referee class

#endif