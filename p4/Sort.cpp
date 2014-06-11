#include "Sort.h"
#include "lib.h"

/* smart swap is able to swap two vairables without a temp */
void smartSwap(vector <int>& table , int a, int b) {
  table[a] = table[a] + table[b]; // a = (a + b)
  table[b] = table[a] - table[b]; // b = (a + b) - b
  table[a] = table[a] - table[b]; // a = (a + b) - a
}
/* bubble sort algorithm (ascending order)
 * complexity: O(n^2) 
 * comparisons: n - 1 */

void bubbleSort(vector <int>& table) {
  int comp = 0;
  int swap = 0;
  for (int k = table.size() - 1; k > 0; --k) {
    for (int i = 0; i < k; ++i) {
      if (table[i] > table[i + 1]) {
        smartSwap(table, i, i + 1);
        swap += 1;
        cout << "Swaps: "<< swap <<endl;
      }
      //cout << "Comparisons: " << ++comp << endl;
    } // end of each pass
  }
}
/*void bubblesort(int arr[], int size){
//sorts descending
	int count=1;
	bool flag;
	for (int m=size-1; m>0; m--){
    flag=false;
    for (int j=0; j<m; j++){
      if (arr[j] < arr[j+1]) {
		   //swap value at index j with value at index j+1
       swap(arr,j,j+1);
       flag = true; 
     }
   }	
   cout<<"Pass "<<count++<<endl;
   display(arr,size);
	    if (!flag)  //already sorted; nothing to swap
     break;
   }
 }
void display(int arr[], int size){
   for (int i=0;i<size;i++)
    printf("%4d ", arr[i]);
    // cout<<arr[i]<<" ";
   cout<<endl;
}

void selectionsort(int arr[], int size){
//sorts ascending
   	int count=1;
	int max;
	for (int m=size-1; m>0; m--){
            max=0;
	    for (int j=1; j<=m; j++){
		if (arr[j] > arr[max]) {
		   max = j;
		}
	    }
	    if (m!=max) {    
	        int tmp = arr[m];
		arr[m] = arr[max];
		arr[max] = tmp;
	    }
	    cout<<"Pass "<<count++<<endl;
	    display(arr,size);
	}
}
void insertionsort(int arr[], int size){
//sorts ascending
     	int i, tmp, k,count=1;
	  
	 for( i = 0; i < size; i++ ) {
 		tmp = arr[ i ];
 		k = i - 1;
 		while( k >= 0 && tmp < arr[k] ) {
 			arr[ k+1 ] = arr[ k ];
 			k--;
		 }
 		arr[ k+1 ] = tmp;
			
		cout<<"Pass "<<count++<<endl;
	    	display(arr,size);
 	  }
}
void quicksort(int arr[], int left, int right){
        if (left < right) {
            int pivot = partition(arr, left, right);
            
  	   //display arr
            cout<<"Partition"<<endl;
            for (int i=left;i<pivot;i++){
            	cout<<arr[i]<< " ";
            }
            cout<<"-"<<arr[pivot]<<"- ";
            for (int i=pivot+1;i<=right;i++){
            	cout<<arr[i]<<" ";
            }
            cout<<endl;
           
            quicksort(arr, left, pivot - 1);
            quicksort(arr, pivot + 1, right);
            }
}
int partition(int aList[], int left, int right){
//returns pivot index
    	//pivot in rightmost location
     if (right>(left+1)){  //need more than 2 data items to partition   
        int pivot = aList[right];
        int l = left;
        int r = right-1;
     
       while (l < r) {
            while (l < right && aList[l] < pivot) l++;
            while (r > left && aList[r] >= pivot) r--;
            if (l < r) {
                swap(aList, l, r);
            }
        }
     
       swap (aList,right, l);//restore the pivot
      
       return l;
       }
     else { //2 data items, simply compare and swap if necessary
      	if (aList[right] < aList[left])
     	    swap(aList,left,right);
      	return right;
      }   
}
void swap(int arr[], int i, int j){
       int tmp = arr[i];
       arr[i] = arr[j];
       arr[j] = tmp;
}
void mergesort(int aList[], int left, int right){
    	if (left < right){
    	  int mid = (left+right) / 2;
          // sort left half
          mergesort(aList, left, mid);
          // sort right half
          mergesort(aList, mid+1, right);
            
          // merge them
          merge(aList, left, mid, right);
             cout<<"merge"<<endl;
            for (int i=left;i<=mid;i++){
            	cout<<aList[i]<<" ";
            }
            
            for (int i=mid+1;i<=right;i++){
            	cout<<aList[i]<< " ";
            }
            cout<<endl;

    	}
}

void merge(int aList[], int left, int mid, int right){
   	//the two subgroups to be merged are aList[left to mid], aList[mid+1 to right]
        int len = right-left+1;
    	int tmpA[len];
    	int leftP = left;
    	int rightP = mid+1;
    	int k=0;
    	//merge the data items by copying the smaller to the tmpA 
    	while (leftP <=mid && rightP <= right){
    		if (aList[leftP] < aList[rightP])
    		   tmpA[k++] = aList[leftP++];
    		else
    		   tmpA[k++] = aList[rightP++];
    	}
    	
    	while (leftP <= mid) {
    		tmpA[k++] = aList[leftP++];
    	}
    	
    	while (rightP <= right){
    		tmpA[k++] = aList[rightP++];
    	}
    	
    	for (int i=0; i< len;i++){
    		aList[left++] = tmpA[i];
    	}
}*/

