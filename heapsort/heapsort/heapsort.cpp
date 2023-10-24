#include "heapsorter.h"
int main(){
    int size = 10 , tester = 0;
    vector<int> testarray(size); // = { 1,2,3,4,5 };
    time_t t = time(0);
    for (int i = 0; i < size; i++)
    {
        testarray[i] = (rand() + i) * t % size + i;
    }
    heapsorter heaper;
    heaper.printarray(testarray);
    heaper.heapsort(testarray);
    //tester = heaper.heapextractmax(testarray);
    //cout << "test : " << tester << endl;
    //heaper.printarray(testarray);
    return 0;
}

