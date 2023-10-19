#pragma once
#include<iostream>
#include<vector>
#include<chrono>
#include<ctime>
using namespace std;
class quicksorter
{
public:
	void quicksort(vector<int> &array, int p, int r);
	void printarray(vector<int> &array);
	int partion(vector<int> &arrayp, int p, int r);
};


