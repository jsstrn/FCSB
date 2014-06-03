/*	
 *	Developed by Faisal, Hafiz, and Jesstern
 *	Bachelor of Computer Science, University of Adelaide
 *	All Rights Reserved. Copyright (C) Jesstern Rays
 *	This work is licensed under CC BY-SA 4.0
 */

#ifndef PALINDROME_H
#define PALINDROME_H
#include <iostream>
#include <string>
using namespace std;
 
/**************************************************/
/*               Class Declarations               */
/**************************************************/

/* A Palindrome class has two member functions.
 * - reverseString() to reverse strings
 * - isPalindrome() to check if two strings are palindromes
 */

class Palindrome {
protected:
	/* member variables */
public:
	/* constructor */
	Palindrome();

	/* member functions */
	string reverseString(string);
	void isPalindrome(std::string, std::string);

}; // end base class

#endif