//---------------------------------------------------------------------------

#ifndef StackH
#define StackH
//---------------------------------------------------------------------------
#include <vcl.h>
#include <vector>

struct Node
{
	int data;
	int key;
	Node* next = nullptr;
};

class Stack
{
public:
	Node* head;

	Stack()
	{
		head = nullptr;
	}

	void push(int key, int data);

	void pop();

	String show(std::vector<int> *count);

	bool contain(int key);

	void clear();
};
#endif
