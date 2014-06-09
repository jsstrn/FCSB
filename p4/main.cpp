/*	
 *	Developed by Faisal, Hafiz, and Jesstern
 *	Bachelor of Computer Science, University of Adelaide
 *	All Rights Reserved. Copyright (C) Jesstern Rays
 *	This work is licensed under CC BY-SA 4.0
 */

#include "lib.h"
#include "Search.h"
#include "Sort.h"

/*********************************************/
/*               Main Function               */
/*********************************************/

void goodbye();

int main()
{
	srand(time(0));
	vector<int> table;

	// prompt user for table size
	cout << "What is the size of the table? ";
	unsigned int size;
	cin >> size;
	// check if user's input is valid
	if (cin.fail()) {
		cout << "Invalid entry!";
	} else {
		// resize the vector to users requirements
		table.resize(size);
		// assign random integers to the vector
		for (int i = 0; i < table.size(); i++) {
			table[i] = rand() % 100 + 1;
		}
	}

	// display table elements
	for (int i = 0; i < table.size(); i++) {
		cout << table[i];
		if (i < (table.size() - 1)) 
			cout << ", ";
	}
	cout << endl;

	// generate a search term
	cout << "Search term: ";
	int search = rand() % table.size() + 0;
	cout << table[search] << endl;
	
	// search unsorted table

	// sort table

	// search sorted table

	// smart swap
	int a = 32;
	int b = 21;
	cout << a << " and " << b << endl;
	a = a + b;
	b = a - b; // b = (a + b) - b
	a = a - b; // a = (a + b) - a
	cout << a << " and " << b << endl;

	// say goodbye
	goodbye();	
	return 0;
} // end main function 

void goodbye() {
	cout << "Goodbye!" << endl;
	cout << "Developed by Faisal, Hafiz, and Jesstern." << endl;
}