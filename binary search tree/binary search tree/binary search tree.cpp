// binary search tree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"bst.h"
using namespace std;
int main()
{
    int size = 6+3;
    vector<int>testarray = {5,3,12,10,6,7,15,8,9};
    bst<int> tree;
    for (int i = 0; i < size; i++)
    {
        tree.treeinsert(testarray[i]);
    }
    tree.indoortreewalk(tree.root);
    tree.treedelete(9);
    cout << "after deletion: \n";
    tree.indoortreewalk(tree.root);
    cout << "righttreemin = ";
    cout << tree.treemin(tree.treesearch(12))->keyvalue;
    return 0;
}
