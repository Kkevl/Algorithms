#include "bucketsort.h"

void bucketsort::printarray(vector<int>& array)
{
	for (int i = 0; i < array.size(); i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
	return;
}

void bucketsort::sort(vector<int>& array)
{
	int n = array.size();
	int temp = 0, k = 0;
	vector<vector<int>> bucketvector(n);

	//<< bucketvector.size(); bucketvector[2].push_back(3); //check double vector's size is working
	/*for (int i = 0; i < bucketvector.size(); i++)
	{
		for (int j = 0; j <= bucketvector[i].size(); j++)
		{
			cout << i << "'s size = " << bucketvector[i].size() << endl;
		}
	}*/
	//setting complete
	for (int i = 0; i < n; i++)
	{
		bucketvector[floor(array[i])].push_back(array[i]);
	}
	for (int i = 0; i < n; i++)
	{
		//do insertion sort
		for (int j = 0; j < bucketvector[i].size(); j++)
		{
			for (int k = 0; k < j; k++)
			{
				if (bucketvector[i][k] > bucketvector[i][j]) {
					temp = bucketvector[i][j];
					bucketvector[i][j] = bucketvector[i][k];
					bucketvector[i][k] = temp;
				}
			}		
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < bucketvector[i].size(); j++)
		{
			temp = bucketvector[i][j];
			array[k++] = temp;
		}
	}
	cout << "after sorting: " << endl;
	printarray(array);
	return;
}
