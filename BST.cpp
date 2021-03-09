#include "BST.h"

BST::BST(){
	root = NULL;
}

bool BST::add(int data) {
	return recursiveAdd(root, data);
}

bool BST::recursiveAdd(Node*& root, int data) {
	//If Tree is empty
	if (root == NULL){
		root = new Node(data);
		return true;
	} 
	else {
		//Creating Node to the rigleftht of the tree	
		if (data < root->data)
			return recursiveAdd(root->left, data);
		//Creating node to the right of the tree
		else if (data > root->data)
			return recursiveAdd(root->right, data);
		//If data already exists
		else 
			return false;
	}

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

	int BST::replaceParent(Node*& temp, Node*& root){
		if(right->right != NULL)
			replaceParent(temp, root->right);
		else {
			temp->data = root->data;
			temp = root;
			root = root->left;
		}
	}

	bool BST::remove(int data){
		return recursiveRemove(root, data);
	}

	bool BST::recursiveRemove(Node*& root, int data){
		//If tree is empty
		if(root == NULL)
			return false;
		else{
			//Creating node to the left
			if(data < root->data)
				return recursiveRemove(root->left, data);
			//Creating node to the right	
			else if (data > root->data)
				return recursiveRemove(root->right, data);
			//Node found
			else {
				Node* temp = root;
				if(root->left == NULL)
					root = root->right;
				else if(root->right == NULL)
					root = root->left;
				else 
					replaceParent(temp, temp->left)	
				delete temp;
				return true;
			}	
		}
	}

	/*
	* Removes all nodes from the tree, resulting in an empty tree.
	*/
	void clear(){}
}

