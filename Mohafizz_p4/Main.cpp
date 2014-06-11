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
	vector <int> v = random->storeRandom(size);

	random->printVector(v);
	int index = random->generateKey(v);

	cout << "A search key of '" << v[index] << "' has been generated! \n" << endl;

	cout << "***************************|| Searching Algorithm ||*****************************\n" << endl;

	int lResult = random->linearSearch(v,index);
	random->printSearchResult(lResult);

	int bResult = random->binarySearch(v,index);
	random->printSearchResult(bResult);

	cout << "****************************|| Sorting Algorithm ||******************************\n" << endl;

	vector <int> bsort = random->getrandomVariables();
	random->bubblesort(bsort);
	random->printVector(bsort);

	vector <int> selsort = random->getrandomVariables();
	random->selectionsort(selsort);
	random->printVector(selsort);

	vector <int> insertsort = random->getrandomVariables();
	random->insertionsort(insertsort);
	random->printVector(insertsort);

	vector <int> mergesort = random->getrandomVariables();
	random->mergesort(mergesort,0,mergesort.size()-1);
	random->printVector(mergesort);

	// vector <int> testcase = random->getrandomVariables();
	// random->printVector(testcase);

	cout << "***************************|| Searching Algorithm ||*****************************\n" << endl;

	int bResult2 = random->binarySearch(bsort,index);
	random->printSearchResult(bResult2);

	return 0;
} // end main function 