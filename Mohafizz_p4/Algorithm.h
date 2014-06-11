/*	
 *	Developed by Mohamed Hafiz a1674846
 *	Bachelor of Computer Science, University of Adelaide
 */

#ifndef Algorithm_H
#define Algorithm_H

#include "lib.h"
 
/**************************************************/
/*               Class Declarations               */
/**************************************************/

class Algorithm
{
private:
	/* restricted variables */
	vector<int> randomVariables;
	int flag;
	int compCounter;
	int copyCounter;
protected:
	/* member variables */
public:
	/* constructor */
	Algorithm();

	/* member functions */

	vector<int> storeRandom(unsigned int);
	vector<int> getrandomVariables();
	int generateKey(vector<int>&);
	
	int getCompCounter();
	int getcopyCounter();
	void resetCompCounter();
	void resetcopyCounterer();

	int linearSearch(vector<int>&, int);
	int binarySearch(vector<int>&, int);
	void printSearchResult(int);
	
	vector<int> bubblesort(vector<int>&);
	vector<int> selectionsort(vector<int>&);
	vector<int> insertionsort(vector<int>&);
	void swap(vector<int>&, int, int);

	vector<int> mergesort(vector<int>&, int, int);
	void merge(vector<int>&, int, int, int);
	
	void printVector(vector<int>&);
	
}; // end base class
#endif