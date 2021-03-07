#include "BST.h"
#include "Node.h"

bool BST::add(int data) {
	    cout << "add"<<endl;
	    Node *ptr = new Node(data);
	    ptr->leftChild = NULL; // To test that the friend relationship works
	    NodeInterface *rval = ptr->getLeftChild();
	    long value = (long)rval;
	    cout << "Added "<<value<<endl;
	    root = ptr;
	}