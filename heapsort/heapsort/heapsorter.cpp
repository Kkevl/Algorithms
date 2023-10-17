#include "heapsorter.h"
using namespace std;
void heapsorter::heapsort(vector<int> array)
{
	int heapsize = array.size();
	buildmaxheap(array);
	for (int k = array.size()-1; k >= 1; k--)
	{
		swap<int>(array[0],array[k]);
		heapsize--;
		maxheapify(array, 0, heapsize);//因為只換第一項，所以只switch 第一個
	}
	printarray(array);
	return;
}
void heapsorter::buildmaxheap(vector<int>& array)
{
	int heapsize = array.size();
	for (int j = floor(heapsize/2)-1; j >= 0; j--)
	{
		maxheapify(array, j, heapsize);
	}
	return;
}
void heapsorter::maxheapify(vector<int>& arraym, int i, int heapsize)
{
	int L = i*2+1, R = (i+1)*2, largest;// = i;
	//check left
	if (L < heapsize && arraym[i] < arraym[L])
		largest = L;
	else largest = i;
	if (R < heapsize && arraym[largest] < arraym[R])
		largest = R;
	if (largest != i)
	{
		swap<int>(arraym[i], arraym[largest]);
		maxheapify(arraym,largest,heapsize);
	}
	return;
}
void heapsorter::printarray(vector<int> &array)
{
	for (int i = 0; i < array.size(); i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
	return;
}
