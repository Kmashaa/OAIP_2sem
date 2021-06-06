//---------------------------------------------------------------------------
#ifndef HashTableH
#define HashTableH
#include "Stack.h"
//---------------------------------------------------------------------------
class HashTable
{
public:
	std::vector<int> count;
	int size = 0;
	Stack *array;

	HashTable()
	{
		array = new Stack[10];
		size = 10;
	}

	void add(int key, int data);

	void remove(int index);

	String show(int n);

	String task();

	void clear();

	int GetHash(int key);
};
#endif
