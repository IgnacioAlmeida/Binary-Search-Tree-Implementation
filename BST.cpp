#include "BST.h"


bool BST::add(int data) {
	    cout << "add"<<endl;
	    Node *ptr = new Node(data);
	    ptr->left = NULL; // To test that the friend relationship works
	    NodeInterface *rval = ptr->getLeftChild();
	    long value = (long)rval;
	    cout << "Added "<<value<<endl;
	    root = ptr;
	}