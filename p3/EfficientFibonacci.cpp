/*
 *	Developed by Faisal, Hafiz, and Jesstern
 *	Bachelor of Computer Science, University of Adelaide
 *	All Rights Reserved. Copyright (C) Jesstern Rays
 *	This work is licensed under CC BY-SA 4.0
 */

#include "EfficientFibonacci.h"

/*************************************************/
/*               Class Definitions               */
/*************************************************/

 /* fib()
  * - takes an unsigned int value and returns an unsigned int value
  * - checks if value of fib(n) is found in table[n] and returns value in table[n]
  * - else it calls itself to find the value and stores it in x
  * - append the value x into the table and then return x
  *
  * How it works:
  * - Table is initialized with the 0th, 1st, and 2nd terms in the Fibonacci series
  * - When the function is called it will first check if the table[n] has any values
  *   else it will recursively call itself until it hits its base case, 
  *   when table[1] or table[2] will return 1
  * - The summed value is then stored in a variable and appended to the table
  * - The subsequent time the same functin call is made it will simply return the 
  *   value already stored in the table. Efficiency achieved
  */

/* constructor */
EfficientFibonacci::EfficientFibonacci() : table(20) { }
/* member functions */
unsigned int EfficientFibonacci::fib(unsigned int n) {
  if (n == 1 || n == 2) return 1;
  if (table[n]!=0) return table[n];
  // append summed value into table
  count++;
  table[n] = fib(n - 1) + fib(n- 2);
  // return the summed value
  return table[n];
}
int EfficientFibonacci::getCount() {
  return count;
}
