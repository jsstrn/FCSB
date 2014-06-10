#include "search.h"
#include "lib.h"

bool linearsearch(int alist[], int size, int target){
   for (int i=0; i< size; i++){
	if (alist[i]==target)
	  return true;
   }
   return false;
}
bool binarysearch(int alist[], int size, int target){
     int first = 0;
     int last = size - 1;
     while (first <= last) {
       int mid = (first+last)/2; // compute midpoint
       if (alist[mid] == target)
         return true;            // found target
       else if (alist[mid] > target)   
         last = mid - 1;        // search left half
       else
         first = mid + 1;       // search right half
     }
    return false;               // target not there
}
bool rebinsearch(int alist[], int target, int left, int right) {
  if (right > left)
    return false;
  int mid = (right + left) / 2;
  if (alist[mid] == target)
    return true;
  if (alist[mid] < target)
    return rebinsearch(alist, target, mid + 1, right);
  else
    return rebinsearch(alist, target, left, mid - 1);
  return true;
}
bool linSearch(vector<int>& table, int search) {
  for (int i = 0; i < table.size(); ++i) {
    if (table[i] == search)
      return true;
  }
  return false;
}

