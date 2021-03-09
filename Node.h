#pragma once
#include "NodeInterface.h"
#include <iostream>

class Node : public NodeInterface {
public:
	int data;
	Node* left;
	Node* right;
	
	Node(const int &theData, Node* leftVal = NULL, Node* rightVal =  NULL) :
		data(theData), left(leftVal), right(rightVal){}

	virtual ~Node() {}

	int getData() const;

	Node* getLeftChild() const;

	Node* getRightChild() const;
};