//---------------------------------------------------------------------------

#pragma hdrstop

#include "Stack.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

	void  Stack::push(int key, int data)
	{
		Node* item = new Node;
		item->key = key;
		item->data = data;

		if(!head)
		{
			head = item;
		}
		else
		{
			item->next = head;
			head = item;
		}
		item = nullptr;
		delete item;
	}

	void Stack::pop()
	{
		if(!head)
		{
			return;
		}

		Node* current = head;
		head = head->next;
		delete current;
		current = nullptr;
		return;
	}

	String Stack::show(std::vector<int> *count)
	{
		if(!head)
		{
			return "";
		}

		Node* current = head;
		String answer = "";

		for(int i = 0; current; i++)
		{
			if(i) answer += "-->";
			answer += current->data;
			answer += " ";
            count->push_back(current->data);
			current = current->next;
		}
        return answer;
	}

	bool Stack::contain(int key)
	{
		Node* current = head;

		while(current)
		{
			if(current->key == key)
				return true;
			else
				current = current->next;
		}

		return false;
	}

	void Stack::clear()
	{
        while(head) pop();
	}
