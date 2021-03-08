#pragma once
#include "NodeInterface.h"
#include <iostream>


class Node : public NodeInterface {
public:
	int value;
	Node* left;
	Node* right;

	Node (const int &theValue, 
		Node* leftVal = NULL, 
		Node* rightVal =  NULL) :
		value(theValue), left(leftVal), right(rightVal){}

	 ~Node(){}
	/*
	* Returns the data that is stored in this node
	*
	* @return the data that is stored in this node.
	*/
	int getData() const;

	/*
	* Returns the left child of this node or null if it doesn't have one.
	*
	* @return the left child of this node or null if it doesn't have one.
	*/
	NodeInterface * getLeftChild() const;

	/*
	* Returns the right child of this node or null if it doesn't have one.
	*
	* @return the right child of this node or null if it doesn't have one.
	*/
	NodeInterface * getRightChild() const;

	
};