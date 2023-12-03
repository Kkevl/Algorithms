#include "buildtree.h"
void buildtree::RBinsert(int z) {
	treenode *y = NIL;
	treenode *x = root;
	treenode *newnodez = new treenode();
	newnodez->number = z;
	while (x != NIL){
		y = x;
		if (z < x->number) x = x->leftchild;
		else x = x->rightchild;
	}
	newnodez->parent = y;
	if (y == NIL) {
		root = newnodez;
	}
	else if (z < y->number){
		y->leftchild = newnodez;
	}
	else{
		y->rightchild = newnodez;
	}
	newnodez->leftchild = NIL;
	newnodez->rightchild = NIL;
	newnodez->color = "red";
	RBinsertfixup(newnodez);
}

treenode* buildtree::tree_minimum(treenode* x){
	while (x->leftchild != NIL){
		x = x->leftchild;
	}
	return x;
}

void buildtree::RBinsertfixup(treenode *z) {
	fixups fixer(NIL,root);
	treenode* y;
	while (z->color == "red"){
		if (z->parent = z->parent->parent->leftchild){
			y = z->parent->parent->rightchild;
			if (y->color == "red"){
				z->parent->color = "black";
				y->color = "black";
				z->parent->parent->color = "red";
				z = z->parent->parent;
			}
			else {
				if (z == z->parent->rightchild) {
					z = z->parent;
					fixer.leftrotate(z);
					root = fixer.root; //refresh the root
				}
				z->parent->color = "black";
				z->parent->parent->color = "red";
				fixer.rightrotate(z->parent->parent);
				root = fixer.root; //refresh the root
			}
		}
		else{
			y = z->parent->parent->leftchild;
			if (y->color == "red") {
				z->parent->color = "black";
				y->color = "black";
				z->parent->parent->color = "red";
				z = z->parent->parent;
			}
			else {
				if (z == z->parent->leftchild) {
					z = z->parent;
					fixer.rightrotate(z);
					root = fixer.root; //refresh the root
				}
				z->parent->color = "black";
				z->parent->parent->color = "red";
				fixer.leftrotate(z->parent->parent);
				root = fixer.root; //refresh the root
			}
		}
	}
	root = fixer.root; //refresh the root
	root->color = "black";
}

void buildtree::RBdeleteion(treenode *z) {
	fixups fixer(NIL,root);
	treenode* y = z;
	treenode* x;
	string y_original_color = y->color;
	if (z->leftchild == NIL){
		x = z->rightchild;
		fixer.RBtransplant(z, z->rightchild);
		root = fixer.root; //refresh the root
	}
	else if (z->rightchild == NIL){
		x = z->leftchild;
		fixer.RBtransplant(z, z->leftchild);
		root = fixer.root; //refresh the root
	}
	else{
		y = tree_minimum(z->rightchild);
		y_original_color = y->color;
		x = y->rightchild;
		if (y->parent == z){
			x->parent = y;
		}
		else{
			fixer.RBtransplant(y, y->rightchild);
			root = fixer.root; //refresh the root
			y->rightchild = z->leftchild;
			y->rightchild->parent = y;
		}
		fixer.RBtransplant(z, y);
		root = fixer.root; //refresh the root
		y->leftchild = z->leftchild;
		y->leftchild->parent = y;
		y->color = z->color;
	}
	if (y_original_color == "black"){
		RBdeletionfixup(x);
	}
}

void buildtree::RBdeletionfixup(treenode *x) {
	fixups fixer(NIL,root);
	treenode* w;
	while ((x != root)&&(x->color == "black")){
		// case left
		if (x == x->parent->leftchild){
			w = x->parent->rightchild;
			//case 1
			if (w->color == "red"){
				w->color = "black";
				x->parent->color = "red";
				fixer.leftrotate(x->parent);
				root = fixer.root; //refresh the root
				w = x->parent->rightchild;
			}
			if ((w->leftchild->color == "black") && (w->rightchild->color == "black")) {
				w->color = "red";
				x = x->parent;
			}
			//case 3 (will convert to case 4)
			else{
				if (w->rightchild->color == "black") {
					w->leftchild->color = "black";
					w->color = "red";
					fixer.rightrotate(w);
					root = fixer.root; //refresh the root
					w = x->parent->rightchild;
				}
				w->color = x->parent->color;
				x->parent->color = "black";
				w->rightchild->color = "black";
				fixer.leftrotate(x->parent);
				root = fixer.root; //refresh the root
				x = root;
			}
		}
		else{
			w = x->parent->leftchild;
			//case 1
			if (w->color == "red") {
				w->color = "black";
				x->parent->color = "red";
				fixer.rightrotate(x->parent);
				root = fixer.root; //refresh the root
				w = x->parent->leftchild;
			}
			if ((w->rightchild->color == "black") && (w->leftchild->color == "black")) {
				w->color = "red";
				x = x->parent;
			}
			//case 3 (will convert to case 4)
			else {
				if (w->leftchild->color == "black") {
					w->rightchild->color = "black";
					w->color = "red";
					fixer.leftrotate(w);
					root = fixer.root; //refresh the root
					w = x->parent->leftchild;
				}
				w->color = x->parent->color;
				x->parent->color = "black";
				w->leftchild->color = "black";
				fixer.rightrotate(x->parent);
				root = fixer.root; //refresh the root
				x = root;
			}
		}
	}
	x->color = "black";
}
