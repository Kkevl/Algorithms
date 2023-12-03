#pragma once
#include<iostream>
#include<vector>
#include "buildtree.h"
using namespace std;
class fixups
{
public:
	treenode* root;
	treenode* NIL;
	fixups(treenode* node, treenode* troot);
	void rightrotate(treenode* x); // x shuld be the node
	void leftrotate(treenode *x); // x shuld be the node
	void RBtransplant(treenode* u,treenode* v);
};

