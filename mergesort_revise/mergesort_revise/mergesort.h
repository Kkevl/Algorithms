#pragma once
#include <iostream>
#include <vector>
using namespace std;
class mergesort
{
public:
    void sorting(vector<int>& array, int start, int end);
    void printresult(vector<int>& array, int size);
    void printarray(vector<int>& arrray,int p,int r);
    void combine(vector<int>& array, int start, int end);
};
