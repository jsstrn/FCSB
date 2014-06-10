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
/* linear search algorithm
 * complexity: O(n)
 * precondition: sorting not required */
int linearSearch(vector <int>& table, int search) {
  for (int i = 0; i < table.size(); ++i) {
    if (table[i] == search) return i;
  }
  return -1;
}
/* binary search algorithm (ascending order)
 * complexity: O(log n)
 * precondition: sorting required */
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
void result(int index, int search) {
  index += 1; // increment index by 1

  string pos = "th";          // Nth position
  if (index == 1) pos = "st"; // 1st position
  if (index == 2) pos = "nd"; // 2nd position
  if (index == 3) pos = "rd"; // 3rd position

  if (index != 0) {
    cout << "We found it! " << search << " is the ";
    cout << index << pos << " element of the table." << endl;
  } else {
    cout << "Sorry. No match found." << endl;
  }
}
