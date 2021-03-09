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
}

	//It stops when we find the right most child  (A node with no right child)
	//We could've also found the min in the right sub-tree (when going to the right, it would be the first node without left value)
	void BST::replaceParent(Node*& temp, Node*& root){
		//If the let child of the node to be deleted has a right subtree, we recursively call the function, 
		//leaving temp referencing the node containing the item to be removed and root referencing the current root's right child
		if(root->right != NULL)
			replaceParent(temp, root->right);
		else {
			//copies left child's data into the temp data
			temp->data = root->data;
			//Changes temp to point to the left child
			temp = root;
			//resets local node's left branch to reference its left child's left subtree
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
			//Going to the left
			if(data < root->data)
				return recursiveRemove(root->left, data);
			//Going to the right
			else if (data > root->data)
				return recursiveRemove(root->right, data);
			//The item is in the local root
			else {
				Node* temp = root;
				//If the node doesn't have a lesser child
				if(root->left == NULL)
					root = root->right;
				//If the node doesn't have a higher child
				else if(root->right == NULL)
					root = root->left;
				//If node has both children	
				else 
					replaceParent(temp, temp->left);	
				delete temp;
				return true;
			}	
		}
	}

	/*
	* Removes all nodes from the tree, resulting in an empty tree.
	*/
	void BST::clear(){
		while(root != NULL){
			remove(root->data);
		}
	}


