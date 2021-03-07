#pragma once
#include "NodeInterface.h"
#include <iostream>

template<typename T>

class Node : public NodeInterface {
protected:
	T data;
	Node<T>* left;
	Node<T>* right;

public:
	Node (const T & theData, 
		Node<T>* leftVal = NULL, 
		Node<T>* rightVal =  NULL) :
		data(theData), left(leftVal), right(rightVal){}

	virtual ~Node();
	/*
	* Returns the data that is stored in this node
	*
	* @return the data that is stored in this node.
	*/
	virtual int getData() const;

	/*
	* Returns the left child of this node or null if it doesn't have one.
	*
	* @return the left child of this node or null if it doesn't have one.
	*/
	virtual NodeInterface * getLeftChild() const;

	/*
	* Returns the right child of this node or null if it doesn't have one.
	*
	* @return the right child of this node or null if it doesn't have one.
	*/
	virtual NodeInterface * getRightChild() const;

};