/*	
 *	Developed by Mohamed Hafiz a1674846
 *	Bachelor of Computer Science, University of Adelaide
 */

#include "Algorithm.h"
#include "lib.h"

int Algorithm::linearSearch(vector <int>& v, int target)
{
	cout << "Searching for: " << target << endl;
	for (int i = 0; i < v.size(); i++)
	{
		compCounter++;
		if (v[i] == target)
		{
			flag = 1;
			return i;
		}
	}
	return -1;
}

int Algorithm::binarySearch(vector <int>& v, int target)
{
	cout << "Searching for: " << target << endl;
	int first = 0;
	int last = v.size() - 1;
	
	while (first<=last)
	{
		int mid = (first+last)/2;
		if(v[mid] == target) {
			flag = 2;
			return mid;
		} else if(v[mid] > target) {
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
	result += 1;
	string position = "th";
	if (result == 1) position = "st";
	if (result == 2) position = "nd";
	if (result == 3) position = "rd";

	if (result >= 0 && flag == 1)
	{
		cout << "Found using linear search algorithm. ";
		cout << "It's the " << result << position << " element in the table." << endl;
		cout << getCompCounter() << " comparisons made." << endl;
		cout << endl;
	} 
	else if (result >= 0 && flag == 2)
	{
	 	cout << "Found using binary search algorithm. ";
	 	cout << "It's the " << result << position << " element in the table." << endl;
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