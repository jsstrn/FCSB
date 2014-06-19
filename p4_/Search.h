#ifndef SEARCH_H
#define SEARCH_H

#include "lib.h"

int linearSearch(vector <int>& table, int search);
int binarySearch(vector <int>& table, int search);
int binarySearchRecursive(vector <int>& table, int search, int start, int end);
void result(int index, int search);

#endif
