#ifndef SORT_H
#define SORT_H
void bubblesort(int[], int size);
void selectionsort(int[], int size);
void display(int [], int size);
void insertionsort(int [], int size);

void quicksort(int [], int left, int right);
int partition(int [], int, int);
void swap(int [],int, int);

void mergesort(int [], int left, int right);
void merge(int [], int left, int mid, int right);
#endif
