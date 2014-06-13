/*	
 *	Developed by Mohamed Hafiz a1674846
 *	Bachelor of Computer Science, University of Adelaide
 */

#include "Algorithm.h"
#include "lib.h"

/*********************************************/
/*               Main Function               */
/*********************************************/

int main()
{
	unsigned int size;
	
	cout << "Welcome!" << endl;
	cout << "Please enter a table size: ";
	cin >> size;

	Algorithm *random = new Algorithm();
	/* initialize a vector with random integers*/	
	vector <int> v = random->storeRandom(size);
	/* display the vector */
	random->displayVector(v);
	/* generate a search key*/
	int index = random->generateKey(v);
	cout << endl << "Search key: " << v[index] << endl << endl;

	cout << "***************************|| Searching Algorithm ||*****************************\n" << endl;
	/* linear search */
	int lResult = random->linearSearch(v,index);
	random->printSearchResult(lResult);
	/* binary search */
	int bResult = random->binarySearch(v,index);
	random->printSearchResult(bResult);

	cout << "****************************|| Sorting Algorithm ||******************************\n" << endl;
	/* bubble sort */
	vector <int> bsort = random->getrandomVariables();
	random->bubblesort(bsort);
	random->printVector(bsort);
	/* selection sort */
	vector <int> selsort = random->getrandomVariables();
	random->selectionsort(selsort);
	random->printVector(selsort);
	/* insertion sort */
	vector <int> insertsort = random->getrandomVariables();
	random->insertionsort(insertsort);
	random->printVector(insertsort);
	/* merge sort */
	vector <int> mergesort = random->getrandomVariables();
	random->mergesort(mergesort,0,mergesort.size()-1);
	random->printVector(mergesort);

	// vector <int> testcase = random->getrandomVariables();
	// random->printVector(testcase);

	cout << "***************************|| Searching Algorithm ||*****************************\n" << endl;
	/* display sorted vector */
	random->displayVector(bsort); cout << endl;
	/* linear search */
	int lResult2 = random->linearSearch(bsort,index);
	random->printSearchResult(lResult2);
	/* binary search */
	bResult = random->binarySearch(bsort,index);
	random->printSearchResult(bResult);

	return 0;
} // end main function 