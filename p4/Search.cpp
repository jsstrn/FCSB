#include "Search.h"
#include "lib.h"

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
/* Linear search algorithm
 * Complexity: O(n)
 * Precondition: sorting not required */
int linearSearch(vector <int>& table, int search) {
  for (int i = 0; i < table.size(); ++i) {
    if (table[i] == search) return i;
  }
  return -1;
}
/* Binary search algorithm
 * Complexity: O(log n)
 * Precondition: sorting required */
int binarySearch(vector <int>& table, int search) {
  int start = 0;
  int end = table.size() - 1;
  while (start <= end) {
    int mid = (start + end) / 2;  // calculate midpoint
    if (table[mid] == search)     // search term found
      return mid;
    else if (table[mid] > search) // search the left side
      end = mid - 1;
    else                          // search the right side
      start = mid + 1;
  }
  return -1;
}

