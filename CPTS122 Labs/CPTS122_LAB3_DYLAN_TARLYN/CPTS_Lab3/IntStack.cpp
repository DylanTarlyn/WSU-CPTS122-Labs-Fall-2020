#include "IntStack.h"
#include <iostream>
using namespace std;

// copy constructor

IntStack::IntStack(const IntStack& obj)
{
	if (obj.stackSize > 0)
		stackArray = new int[obj.stackSize];
	else
		stackArray = nullptr;

	stackSize = obj.stackSize;

	for (int count = 0; count < stackSize; count++)
		stackArray[count] = obj.stackArray[count];

	top = obj.top;
}


// destructor

IntStack::~IntStack()
{
	delete[]stackArray;
}

// pop

void IntStack::pop(int& num)
{
	if (isEmpty())
	{
		cout << "The stack is empty\n";
	}
	else
	{
		num = stackArray[top];
		top--;
	}
}

// is full

bool IntStack::isFull()const
{
	bool status;

	if (top == stackSize - 1)
		status = true;
	else
		status = false;

	return status;
}

// is empty

bool IntStack::isEmpty() const
{
	bool status;
	
	if (top == -1)
		status = true;
	else
		status = false;
	return status;
}


// PROBLEM 1

int IntStack::div()
{
	int num1 = 0;
	int num2 = 0;
	int quot = 0;

	pop(num2); // pop one number
	pop(num1); // pop the next number

	quot = num1 / num2; // divide the first number by the second
	push(quot); // push the result onto the stack
}

// PROBLEM 2

int IntStack::addAll()
{
	int top = 0;
	int sum = 0;

	while (isEmpty() == false) // while it isn't empty
	{
		pop(top); // pop the top of the stack
		sum = sum + top; // add the value to the sum total
	}
	
	push(sum);
}

// PROBLEM 3

char IntStack::revArray()
{
	char revArray[] = "Data_Structures";
	char top = '\0';

	while (isEmpty() == false)
	{
		pop(top); // pop the top letter
	}
	// needs to pop all and then push back until empty
	while (isEmpty == false)
	{
		push(top);
		revArray = top; // ???
	}
}