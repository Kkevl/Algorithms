#include "radixsort.h"

void radixsort::sorter(vector<int>& array, int d)
{
	for (int i = 0; i < d; i++)
	{
		stablesorter(array);
	}
}

void radixsort::printarray(vector<int>& array)
{
	for (int i = 0; i < array.size(); i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

