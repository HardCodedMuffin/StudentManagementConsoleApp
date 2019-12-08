#include <iostream>
#include <time.h>
#include <cassert>  
#include "Stack.h"

int low = 0;

ArrayStack::ArrayStack() : top(-1) {}

bool ArrayStack::isEmpty() const {
	return top < 0;
}

bool ArrayStack::push(const char& newEntry) {
	bool result = false;
	if (top < MAX_STACK - 1)		// Does stack have room for newEntry?
	{
		top++;
		items[top] = newEntry;
		result = true;
	}
	return result;
}

/* With this function, you can give an array to push it to the stack. 
So, you didn't have to enter items one by one with the hand.
Instead of you will use the push(const char& newEntry) function.  */
void ArrayStack::pushAll(char array[], int size) {
	bool result = false;
	if (top < MAX_STACK - 1)		// Does stack have room for newEntry?
	{
		for (int i = 0; i < size; i++)
		{
			push(array[i]);
		}
	}
}

void ArrayStack::pushrandom(char items[], int size) {
	char c;
	srand(time(NULL));				 // Initialize the random number generator
	for (int i = 0; i < size; i++)
	{
		c = rand() % 26 + 65;
		if (rand() % 2) {
			c += 32;
		}
		push(c);
	}
	toArray(items, size);
}

bool ArrayStack::pop() {
	bool result = false;
	if (!isEmpty())
	{
		top--;						// Pop removes the element that top of to stack by decreasing size of it
		result = true;
	}
	return result;
}


char ArrayStack::peek() const {
	assert(!isEmpty());	  			// Enforce precondition	
	return items[top];				// Stack is not empty return top
}


void ArrayStack::peekall(int size) {
	for (int i = 0; i < size; i++)
	{
		std::cout << ("%d ", items[i]) << " ";
	}
}

void ArrayStack::toArray(char items[], int size) {
	while (!isEmpty())				// check the underflow
	{
		for (int x = 0; x < size; x++)
		{
			char top = peek();
			pop();
			items[x] = top;
		}
	}
}

