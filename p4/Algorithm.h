/*	
 *	Developed by Faisal, Hafiz, and Jesstern
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
	vector<int> randomVariables;		//stores the initial unsorted table
	int flag;							//flags: 1=linearsearch, 2=binarysearch, 3=bubblesort, 4=selectionsort, 5=insertion, 6=mergesort
	int compCounter;					//comparison counter
	int copyCounter;					//copy counter
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
	int getCopyCounter();
	void resetCompCounter();
	void resetCopyCounter();

	int linearSearch(vector<int>&, int);
	int binarySearch(vector<int>&, int);
	void printSearchResult(int);
	
	vector<int> bubblesort(vector<int>&);
	vector<int> selectionsort(vector<int>&);
	vector<int> insertionsort(vector<int>&);
	void swap(vector<int>&, int, int);

	vector<int> mergesort(vector<int>&, int, int);
	void merge(vector<int>&, int, int, int);
	void quicksort(vector <int>&, int, int);
	int partition(vector <int>&, int, int);
	
	void displayVector(vector<int>&);
	void printVector(vector<int>&);
	
}; // end base class
#endif