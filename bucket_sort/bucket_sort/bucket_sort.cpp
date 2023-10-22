// bucket_sort.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include"bucketsort.h"
int main()
{
	int size = 14;
	vector<int> testarray(size);
	time_t t = time(0);
	for (int i = 0; i < size; i++)
	{
		testarray[i] = (rand()*i + i)* t% size;
	}
	bucketsort sorter;
	cout << "before sorting :" << endl;
	sorter.printarray(testarray);
	sorter.sort(testarray);
	return 0;
}

