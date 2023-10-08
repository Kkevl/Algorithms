#include "mergesort.h"

void mergesort::combine(vector<int>& array, int start,int end) {
    
    int n1 = (end + start) / 2 - start + 1;
    int n2 = end - (end + start) / 2;
    int leftcounter = 0, rightcounter = 0;
    vector<int> leftarray(n1 + 1), rightarray(n2 + 1);
    for (int i = 0; i < n1; i++)
    {
        leftarray[i] = array[start + i];
    }
    for (int i = 0; i < n2; i++)
    {
        rightarray[i] = array[(start + end) / 2 + i + 1];
    }
    leftarray[n1] = INT_MAX;
    rightarray[n2] = INT_MAX;
    for (int  i = start; i <= end; i++)
    {
        if (leftarray[leftcounter] <= rightarray[rightcounter]) {
            array[i] = leftarray[leftcounter++];
            //leftcounter++;
        }
        else
        {
            array[i] = rightarray[rightcounter++];
        }
    }
    return;
}
//for debug use
void mergesort::printarray(vector<int>& array,int p,int q) {
    cout << "\nprintarray: " << endl;
    for (int i = p; i <= q; i++)
    {
        cout << "  i = " << i << "|num: " << array[i] << "\n";
    }
    //cout << endl;
}

void mergesort::sorting(vector<int>& array, int start, int end)
{
    //printarray(array, start, end);    //debug use;
    if (start >= end) return;

    int key= (start + end) / 2;
    sorting(array, start, key);
    sorting(array, key + 1, end);
    combine(array, start, end);
    cout << "\n";
    printarray(array,start, end);
    return;
}

void mergesort::printresult(vector<int>& array, int size) {
    sorting(array, 0, size - 1);
    cout << "end sorting:\n";
    //printarray(array, 0, size);
    return;
}
