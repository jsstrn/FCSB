/*	
 *	Developed by Faisal, Hafiz, and Jesstern
 *	Bachelor of Computer Science, University of Adelaide
 *	All Rights Reserved. Copyright (C) Jesstern Rays
 *	This work is licensed under CC BY-SA 4.0
 */

#include "Search.h"
#include "Sort.h"
#include "lib.h"

/*********************************************/
/*               Main Function               */
/*********************************************/

void goodbye();

int main()
{
	srand(time(0)); // seed rand() with current time
	vector<int> table;

	/* prompt user for table size */
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
			// table[i] = i;			 // assign incremental values
			table[i] = rand() % 100 + 1; // assign random values
		}
	}

	/* display table elements */
	for (int i = 0; i < table.size(); i++) {
		cout << table[i];
		if (i < (table.size() - 1)) 
			cout << ", ";
	}
	cout << endl;

	/* generate a search term */
	cout << endl << "Search term: ";
	int search = table[rand() % table.size() + 0];
	cout << search << endl;
	
	/* search unsorted table */
	cout << endl << "Table is unsorted." << endl;
	cout << "Linear search - ";
	result(linearSearch(table, search), search); // linear search
	cout << "Binary search - ";
	result(binarySearch(table, search), search); // binary search

	/* initialize table */
	vector <int> unsorted_table = table;

	/* sort table in ascending order */

	// bubble sort
	table = unsorted_table;
	bubbleSort(table);

	for (int i : table)
		cout << i << ", ";
	cout << endl;

	// selection sort
	// table = unsorted_table;

	// insertion sort
	// table = unsorted_table;

	// merge sort
	// table = unsorted_table;

	// quick sort
	// table = unsorted_table;

	/* search sorted table */
	cout << endl <<  "Table is sorted." << endl;
	cout << "Linear search - ";
	result(linearSearch(table, search), search); // linear search
	cout << "Binary search - ";
	result(binarySearch(table, search), search); // binary search

	/* say goodbye */
	goodbye();	
	return 0;
} // end main function 

void goodbye() {
	cout << endl << "Goodbye!" << endl;
	cout << "Developed by Faisal, Hafiz, and Jesstern." << endl;
}