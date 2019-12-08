#include "QuickSort.h"
#include <iostream>

//the function that swaps two-element
void swap(int a, int b) {
	int tmp = a;
	a = b;
	b = tmp;
}


void quickSort(char items[], int low, int high) {
	if (low < high)
	{
		int pi = partition(items, low, high);

		//sorts elements before and after partitioning 
		quickSort(items, low, pi - 1);
		quickSort(items, pi + 1, high);
	}
}