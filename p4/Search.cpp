/*	
 *	Developed by Jesstern Rays a1674845
 *	Bachelor of Computer Science, University of Adelaide
 *	All Rights Reserved. Copyright (C) Jesstern Rays
 *	This work is licensed under CC BY-SA 4.0
 */

#include "Search.h"

/*************************************************/
/*               Class Definitions               */
/*************************************************/

/* constructor */
Search::Search(double v1) { var1 = v1; }

/* member functions */
double Search::getFunc() { return var1; }

void Search::setFunc(double v1) { var1 = v1; }

double Search::myFunc() { return var1; }
