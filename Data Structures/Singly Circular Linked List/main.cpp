/* ********* SINGLY LINK LIST ********* */
#include<iostream>
using namespace std;
#include "list.cpp"
int main()
{
	list myLinkList;
	Node *ptr;
	
	// INSERTING VALUES IN AN EMPTY LIST
	myLinkList.insert(10);
	myLinkList.insert(20);
	myLinkList.insert(30);
	myLinkList.insert(40);

	// PRINTING THE LIST
	myLinkList.display();
	cout << endl;
	// PRINTING THE SIZE OF LIST
	cout << "Size of list is: " << myLinkList.getSize() << endl;
	cout << endl;

	// INSERTING A VALUE AT START OF LIST AND DISPLAYING THE LIST
	myLinkList.insertAtBegin(60);
	cout << "INSERTING '60' AT FRONT OF LIST." << endl;
	myLinkList.display();
	cout << endl;
	// PRINTING THE SIZE OF LIST
	cout << "Size of list is: " << myLinkList.getSize() << endl;
	cout << endl;

	// INSERTING A VALUE AT THE END OF LIST AND DISPLAYING THE LIST
	myLinkList.insertAtEnd(70);
	cout << "INSERTING '70' AT END OF LIST." << endl;
	myLinkList.display();
	cout << endl;
	// PRINTING THE SIZE OF LIST
	cout << "Size of list is: " << myLinkList.getSize() << endl;
	cout << endl;

	// INSERTING A VALUE AT GIVEN INDEX: 3 AND PRINTING THE LIST
	myLinkList.positionInsert(3);
	cout << "INSERTING AT POSITION '3' " << endl;
	myLinkList.display();
	cout << endl;
	// PRINTING THE SIZE OF LIST
	cout << "Size of list is: " << myLinkList.getSize() << endl;
	cout << endl;

	// INSERTING A VALUE AFTER GIVEN INDEX: 10 AND PRINTING THE LIST
	myLinkList.insertAfter(10);
	cout << "INSERTING '1' AFTER '10' " << endl;
	myLinkList.display();
	cout << endl;
	// PRINTING THE SIZE OF LIST
	cout << "Size of list is: " << myLinkList.getSize() << endl;
	cout << endl;
	
	// POINTING IN START OF LIST
	myLinkList.start();
	// MOVING POINTER OVER 2 NODES
	myLinkList.move();
	myLinkList.move();
	// UPDATING THE VALUE AT CURRENT NODE TP 1234 AND DISPLAYING
	myLinkList.update(1234);
	myLinkList.display();
	cout << endl;
	// PRINTING THE SIZE OF LIST
	cout << "Size of list is: " << myLinkList.getSize() << endl;
	cout << endl;

	// DELETING VALUE AT INDEX 3 AND PRINTING
	myLinkList.deleteNode(3);
	myLinkList.start();
	myLinkList.display();
	cout << endl;
	// PRINTING THE SIZE OF LIST
	cout << "Size of list is: " << myLinkList.getSize() << endl;
	cout << endl;

	// DELETING VALUE AT INDEX 1 AND PRINTING
	myLinkList.deleteNode(1);
	myLinkList.start();
	myLinkList.display();
	cout << endl;
	// PRINTING THE SIZE OF LIST
	cout << "Size of list is: " << myLinkList.getSize() << endl;
	cout << endl;

	// PRINTING SUM OF ALL THE NODE VALUES IN LIST
	cout << "Sum of nodes is: " << myLinkList.sumNode() << endl;
	cout << endl;
	
	system("pause");
	return 0;
}