#pragma once
#include <iostream>
#include<vector>
#include<ctime>
#include<random>
using namespace std;
class heapsorter
{
public:
	void heapsort(vector<int>& array);
	void buildmaxheap(vector<int>& array); //i is the largest number
	void maxheapify(vector<int>& arraym,int i,int heapsize);
	void printarray(vector<int>& array);
	int heapextractmax(vector<int>& arraye);
	void maxheapinsert(vector<int>& arrayi, int key);
};


