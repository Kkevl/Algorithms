#pragma once
#include<iostream>
#include<vector>
#include<chrono>
#include<ctime>
using namespace std;
class radixsort
{
public:
	void sorter(vector<int> &array,int d);
	void printarray(vector<int> &array);
	void stablesorter(vector<int> &array);
};

