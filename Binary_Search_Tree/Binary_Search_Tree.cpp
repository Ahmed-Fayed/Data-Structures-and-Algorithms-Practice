#include "Binary_Search_Tree.h"
#include <iostream>

Node* Binary_Search_Tree::search_node_bst(Node* root, int key)
{
	if (root == NULL || root->data == key) 
		return root;

	if (key < root->data)
		return search_node_bst(root->left, key);

	return search_node_bst(root->right, key);

}



Node* Binary_Search_Tree::insert_key_bst(Node* root, int key)
{
	// insert first node, if root is null
	if (root == NULL)
		return new Node(key);

	if (key < root->data)
		root->left = insert_key_bst(root->left, key);
	else
		root->right = insert_key_bst(root->right, key);

	return root;


}


void Binary_Search_Tree::bst_inorder_traversal(Node* root)
{
	if (root == NULL)
		return;

	bst_inorder_traversal(root->left);

	std::cout << root->data << " ";

	bst_inorder_traversal(root->right);
}








