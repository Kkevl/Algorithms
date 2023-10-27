#include "bst.h"


//template<class T>
//void bst<T>::indoortreewalk(node<T>* x)
//{
//	if (x != NULL) {
//		indoortreewalk(x->left);
//		cout << x->keyvalue<<endl;
//		indoortreewalk(x->right);
//	}
//	return;
//}
//template<class T>
//inline node<T>* bst<T>::treesearch(node<T>* x, int requestkey)
//{
//	while (x == NULL||requestkey != x->keyvalue)
//	{
//		if (requestkey < x->keyvalue)
//			x = x->left;
//		else
//			x = x->right;
//	}
//	return x;
//}
//
//template<class T>
//node<T>* bst<T>::treesuccessor(node<T>* x)
//{
//	if (x->right != NULL)
//		return treemin(x->right);
//	else
//	{
//		node<T>* y = x->parent;
//		while (y != NULL && x == y->right)
//		{
//			x = y;
//			y = y->parent;
//		}
//		return y;
//	}
//}
//
//template<class T>
//node<T>* bst<T>::treemin(node<T>* x)
//{
//	while (x->left != NULL)
//		x = x->left;
//	return x;
////}
//template<class T>
//void bst<T>::treeinsert(int newvalue)
//{
//	node<T>* z;// = new node<T>;
//	z = new node<T>;
//	node<T>* y;
//	y = new node<T>;
//	node<T>* x = root;
//	z->keyvalue = newvalue;
//	while (x != NULL)
//	{
//		y = x;
//		if (z->keyvalue)
//			x = x->left;
//		else x = x->right;
//	}
//	// x is root and is null
//	if (y == NULL)
//		root = z;
//	//
//	else if (z->keyvalue < y->keyvalue)
//		y->left = z;
//	//
//	else y->right = z;
//	return;
//}
//
//template<class T>
//void bst<T>::transplant(node<T>* u, node<T>* v)
//{
//	if (u->parent == NULL)
//		root = v;
//	else if (u == u->parent->left)
//		u->parent->left = v;
//	else
//	{
//		u->parent->right = v;
//	}
//	if (v != NULL)
//		v->parent = u->parent;
//	return;
//}
//
//template<class T>
//void bst<T>::treedelete(node<T>* z)
//{
//	if (z->left == NULL)
//		transplant(z, z->right);
//	else if (z->right == NULL)
//		transplant(z, z->left);
//	else
//	{
//		node<T>* y = treemin(z->right);
//		if (y->parent != z) {
//			transplant(y, y->right);
//			y->right = z->right;
//			y->right->parent = y;
//		}
//		transplant(z, y);
//		y->left = z->left;
//		y->left->parent - y;
//	} 
//	return;
//}
