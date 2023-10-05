#include "mergesort.h"
#include<random>
using namespace std;
int main(){
    int size = 5;
    vector<int> randomarray = {1,2,3,4,5};//(size);
    cout<<"random array: ";
    for (int i = 0; i < size; i++)
    {
        randomarray[i] = i+1;//rand() % size;
        cout<<randomarray[i]<<" ";
    }
    
    cout << "\n";
    mergesort sorter;
    sorter.printresult(randomarray,size);
    return 0;
}
