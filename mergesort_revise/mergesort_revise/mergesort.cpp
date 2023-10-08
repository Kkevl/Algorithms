#include <iostream>
#include "mergesort.h"
#include<random>
using namespace std;
int main() {
    int size = 8;
    vector<int> randomarray(size);// = {1,2,5,6,3,4,7,8};//(size);
    cout << "random array: ";
    for (int i = 0; i < size; i++)
    {
        randomarray[i] = (rand()*3+rand()*6) % size;
        cout << randomarray[i] << " ";
    }
    mergesort sorter;
    sorter.printresult(randomarray, size);
    cout << "\n";
    return 0;
}




