#pragma once


class BSTNode 
{
public:
	BSTNode(): data(0), left(NULL), right(NULL)
	{

	}

	BSTNode(int new_data) : data(new_data), left(NULL), right(NULL)
	{

	}

	int data;
	BSTNode * left;
	BSTNode * right;
};



class BSTree
{
public:

	BSTree(): root(NULL)
	{

	}

	void insert(int new_data);
	bool search(int data);
	void pre_order();
	void delete_node();

private:
	BSTNode * insert(int new_data, BSTNode * node);
	bool search(int data, BSTNode * node);
	BSTNode * root;

};