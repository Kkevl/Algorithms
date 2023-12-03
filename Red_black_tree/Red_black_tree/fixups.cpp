#include "fixups.h"

fixups::fixups(treenode* node, treenode* troot){
	NIL = node;
	root = troot;
}

void fixups::rightrotate(treenode* x)
{
	treenode* y = x->leftchild;
	if (y->rightchild != NIL) {
		y->rightchild->parent = x;
	}
	y->parent = x->parent;
	if (x->parent == NIL) {
		root = y;
	}
	else if (x == x->parent->rightchild) {
		x->parent->rightchild = y;
	}
	else {
		x->parent->leftchild = y;
	}
	y->rightchild = x;
	x->parent = y;
}

void fixups::leftrotate(treenode* x)
{
	treenode* y = x->rightchild;
	if (y->leftchild != NIL){
		y->leftchild->parent = x;
	}
	y->parent = x->parent;
	if (x->parent == NIL){
		root = y;
	}
	else if(x == x->parent->leftchild){
		x->parent->leftchild = y;
	}
	else{
		x->parent->rightchild = y;
	}
	y->leftchild = x;
	x->parent = y;
}

void fixups::RBtransplant(treenode* u, treenode* v){
	if (u->parent == NIL){
		root = v;
	}
	else if(u == u->parent->leftchild){
		u->parent->leftchild = v;
	}
	else{
		u->parent->rightchild = v;
	}
	v->parent = u->parent;
}
