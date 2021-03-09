#pragma once
#include "BSTInterface.h"
#include "Node.h"

using namespace std;

class BST : public BSTInterface {
protected:
	Node *root, *left, *right;

public:
	BST();
	
	virtual ~BST(){clear();}

	Node* getRootNode() const{ return root;}

	bool add(int data);

	bool recursiveAdd(Node*& node, int data);

	bool remove(int data);

	bool recursiveRemove(Node*& root, int data);

	void replaceParent(Node*& temp, Node*& root);

	void clear();

};