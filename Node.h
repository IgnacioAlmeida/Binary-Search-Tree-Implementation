#pragma once
#include "NodeInterface.h"
#include <iostream>


class Node : public NodeInterface {
protected:
	
public:
	int data;
	Node* left;
	Node* right;
	
	Node(const int &theData, 
		Node* leftVal = NULL, 
		Node* rightVal =  NULL) :
		data(theData), left(leftVal), right(rightVal){}

	virtual ~Node() {}
	/*
	* Returns the data that is stored in this node
	*
	* @return the data that is stored in this node.
	*/
	int getData() const {return data;}

	/*
	* Returns the left child of this node or null if it doesn't have one.
	*
	* @return the left child of this node or null if it doesn't have one.
	*/
	Node* getLeftChild() const {return left;}

	/*
	* Returns the right child of this node or null if it doesn't have one.
	*
	* @return the right child of this node or null if it doesn't have one.
	*/
	Node* getRightChild() const {return right;}

	
};