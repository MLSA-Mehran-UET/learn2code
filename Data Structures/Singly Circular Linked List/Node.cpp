// CNODE PROGRAM CLASS "NODE"

class Node
{
	int value;
	Node *nextnode;			// POINTER OF SAME CLASS TYPE
public:
	// function that sets value
	void setValue(int v)
	{
		value = v;
	}
	// function that moves pointer to next node
	void setNextNode(Node *nn)
	{
		nextnode = nn;
	}
	// function that returns value where pointer is pointing
	int getValue()
	{
		return value;
	}
	// function that returns next node
	Node *getNextNode()
	{
		return nextnode;
	}
};
