#include "countingsort.h"
void countingsort::sorter(vector<int> &array1, vector<int> &array2, int k)
{
	vector<int> temparray(k);
	for (int i = 0; i < k; i++)
	{
		temparray[i] = 0;
	}
	for (int j = 0; j < array1.size(); j++)
	{
		temparray[array1[j]-1]++;
	}
	for (int i = 1; i < k; i++)
	{
		temparray[i] = temparray[i] + temparray[i - 1];
	}
	for (int i = 0; i < array1.size(); i++)
	{
		array2[temparray[array1[i]-1]-1] = array1[i];
		temparray[array1[i]-1]--;
	}
	return;
}

void countingsort::printarray(vector<int> &array)
{
	for (int i = 0; i < array.size(); i++)
	{
		cout << array[i]<<" ";
	}
	cout << endl;
}
