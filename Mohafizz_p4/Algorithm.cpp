/*
 *	Developed by Mohamed Hafiz a1674846
 *	Bachelor of Computer Science, University of Adelaide
 */

#include "Algorithm.h"
#include "lib.h"

/*************************************************/
/*               Class Definitions               */
/*************************************************/

/* constructor */
Algorithm::Algorithm() {}

vector<int> Algorithm::storeRandom(unsigned int s)
{
	srand(time(NULL)); // seed initialized to give a random number each time
	randomVariables.resize(s);  // resize the vector 
	for(int i=0; i < s; i++)
	{
		 randomVariables[i] = rand() % 100 + 1; // generate a random number between 1 to 100
	}
	return randomVariables; // returns vector of unsorted integers
}

int Algorithm::generateKey(vector <int>& v)
{
	int index = rand() % v.size(); // generate a number of 0 to size of vector v - 1
	return index;
}

vector <int> Algorithm::getrandomVariables()
{
	return randomVariables;  // returns vector of unsorted integers
}

int Algorithm::getCompCounter()
{
	return compCounter; // Comparison counter
}

int Algorithm::getCopyCounter()
{
	return copyCounter; // Copy counter
}

void Algorithm::resetCompCounter()
{
	compCounter = 0; // Reset comparison counter
}

void Algorithm::resetCopyCounter()
{
	copyCounter = 0; // Reset copy counter
}




