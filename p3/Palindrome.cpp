/*	
 *	Developed by Faisal, Hafiz, and Jesstern
 *	Bachelor of Computer Science, University of Adelaide
 *	All Rights Reserved. Copyright (C) Jesstern Rays
 *	This work is licensed under CC BY-SA 4.0
 */

#include "Palindrome.h"

/*************************************************/
/*               Class Definitions               */
/*************************************************/

/* reverseString()
 * - takes a string and returns its reversed string
 * - base case: if length of string is 1, return string
 * - else recursively take the string from the second character onwards
 * - and add the first character back to itself 
 * 
 * isPalindrome()
 * - takes two strings and compares them 
 * - if the two strings are the same it outputs 'yes'
 * - else it outputs 'no' to the console via cout
 */

/* constructor */
Palindrome::Palindrome() { }

/* member functions */
std::string Palindrome::reverseString(std::string str){
    if (str.length() == 1) return str;
    return reverseString(str.substr(1, str.length() - 1)) + str.at(0);
}

void Palindrome::isPalindrome(std::string str, std::string rstr) {
	if (str == rstr) cout << " yes ";
	else cout << " no ";
}





