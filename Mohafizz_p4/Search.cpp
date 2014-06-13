/*	
 *	Developed by Mohamed Hafiz a1674846
 *	Bachelor of Computer Science, University of Adelaide
 */

#include "Algorithm.h"
#include "lib.h"

int Algorithm::linearSearch(vector <int>& v, int target)
{
	for (int i = 0; i < v.size(); i++)
	{
		compCounter++;
		if (v[i] == v[target])
		{
			flag = 1;
			return i;
		}
	}
	return -1;
}

int Algorithm::binarySearch(vector <int>& v, int target)
{
	int first = 0;
	int last = v.size() - 1;
	
	while (first<=last)
	{
		int mid = (first+last)/2;
		if(v[mid] == v[target]) {
			flag = 2;
			return mid;
		} else if(v[mid] > v[target]) {
			last = mid - 1;
		} else {	
			first = mid + 1;
		}
		compCounter++;
	}
	return -1;
}

void Algorithm::printSearchResult(int result)
{
	if (result >= 0 && flag == 1)
	{
		cout << result + 1 << endl;
		cout << "Found using linear search algorithm. ";
		cout << getCompCounter() << " comparisons made." << endl;
		cout << endl;
	} 
	else if (result >= 0 && flag == 2)
	{
		cout << result + 1 << endl;
	 	cout << "Found using binary search algorithm. ";
		cout << getCompCounter() << " comparisons made." << endl;
		cout << endl;
	}
	else
	{
		cout << "The key was not found! \n" << endl;
	}
	resetCompCounter();
	result = 0;
	flag = 0;
}