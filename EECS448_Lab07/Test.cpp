#include "Test.h"
#include <iostream>

Test::Test()
{
}

Test::~Test()
{
}

//returns true if no errors
bool Test::testIsEmpty(){
	//new instance of LinkedList to test isEmpty
	LinkedList<int> test;
	bool result = true;

	//check if initial state is empty (true)
	if (test.isEmpty() == false)
		result = false;
	
	//add an node to the list
	test.addFront(10);

	//check if added state is empty (false)
	if (test.isEmpty() == true)
		result = false;
	
	//remove the added node
	test.removeFront();

	//check if removed state is empty (true)
	if (test.isEmpty() == false)
		result = false;
	
	return result;
}

bool Test::testSize() {
	//new instance of LinkedList to test size
	LinkedList<int> test;
	bool result = true;

	//check the size of the initial state (0)
	if (test.size() != 0)
		result = false;
	
	//add an node
	test.addFront(10);

	//check the size of the added state (1)
	if (test.size() != 1)
		result = false;

	//add another node
	test.addFront(11);

	//check the size of the added state (2)
	if (test.size() != 2)
		result = false;

	//add several nodes
	for (int i = 12; i <= 15; i++)
	test.addFront(i);

	//check the size of the added state (6)
	if (test.size() != 6)
		result = false;

	//remove 5 nodes
	for (int i = 0; i < 5; i++)
		test.removeFront();

	//check the size of the removed state (1)
	if (test.size() != 1)
		result = false;

	//remove last node
	test.removeFront();

	//check the size of the removed state (0)
	if (test.size() != 0)
		result = false;

	//remove a non existant node
	test.removeFront();
	
	//check the size of the removed state (0)
	if (test.size() != 0)
		result = false;

	return result;
}

bool Test::testSearch() {
	//new instance of LinkedList to test search
	LinkedList<int> test;
	bool result = true;

	//try a search on the empty LinkedList (false)
	if (test.search(0) == true)
		result = false;

	//add some values to search for
	for (int i = 10; i <= 20; i++)
		test.addFront(i);

	//test for a non-added value (false)
	if (test.search(5) == true)
		result = false;

	//search for the added values(true)
	for (int i = 10; i <= 20; i++) {
		if (test.search(i) == false)
			result = false;
	}
	
	return result;
}

bool Test::testAddBack() {
	//new instance of LinkedList to test addBack
	LinkedList<int> test;
	bool result = true;
	
	//add a node to the back
	test.addBack(10);

	//test if it was added (true)
	if (test.search(10) == false)
		return false;

	//add a 2nd node to the back
	test.addBack(11);

	//test if node 11 was added (true)
	if (test.search(11) == false)
		return false;
	
	//remove the last node (11)
	test.removeBack();

	//test if the last node was removed (false)
	if (test.search(11) == true)
		return false;

	test.addBack(12);

	//test if node 12 was added to the back (true)
	if (test.search(12) == false)
		return false;

	//remove the front value (10)
	test.removeFront();

	//test if node 10 was removed from the front (false)
	if (test.search(10) == true)
		return false;

	return result;
}

bool Test::testAddFront() {
	//new instance of LinkedList to test addFront
	LinkedList<int> test;
	bool result = true;

	//check the empty LinkedList (false)
	if (test.search(10) == true)
		result = false;

	//add a value to the LinkedList (10)
	test.addFront(10);

	//check if the value was added (true)
	if (test.search(10) == false)
		result = false;
	
	//add another node (11)
	test.addFront(11);

	//check if the value was added (true)
	if (test.search(11) == false)
		result = false;
	
	//remove back node (10)
	test.removeBack();

	//see if node 11 is still in front (true)
	if (test.search(11) == false)
		result = false;
	
	return result;
}

bool Test::testRemoveBack() {
	//new instance of LinkedList to test removeBack
	LinkedList<int> test;
	bool result = true;

	//see if value exists in emtpy LinkedList (false)
	if (test.search(10) == true)
		result = false;

	//add node (10)
	test.addFront(10);

	//check if node 10 was added (true)
	if (test.search(10) == false)
		result = false;

	//add node (11, 10)
	test.addFront(11);

	//check node 11 was added (true)
	if (test.search(11) == false)
		result = false;

	//remove the back node (10)
	test.removeBack();

	//check node 10 still exists (false)
	if (test.search(10) == true)
		result = false;

	return result;
}

bool Test::testRemoveFront() {
	//new instance of LinkedList to test removeBack
	LinkedList<int> test;
	bool result = true;

	//check if node 10 exists in the empty LinkedList (false)
	if (test.search(10) == true)
		result = false;

	//add node (10)
	test.addFront(10);

	//verify node 10 was created (true)
	if (test.search(10) == false)
		result = false;

	//add another node (11, 10)
	test.addFront(11);

	//verify node 11 was created (true)
	if (test.search(11) == false)
		result = false;
	
	//remove the front node (11)
	test.removeFront();

	//check if node 11 still exists (false)
	if (test.search(11) == true)
		result = false;

	return result;
}

void Test::testLinkedList() {

	//test each LinkedList method and output its result
	cout << "isEmpty():\t" << ((testIsEmpty() == true) ? "PASSED" : "FAILED") << endl;
	cout << "size():\t\t" << ((testSize() == true) ? "PASSED" : "FAILED") << endl;
	cout << "search():\t" << ((testSearch() == true) ? "PASSED" : "FAILED") << endl;
	cout << "addBack():\t" << ((testAddBack() == true) ? "PASSED" : "FAILED") << endl;
	cout << "addFront():\t" << ((testAddFront() == true) ? "PASSED" : "FAILED") << endl;
	cout << "removeBack():\t" << ((testRemoveBack() == true) ? "PASSED" : "FAILED") << endl;
	cout << "removeFront():\t" << ((testRemoveFront() == true) ? "PASSED" : "FAILED") << endl;
}