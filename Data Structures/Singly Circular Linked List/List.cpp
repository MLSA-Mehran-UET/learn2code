// CNODE PROGRAM "MAIN"

#include<iostream>
using namespace std;
#include "Node.cpp"
class list
{
	Node *headNode;
	Node *currentNode;
	Node *lastCurrentNode;
	Node *tailNode;
	int size;
public:
	// DEFAULT CONSTRUCTOR
	list()		
	{
		headNode = 0;
		currentNode = 0;
		lastCurrentNode = 0;
		tailNode = 0;
		size = 0;
	}

	// FUNTION TO INSERT INT VALUE IN LIST
	void insert(int n)		
	{
		if (currentNode != 0)
		{
			if (currentNode->getNextNode() == 0)
			{
				// CREATING A NEW NODE AND ADDING VALUE IN LIST AND INCREASING LIST'S SIZE
				Node *newNode = new Node();			
				lastCurrentNode = currentNode;
				currentNode->setNextNode(newNode);
				currentNode = newNode;
				currentNode->setValue(n);
				currentNode->setNextNode(0);
				size++;
			}
			else
			{
				Node *newNode = new Node();
				newNode->setNextNode(currentNode->getNextNode());
				currentNode->setNextNode(newNode);
				lastCurrentNode = currentNode;
				currentNode = newNode;
				currentNode->setValue(n);
				size++;
			}

		}
		else
		{
			Node *newNode = new Node();		//ADDRESS STORED IN NEW NODE
			headNode = newNode;
			currentNode = headNode;
			currentNode->setValue(n);
			currentNode->setNextNode(0);
			size++;
		}

	}
	//FUNTION THAT MOVES POINTER TO HEAD
	void start()		
	{
		lastCurrentNode = 0;
		currentNode = headNode;
	}
	//FUNTION THAT MOVES POINTER TO NEXT NODE
	void move()
	{
		lastCurrentNode = currentNode;
		currentNode = currentNode->getNextNode();
	}
	//FUNTION THAT RETURNS CURRENT NODES VALUE
	int get()
	{
		return currentNode->getValue();
	}
	//FUNTION THAT RETURNS SIZE OF LIST
	int getSize()
	{
		return size;
	}
	//FUNTION THAT INSERTS VALUE AT START OF LIST
	void insertAtBegin(int n)
	{
		Node *newNode = new Node();
		newNode->setNextNode(headNode);
		headNode = newNode;
		currentNode = headNode;
		lastCurrentNode = 0;
		currentNode->setValue(n);
		size++;
	}
	//FUNTION THAT INSERTS VALUE AT END OF LIST
	void insertAtEnd(int n)
	{
		for (int i = 0; i < (getSize() - 1); i++)
		{
			move();
		}
		Node *newNode = new Node();			// 1. CREATE NODE
		lastCurrentNode = currentNode;
		currentNode->setNextNode(newNode);
		currentNode = newNode;
		currentNode->setValue(n);
		currentNode->setNextNode(0);
		size++;
	}
	//FUNTION THAT INSERTS VALUE AT THE CURRENT NODES INDEX
	void update(int n)
	{
		currentNode->setValue(n);
	}
	//FUNTION THAT PRINTS THE LIST
	void display()
	{
		Node *temp;
		temp = headNode;
		cout << endl;
		while (temp)
		{
			cout << temp->getValue()<<" ";
			temp = temp->getNextNode();
		}
	}
	//FUNTION THAT DELETES GIVEN VALUE FROM LIST
	void deleteNode(int n)
	{
		start();
		Node *newNode = new Node();

		if (n == 1)
		{
			move();
			newNode = headNode;
			delete headNode;
			headNode = currentNode;
			lastCurrentNode = 0;
			cout << "First node deleted!" << endl;
		}
		else
		{
			for (int i = 1; i < n; i++)
			{
				move();
			}
			lastCurrentNode->setNextNode(currentNode->getNextNode());
			delete currentNode;
			//headNode = lastCurrentNode;
			currentNode = lastCurrentNode;
		}
		size--;
	}
	//FUNTION THAT SEARCHES IF THE LIST HAS DESIRED VALUE IN IT OR NOT
	Node* searchNode(int n)
	{
		if (currentNode == 0)
		{
			cout << "The list is EMPTY!" << endl;
		}
		else
		{
			for (int i = 0; i < (getSize() - 1); i++)
			{
				if (n == get())
				{
					move();
					return currentNode->getNextNode();
				}
			}
		}

	}
	//FUNTION THAT SUMS ALL THE VALUES OF LIST
	int sumNode()
	{
		int sum = 0;
		for (int i = 0; i < getSize(); i++)
		{
			sum = sum + get();
			move();
		}
		return sum;
	}
	//FUNTION THAT INSERTS VALUE AFTER A CERTAIN VALUE
	void insertAfter(int n)
	{
		start();
		for (int i = 0; i < getSize(); i++)
		{
			if (n == get())
			{
				insert(1);
				break;
			}
			move();
		}
	}
	//FUNTION THAT INSERTS VALUE AT THE GIVEN INDEX
	void positionInsert(int n)
	{
		start();
		for (int i = 1; i < (n - 1); i++)
		{
			move();
		}
		insert(132);
	}
	void singlyCircularLinlList()
	{
		//tailNode->setNextNode = headNode;

	}
};