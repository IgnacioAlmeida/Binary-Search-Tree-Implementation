#pragma once
#include "BSTInterface.h"
#include "Node.h"

using namespace std;

class BST : public BSTInterface {
protected:
	Node *root, *left, *right;
public:
	BST();
	virtual ~BST(){}

	Node* getRootNode() const{ return root;}

	bool search(Node, int data){
		//1. If node is NULL - Return false
		//2. if node.value == value - return true
		//3. If value < node.value - Return search(node.left, value)
		//4. If value > node.value - Return search(Node.right, value)
		return false;
	}

	bool add(int data);

	bool recursiveAdd(Node*& node, int data);

	/*
	* Attempts to remove the given int from the BST tree
	*
	* @return true if successfully removed
	* @return false if remove is unsuccessful(i.e. the int is not in the tree)
	*/
	/*
	1. If node is NULL, return false 
	2. If data < node->data, return delete(node->left, data) 
	3. If data > node->data, return delete(node->right, data)
	4. If node has no children, delete node, node = NULL, return true
	5. if Node has 1 child, temp = node->(left or right), delete node, node = temp, return true
	6. Exchange node->data with in_order_predecessor->data
	7. return delete(node->left, data)
	*/ 
	bool remove(int data){
		return recursiveRemove(root, data);
	}
	bool recursiveRemove(Node*& root, int data){
		return false;
	}

	/*
	* Removes all nodes from the tree, resulting in an empty tree.
	*/
	void clear(){}

};