#include <iostream>
//#include "Binary_Tree.h"
#include <stack>

using namespace std;

struct Node
{
	int data;
	Node* left;
	Node* right;

	Node(int d)
	{
		data = d;
		left = NULL;
		right = NULL;
	}
};


void InOrderTraversalStack(Node* root)
{
	Node* curr = root;
	stack<Node*> st;

	while (curr != NULL || st.empty() == false)
	{
		/* Reach the left most Node of the
		   curr Node */
		while (curr != NULL)
		{
			st.push(curr);
			curr = curr->left;
		}

		curr = st.top();
		cout << curr->data << " ";
		st.pop();

		curr = curr->right;
	}

}


// left, root, right
void InOrderTraversal(Node* node)
{
	if (node == NULL)
		return;

	InOrderTraversal(node->left);

	cout << node->data << " ";

	InOrderTraversal(node->right);
}

// root, left, right
void PreOrderTraversal(Node* node)
{
	if (node == NULL)
		return;

	cout << node->data << " ";

	PreOrderTraversal(node->left);

	PreOrderTraversal(node->right);
}

// Left, right, root
void PostOrderTraversal(Node* node)
{
	if (node == NULL)
		return;

	PostOrderTraversal(node->left);

	PostOrderTraversal(node->right);

	cout << node->data << " ";
}



int main()
{
	cout << "HI Binary Tree!" << endl;

	Node* root = new Node(1);

	root->left = new Node(2);
	root->right = new Node(3);

	root->left->left = new Node(4);
	root->left->right = new Node(5);

	cout << " ===> InOrder Traversal of binary tree: ";
	InOrderTraversal(root);
	cout << endl;

	cout << " ===> PreOredr Tranversal of binary tree: ";
	PreOrderTraversal(root);
	cout << endl;

	cout << " ===> PostOredr Tranversal of binary tree: ";
	PostOrderTraversal(root);
	cout << endl;

	cout << " ===> InOrder Traversal Stack of binary tree: ";
	InOrderTraversalStack(root);
	cout << endl;

}