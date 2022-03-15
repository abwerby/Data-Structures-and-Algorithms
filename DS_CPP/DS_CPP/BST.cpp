#include "stdafx.h"
#include <iostream>
#include "BST.h"


void BSTree::insert(int new_data)
{
	root = this->insert(new_data, root);
}

BSTNode * BSTree::insert(int new_data, BSTNode * node)
{
	if (node == NULL)
	{
		BSTNode * new_node = new BSTNode(new_data);
		return new_node;
	}
	else if (new_data <= node->data)
	{
		node->left = this->insert(new_data, node->left);
	}
	else
	{
		node->right = this->insert(new_data, node->right);
	}
	return node;
}


bool BSTree::search(int data)
{
	return this->search(data, root);
}


bool BSTree::search(int data, BSTNode * node)
{
	if (node == NULL)
		return false;
	else if (data == node->data)
		return true;
	else if (data < node->data)
		return this->search(data, node->left);
	else
		return this->search(data, node->right);
}


