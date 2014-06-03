/*	
 *	Developed by Faisal, Hafiz, and Jesstern
 *	Bachelor of Computer Science, University of Adelaide
 *	All Rights Reserved. Copyright (C) Jesstern Rays
 *	This work is licensed under CC BY-SA 4.0
 */

#include "Fibonacci.h"

/*************************************************/
/*               Class Definitions               */
/*************************************************/

/* fib()
 * - takes an unsigned int value and returns an unsigned int value
 * - if n is less than 3 and returns 1
 * - else recursively call itself for n -1 and n - 2
 * - return the sum of the two values
 */

/* constructor */
Fibonacci::Fibonacci() { }

/* member functions */
unsigned int Fibonacci::fib(unsigned int n) {
	// if n is less than 3 return 1
	if (n < 3) return 1;
	count++;
	// else perform recursive calls, sum them and return value
	int x = fib(n - 1) + fib(n - 2);
	return x;
}
int Fibonacci::getCount() {
  return count;
}
