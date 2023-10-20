#include "quicksorter.h"
using namespace std;
void quicksorter::quicksort(vector<int>& array, int p, int r)
{	
	if (p < r) {
		int q = partion(array, p, r);
		quicksort(array, p, q - 1);
		quicksort(array, q + 1, r);
	}
}

int quicksorter::partion(vector<int>& arrayp, int p, int r)
{
	int i = p - 1;
	int x = arrayp[r];
	for (int j = p; j < r; j++)
	{
		if (arrayp[j] <= x) {
			//i++;
			swap<int>(arrayp[++i], arrayp[j]);
		}
	}
	swap<int>(arrayp[++i], arrayp[r]); //r-1 ->r
	return i;
}

void quicksorter::printarray(vector<int> &array)
{
	for (int i = 0; i < array.size(); i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
	return;
}