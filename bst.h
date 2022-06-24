#ifndef BST_H
#define BST_H

#include <iostream>
#include<string>

class BST {
	int data;
		std::string s;
	BST *left, *right;

public:
	// Default constructor.
	BST();

	// Parameterized constructor.
	BST(int,std::string);

	// Insert function.
	BST* Insert(BST*, int,std::string);
	
	bool search(BST*, int, std::string);

};

#endif
