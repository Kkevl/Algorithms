#pragma once
#include<iostream>
#include<vector>
#include<chrono>
#include<ctime>
using namespace std;
template<class T>
class node
{
public:
	node();
	~node();
	int keyvalue = NULL;
	node<T>* parent = NULL;
	node<T>* self = NULL;
	node<T>* left = NULL;
	node<T>* right = NULL;
private:
};
template<class T>
class bst
{
public:
	node<T>* root = NULL;
	void indoortreewalk(node<T>* x);
	node<T>* treesearch(node<T>* x,int requestkey);//	node<T>* iterativetreesearch(node<T>* x, int key);
	node<T>* treesuccessor(node<T>* x);
	node<T>* treemin(node<T>* x);
	void treeinsert(int z);

	void transplant(node<T>* u, node<T>* v);
	void treedelete(node<T>* z);
};
