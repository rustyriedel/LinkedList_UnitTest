#ifndef TEST
#define TEST
#include "LinkedList.h"
using namespace::std;

class Test
{
public:
	Test();
	~Test();

	// calls each of the test methods and prints to the screen the results
	void testLinkedList();

private:
	// these methods test the individual methods in LinkedList
	// each will return true if the method has no errors.
	bool testIsEmpty();
	bool testSize();
	bool testSearch();
	bool testAddBack();
	bool testAddFront();
	bool testRemoveBack();
	bool testRemoveFront();
};

#endif