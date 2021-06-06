//---------------------------------------------------------------------------

#pragma hdrstop

#include "HashTable.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

	void HashTable::add(int key, int data)
	{
		int n = GetHash(key);

		if(!array[n].contain(key))
		{
			array[n].push(key, data);
		}
	}

	void HashTable::remove(int index)
	{
		if(index > size)
		{
			return;
		}

		array[index].pop();
	}

	String HashTable::show(int n)
	{
		return array[n].show(&count);
	}

	String HashTable::task()
	{
		int sred = 0;
		for(int i = 0; i < count.size(); i++)
		{
			sred += count[i];
		}

		sred /= count.size();

		int counter = 0;
		for(int i = 0; i < count.size(); i++)
		{
			if(count[i] <= sred)
			{
				counter++;
			}
		}

		String temp = "Sred is: " + IntToStr(sred) + " answer is: " + IntToStr(counter);
		return temp;
	}

	void HashTable::clear()
	{
		for(int i = 0; i < size; i++)
			array[i].clear();
	}

	int HashTable::GetHash(int key)
	{
		return key % size;
	}
