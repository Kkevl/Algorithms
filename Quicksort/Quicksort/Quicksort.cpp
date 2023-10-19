// Quicksort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "quicksorter.h"
using namespace std;
int main()
{
    int size = 6;
    vector<int> testarray = {6,5,4,3,2,1};
    time_t t = time(0);
    /*for (int i = 0; i < size; i++)
    {
        testarray[i] = (rand() + i)* t% size + i;
    }*/
    quicksorter quick;
    
    quick.printarray(testarray);
    quick.quicksort(testarray, 1, size - 1);

    cout << "aftersorting\n";
    quick.printarray(testarray);
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
