#include <iostream>
#include "Test.h"
using namespace::std;

int main() {

	//instance of Test object
	Test test;

	cout << "Starting LinkedList test!\n\n";
	test.testLinkedList();
	cout << "\nLinkedList test finished!\n";

	system("pause");
	return 0;
}