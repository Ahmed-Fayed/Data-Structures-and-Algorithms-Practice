#pragma once
#include <cstddef>


struct Node
{
	int data;
	Node* left;
	Node* right;

	Node()
		: data(0)
		, left(NULL)
		, right(NULL)
	{

	}

	Node(int d)
	{
		data = d;
		left = NULL;
		right = NULL;
	}

};

class Binary_Search_Tree
{

public:

	Node* search_node_bst(Node* root, int key);

	Node* insert_key_bst(Node* root, int key);

	void bst_inorder_traversal(Node* root);


};

