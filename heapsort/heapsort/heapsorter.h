#pragma once
#include <iostream>
#include<vector>
#include<ctime>
using namespace std;
class heapsorter
{
public:
	void heapsort(vector<int> array);
	void buildmaxheap(vector<int> &array); //i is the largest number
	void maxheapify(vector<int>& arraym,int i,int heapsize);
	void printarray(vector<int> &array);

};


