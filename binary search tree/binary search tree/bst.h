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
	node(int key);
	~node();
	int keyvalue = 0;
	node<T>* parent;
	node<T>* left;
	node<T>* right;
private:
};

template<class T>
inline node<T>::node(int key){
	this->keyvalue = key;
	this->parent = NULL;
	this->left = NULL;
	this->right = NULL;
}

template<class T>
class bst
{
public:
	node<T>* root = NULL;// new node<T>(0);
	node<T>* temp = NULL;
	void indoortreewalk(node<T>* x);
	node<T>* treesearch(int requestkey);//	node<T>* iterativetreesearch(node<T>* x, int key);
	node<T>* treesuccessor(node<T>* x);
	node<T>* treemin(node<T>* x);
	void treeinsert(int z);

	void transplant(node<T>* u, node<T>* v);
	void treedelete(int del);
};

template<class T>
void bst<T>::indoortreewalk(node<T>* x)
{
	if (x != NULL) {
		indoortreewalk(x->left);
		cout << x->keyvalue << endl;
		indoortreewalk(x->right);
	}
	return;
}

template<class T>
inline node<T>* bst<T>::treesearch(int requestkey)
{
	node<T>* x = root;
	while (x == NULL || requestkey != x->keyvalue)
	{
		if (requestkey < x->keyvalue)
			x = x->left;
		else
			x = x->right;
	}
	return x;
}

template<class T>
node<T>* bst<T>::treesuccessor(node<T>* x)
{
	if (x->right != NULL)
		return treemin(x->right);
	else
	{
		node<T>* y = x->parent;
		while (y != NULL && x == y->right)
		{
			x = y;
			y = y->parent;
		}
		return y;
	}
}

template<class T>
node<T>* bst<T>::treemin(node<T>* x)
{
	while (x->left != NULL)
		x = x->left;
	return x;
}

template<class T>
void bst<T>::treeinsert(int newvalue)
{
	temp = new node<T>(newvalue);
	node<T>* z = temp;
	node<T>* y;
	y = NULL;
	node<T>* x = root;
	z->keyvalue = newvalue;
	while (x != NULL)
	{
		y = x;
		if (z->keyvalue<x->keyvalue)
			x = x->left;
		else x = x->right;
	}
	z->parent = y;
	// x is root and is null
	if (y == NULL)
		root = z;
	//
	else if (z->keyvalue < y->keyvalue)
		y->left = z;
	//
	else y->right = z;
	return;
}

template<class T>
void bst<T>::transplant(node<T>* u, node<T>* v)
{
	if (u->parent == NULL)
		root = v;
	else if (u == u->parent->left)
		u->parent->left = v;
	else
	{
		u->parent->right = v;
	}
	if (v != NULL)
		v->parent = u->parent;
	return;
}

template<class T>
void bst<T>::treedelete(int del)
{
	node<T>* z = treesearch(del);
	if (z->left == NULL)
		transplant(z, z->right);
	else if (z->right == NULL)
		transplant(z, z->left);
	else
	{
		node<T>* y = treemin(z->right);
		if (y->parent != z) {
			transplant(y, y->right);
			y->right = z->right;
			y->right->parent = y;
		}
		transplant(z, y);
		y->left = z->left;
		y->left->parent = y;
	}
	return;
}

