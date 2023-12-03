#pragma once
#include<iostream>
#include<vector>
#pragma once
#include"fixups.h"
using namespace std;
struct treenode
{
	string color = "black";
	int number = 0;
	treenode* parent;
	treenode* leftchild;
	treenode* rightchild;
};
class buildtree
{
public:
	treenode *root = new treenode();
	treenode *NIL = new treenode();
	void RBinsert(int z);
	treenode* tree_minimum(treenode* x);
	void RBinsertfixup(treenode* z);
	void RBdeleteion(treenode* z);
	void RBdeletionfixup(treenode* x);
};

