/*	
 *	Developed by Jesstern Rays a1674845
 *	Bachelor of Computer Science, University of Adelaide
 *	All Rights Reserved. Copyright (C) Jesstern Rays
 *	This work is licensed under CC BY-SA 4.0
 */

#ifndef SEARCH_H
#define SEARCH_H

// include common c++ libraries
#include "lib.h"

/**************************************************/
/*               Class Declarations               */
/**************************************************/

class Search
{
protected:
	/* member variables */
	double var1;
public:
	/* constructor */
	Search(double);

	/* member functions */
	double getFunc();
	void setFunc(double);
	virtual double myFunc();

}; // end Search class

#endif