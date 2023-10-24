// binary search tree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"bst.h"
using namespace std;
int main()
{
    bst<int> tree;
    for (int i = 0; i < 8; i++)
    {
        tree.treeinsert(i);
    }
    tree.indoortreewalk(tree.root);
    return 0;
}

