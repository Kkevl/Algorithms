#include <iostream>
#include <vector>
#include <random>
#include "heapsorter.h"
using namespace std;
int main(){
    int size = 10;
    vector<int> testarray(size); // = { 1,2,3,4,5 };
    time_t t = time(0);
    //cout << t;
    for (int i = 0; i < size; i++)
    {
        testarray[i] = (rand() + i) * t % size + i;
    }
    //swap<int>(testarray[2], testarray[4]); //test for swap works
    heapsorter heaper;
    heaper.printarray(testarray);
    heaper.heapsort(testarray);
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
