#include "numberList.h"
#include <fstream>
using namespace std;

/*
* 
* 
1. Find and correct the error(s):
NumberList::~NumberList() {
ListNode *nodePtr, *nextNode;
nodePtr = head;
while (nodePtr != nullptr)
{
nextNode = nodePtr->next;
delete nodePtr;
nodePtr = nextNode;
}
}


2. Study the NumberedList Class given to you and modify the linked list class by adding a
member function named reverse that rearranges the nodes in the list so that their order
is reversed. Demonstrate the function in a simple driver program (main).


3. Modify the driver program you wrote for problem 2 so that reads the data from the file
into a linked list and displays it on the screen, it then saves the data in the linked list to a
file.


*/

int main()
{
	NumberList mylist;
	ifstream infile("Text.csv");
	int n;

	while (infile.good())
	{
		infile >> n;

		mylist.appendNode(n);

	}


}