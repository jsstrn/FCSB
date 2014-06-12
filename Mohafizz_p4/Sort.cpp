/*	
 *	Developed by Mohamed Hafiz a1674846
 *	Bachelor of Computer Science, University of Adelaide
 */

#include "Algorithm.h"
#include "lib.h"

vector <int> Algorithm::bubblesort(vector <int>& v)
{
	for(int iEnd = v.size()-1; iEnd > 0 ; --iEnd)
	{
		for(int i=0;i<iEnd;i++)
		{
			if(v[i]>v[i+1])
			{
				swap(v,i,i+1);
			}
		compCounter++;
		}
	}
	flag = 3;
	return v;	
}

vector <int> Algorithm::selectionsort(vector <int>& v)
{
	for (int i = v.size() - 1; i > 0 ; i--) 
	{
        int maxValue = 0;
        for (int j = 1; j <= i; j++) 
        {
            if (v[j] > v[maxValue]) 
            {
                maxValue = j;
            }
        compCounter++;
        }
        swap(v,i,maxValue);
    }
    flag = 4;
    return v;
}

vector <int> Algorithm::insertionsort(vector<int>& v)
{
	for (int index = 1; index < v.size(); index++) 
	{
        // Initialize a local insertion index
        int insert = index;
        while (insert > 0 && v[insert - 1] > v[insert]) 
        {
            swap(v,insert,insert-1);
            insert--;
        }
    compCounter++;
    }
    flag = 5;
    return v;
}

void Algorithm::swap(vector<int>& v, int i, int j)
{
	int temp = v[i];
	v[i] = v[j];
	v[j] = temp;
	copyCounter += 3;
}

vector<int> Algorithm::mergesort(vector<int>& v, int left, int right)
{
    	if (left < right)
    	{
    	  int mid = (left+right) / 2;
          // sort left half
          mergesort(v, left, mid);
          // sort right half
          mergesort(v, mid+1, right);  
          // merge them
          merge(v, left, mid, right);
        }
        flag = 6;
    	return v;
}

void Algorithm::merge(vector<int>& v, int left, int mid, int right)
{
   	//the two subgroups to be merged are v[left to mid], v[mid+1 to right]
    int len = right-left+1;
	int temp[len];
	int leftP = left;
	int rightP = mid+1;
	int k=0;
    	//merge the data items by copying the smaller to the temp 
    	while (leftP <= mid && rightP <= right)
    	{
    		if (v[leftP] < v[rightP])
    		{
    		   temp[k++] = v[leftP++];
    		   copyCounter++;
    		}
    		else
    		{
    		   temp[k++] = v[rightP++];
    		   copyCounter++;
    		}
    	}
		    	while (leftP <= mid) 
		    	{
		    		temp[k++] = v[leftP++];
		    		copyCounter++;
		    	}
			    	while (rightP <= right)
			    	{
			    		temp[k++] = v[rightP++];
			    		copyCounter++;
			    	}
				    	for (int i=0; i< len;i++)
				    	{
				    		v[left++] = temp[i];
				    		copyCounter++;
				    	}
	compCounter++;
}

void Algorithm::printVector(vector <int>& v)
{
	for(int i=0; i < v.size(); i++)
	{
		cout << v[i] << ",";
	}
	/* assign type of sort used */
	string sortType;
	if (flag == 3) sortType = "Bubble sort";
	if (flag == 4) sortType = "Selection sort";
	if (flag == 5) sortType = "Insertion sort";
	if (flag == 6) sortType = "Merge sort";

	/* print message */
	cout << endl;
	cout << "Sorting algorithm: " << sortType << endl;
	cout << " Comparisons made: " << getCompCounter() << endl;
	cout << "      Copies made: " << getCopyCounter() << endl;
	cout << endl;

	/* reset counters*/
	flag = 0;
	resetCompCounter();
	resetCopyCounter();
}