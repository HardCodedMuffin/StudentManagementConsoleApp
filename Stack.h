#ifndef Stack_H
#define Stack_H

const int MAX_STACK = 100;

class ArrayStack {
private:
	char items[MAX_STACK];     // Array of stack items
	int top;				   // Index to top of stack
public:
	ArrayStack();              // Default constructor
	bool isEmpty() const;
	bool push(const char& newEntry);
	void pushAll(char items[], int size);
	void pushrandom(char items[], int size);
	bool pop();
	char peek() const;
	void peekall(int size);
	void toArray(char items[], int size);
};

#endif // !Stack
