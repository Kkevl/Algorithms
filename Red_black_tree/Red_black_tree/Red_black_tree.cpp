// Red_black_tree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include"buildtree.h"
int main(){
    buildtree RBtree;
    int treesize = 10;
    for (int i = 0; i < treesize; i++){
        RBtree.RBinsert(i);
    }
    // not finished
    return 0;
}

