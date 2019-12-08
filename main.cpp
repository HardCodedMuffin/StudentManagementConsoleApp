#include <iostream>
#include <string>
#include "QuickSort.h"
#include "Stack.h"

using namespace std;

int main() {

	ArrayStack stack; // Define a Stack named stack
	int size;

	cout << "Please enter the lenght of stack that you want to create:";
	cin >> size;

	char crr[CHAR_MAX];

	cout << "Fully random auto generated stack from A-z including lower and upper cases: \n";
	stack.pushrandom(crr, size);
	stack.peekall(size);
	cout << endl;

	cout << "Using Quick Sort to sort stack: \n";
	quickSort(crr, 0, size-1);
	stack.pushAll(crr, size);
	stack.peekall(size);

	cout << endl;
	cout << "Done";
	return 0;
}

/* The function that takes the last element and assigns as a pivot, 
than places elements that all smaller than
pivot to the left and greater elements to the right*/
int partition(char items[], int low, int high) {
	int pivot = items[high];
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++)
	{
		if (items[j] <= pivot)
		{
			i++;
			swap(items[i], items[j]);
		}
	}
	swap(items[i + 1], items[high]);
	return (i + 1);
}