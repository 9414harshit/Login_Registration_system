#include "bst.h"
using namespace std;

BST ::BST()
	: data(0)
	, s("")
	, left(NULL)
	, right(NULL)
{
}
BST ::BST(int value, string s1)
{
	data = value;
	s=s1;
	left = right = NULL;
}

// Insert function definition.
BST* BST ::Insert(BST* root, int value,string s)
{
	if (!root) {
		// Insert the first node, if root is NULL.
		return new BST(value,s);
	}

	// Insert data.
	if (value > root->data) {
		// Insert right node data, if the 'value'
		// to be inserted is greater than 'root' node data.

		// Process right nodes.
		root->right = Insert(root->right, value,s);
	}
	else {
		// Insert left node data, if the 'value'
		// to be inserted is greater than 'root' node data.

		// Process left nodes.
		root->left = Insert(root->left, value,s);
	}

	// Return 'root' node, after insertion.
	return root;
}

bool BST ::search(BST* root, int value, std::string pass) {
	while(root != NULL) {
      if(root->data == value) {
      	if(pass=="") return 1;
      	if(root->s==pass) return 1;
        return 0;
      	} 
	  	else if(root->data > value)
        root = root->left;
        else
        root = root->right;
   }
   return 0;
}

// Inorder traversal function.
// This gives data in sorted order.


