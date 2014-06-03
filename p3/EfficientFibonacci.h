/*	
 *	Developed by Faisal, Hafiz, and Jesstern
 *	Bachelor of Computer Science, University of Adelaide
 *	All Rights Reserved. Copyright (C) Jesstern Rays
 *	This work is licensed under CC BY-SA 4.0
 */

#ifndef EFFICIENTFIBONACCI_H
#define EFFICIENTFIBONACCI_H
#include <vector>
#include <iostream>
using namespace std;
 
/**************************************************/
/*               Class Declarations               */
/**************************************************/

/* An EfficientFibonacci class has 1 member variable
 * and 1 member function:
 * - a vector of type int to store the Fibonacci series
 * - fib() to efficiently compute the Nth position in the 
 *   Fibonacci series using a recursive function and storing 
 *   the the values in the vector
 */

class EfficientFibonacci
{
protected:
	/* member variables */
	vector<int> table;
	int count;
public:
	/* constructor */
	EfficientFibonacci();

	/* member functions */
	unsigned int fib(unsigned int);
	int getCount();

}; // end EfficientFibonacci class

#endif