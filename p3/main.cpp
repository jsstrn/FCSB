/*	
 *	Developed by Faisal, Hafiz, and Jesstern
 *	Bachelor of Computer Science, University of Adelaide
 *	All Rights Reserved. Copyright (C) Jesstern Rays
 *	This work is licensed under CC BY-SA 4.0
 */

#include "Palindrome.h"
#include "EfficientFibonacci.h"
#include "Fibonacci.h"

/*********************************************/
/*               Main Function               */
/*********************************************/

int main()
{
	// initialize objects
	Palindrome *pally = new Palindrome();
	Fibonacci *fibby = new Fibonacci();
	EfficientFibonacci *effy = new EfficientFibonacci();

	/* input */
	cout << "Enter a word followed by a positive integer." << endl;
	string word;
	int integer;
	cin >> word;
	cin >> integer;

	/* output */
	string rstr = pally->reverseString(word);
	cout << rstr;
	pally->isPalindrome(word, rstr);

	/* error handling */
	if (cin.fail())
		cout << "ERROR" <<endl;
	else
		cout << effy->fib(integer) << endl;
	
	/* detailed output */
	cout << endl << "See detailed output? (y/n) ";
	char choice;
	cin >> choice;
	switch (choice) {
		case 'y':
		case 'Y':
			fibby->fib(integer);
			cout << "Recursive calls made: " << fibby->getCount() << " (inefficient algorithm)" << endl;
			cout << "Recursive calls made: " << effy->getCount() << " (efficient algorithm)" << endl;
			break;
		case 'n':
		case 'N':
			break;
		default:
			break;
	}
	cout << endl << "Developed by Faisal, Hafiz, and Jesstern" << endl;

	return 0;
} // end main function 