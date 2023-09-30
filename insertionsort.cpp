#include<iostream>
#include<random>
using namespace std;
void change(int &x,int &y){
    int buffer;
    buffer = x;
    x = y;
    y = buffer;
}
void insertionsort(vector<int> &array,int size){
    int key = 0;
    for (int i = 0; i < size; i++)
    {
        key = array[i];
        for (int j = 0; j < i; j++)
        {
            if (key > array[j])
            {
                change(array[i],array[j]);
            }
        }
    }       
}
int main(){
    int size = 10;//,key = 0;
    vector<int> array(size);
    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % size;
        printf("%d",array[i]);
        cout<<" ";
    }
    /*for (int i = 0; i < size; i++)
    {
        key = array[i];
        for (int j = 0; j < i; j++)
        {
            if (key > array[j])
            {
                change(array[i],array[j]);
            }
        }
    }*/
    insertionsort(array,size);
    printf("\nafter:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d",array[i]);
        cout<<" ";
    }
    
    return 0;
}