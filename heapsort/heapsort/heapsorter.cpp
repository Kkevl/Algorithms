#include "heapsorter.h"
void heapsorter::heapsort(vector<int>& array)
{
	int heapsize = array.size(), tester = 0;
	buildmaxheap(array);

	cout << "start extracting max: \n";
	tester = heapextractmax(array);
	cout << "test : " << tester << endl;
	
	//for (int k = array.size()-1; k >= 1; k--)
	//{
	//	swap<int>(array[0],array[k]);
	//	heapsize--;
	//	maxheapify(array, 0, heapsize);//因為只換第一項，所以只switch 第一個
	//}

	cout << "end modifying: \n";
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
	cout << "after build:\n";
	printarray(array);
	cout << "ending\n";
	return;
}
void heapsorter::maxheapify(vector<int>& arraym, int i, int heapsize)
{
	int L = i*2+1, R = (i+1)*2, largest;
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
void heapsorter::printarray(vector<int>& array)
{
	for (int i = 0; i < array.size(); i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
	return;
}

int heapsorter::heapextractmax(vector<int>& arraye)
{
	if (arraye.size() < 1) {
		cout << "error! heap under flow!";
		return -1;
	}
	int max = arraye[0];
	swap<int>(arraye[0], arraye[arraye.size() - 1]);
	arraye.pop_back();
	maxheapify(arraye, 0, arraye.size());
	return max;
}

void heapsorter::maxheapinsert(vector<int>& arrayi, int key)
{
	arrayi.push_back(key);
	
}
