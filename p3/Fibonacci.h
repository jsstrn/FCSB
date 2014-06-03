/*	
 *	Developed by Faisal, Hafiz, and Jesstern
 *	Bachelor of Computer Science, University of Adelaide
 *	All Rights Reserved. Copyright (C) Jesstern Rays
 *	This work is licensed under CC BY-SA 4.0
 */

#ifndef FIBONACCI_H
#define FIBONACCI_H
#include <iostream>
using namespace std;
 
/**************************************************/
/*               Class Declarations               */
/**************************************************/

/* A Fibonacci class has 1 member function:
 * - fib() to compute recursively the Nth position 
 *   of the Fibonacci series
 */

class Fibonacci
{
protected:
	/* member variables */
	int count;
public:
	/* constructor */
	Fibonacci();

	/* member functions */
	unsigned int fib(unsigned int);
	int getCount();

}; // end Fibonacci class

#endif