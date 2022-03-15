
#include <iostream>



class node
{
public:
	int data;
	node * next;

	node() : data(0), next(NULL)
	{

	}

	node(int data) : data(data)
	{

	}

	node(int data, node * ptr) : data(data), next(ptr)
	{

	}

};

class linkedList
{
private:
	node * head = NULL;
	int length;
public:
	linkedList() : length(0)
	{
	}

	~linkedList()
	{
		this->delete_list();
	}

	int linkedList_length();

	void print_list();

	int len();

	// add node at the front
	void push(int new_data);

	// add node at the end
	void append(int new_data);

	int fetch(int position);

	void insert_node(int new_data, int position);

	// delete node from list at certain position
	void delete_node(int position);

	void delete_list();

	void delete_duplicates();
};