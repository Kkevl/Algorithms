#ifndef MERGESORT_H
#define MERGESORT_H

#include <iostream>
#include <vector>
using namespace std;
class mergesort
{
public:
    void sorting(vector<int> &array,int start,int end);
    void printresult(vector<int> &array,int size);
    void printarray(vector<int> &arrray);
    void combine(vector<int> &array,int size);
};

void mergesort::combine(vector<int> &array,int size){
    for (int i = 0; i < size; i++)
    {
        cout<<"i = "<<i<<"num: "<<array[i]<<"  ";
    }    // cout<<"ooo\n";
}

void mergesort::printarray(vector<int> &array){
    cout<<"\nprintarray: ";
    for (int i = 0; i < array.size(); i++)
    {
        cout<<"i = "<<i<<"|num: "<<array[i]<<"  ";
    }    
}
void mergesort::sorting(vector<int> &array,int start,int end){
    int size = end - start;
    cout<<"start = "<<start<<"\tend = "<<end<<"\tsize = "<<size;
    // if(size<0)
    // {
    //     cout<<"start = "<<start<<"\tend = "<<end<<"\tsize = "<<size;
    //     cout<<"size in to 0!!";
    //     system("pause");
    // }
    
    if(size>1){
        vector<int> leftarray(size/2),rightarray(size/2+1);
        for (int i = 0; i < size/2+1; i++)
        {
            leftarray[i] = array[i];
        }
        cout<<"\nleft :";
        printarray(leftarray);
        for (int i = size/2; i < size; i++)
        {
            rightarray[i - size/2 - 1] = array[i];
        }
        cout<<"\nright :";
        printarray(rightarray);

        cout<<"\nstart left path:\n";
        sorting(leftarray,start,size/2);
        cout<<"\nstart right path:\n";
        sorting(rightarray,size/2,end);
    }
    // combine(array,size);
    return;
}

void mergesort::printresult(vector<int> &array,int size){
    sorting(array,0,size-1);
    cout<<"end sorting:\n";
    for(int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    return;
}
#endif
/*#ifndef MERGESORT_H
#define MERGESORT_H

#include <vector>

class mergesort {
public:
    void sorting(std::vector<int> &array, int size);
    void printresult(std::vector<int> &array, int size);
};

#endif
*/