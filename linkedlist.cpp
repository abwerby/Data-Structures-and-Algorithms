#include "stdafx.h"
#include <iostream>
#include "linkedlist.hpp"



using namespace std;

int linkedList::linkedList_length()
{
	return this->length;
}

void linkedList::print_list()
{
	node * current = this->head;
	while (current != NULL)
	{
		cout << current->data << endl;
		current = current->next;
	}
}

// add node at the front
void linkedList::push(int new_data)
{
	// create new node in dynamic memory (heap)
	node * new_node = new node(new_data, this->head);
	this->head = new_node;
	this->length++;
}

// add node at the end
void linkedList::append(int new_data)
{
	node * new_node = new node(new_data);

	// if list is empty
	if (this->head == NULL)
	{
		head = new_node;
		this->length++;
		return;
	}

	node * current = this->head;

	node * temp = this->head;
	while (current->next)
	{
		current = current->next;
	}

	current->next = new_node;

	this->head = temp;
	this->length++;
}

void linkedList::insert_node(int new_data, int position)
{
	if (position > this->length + 1)
	{
		cout << "Error in position!\n";
		return;
	}


	if (position == 1)
	{
		this->push(new_data);
		return;
	}
	else
	{
		node * temp = head;
		node * temp1 = NULL;
		node * new_node = new node(new_data);

		int i = 1;
		while (temp != NULL && i < position)
		{
			i++;
			temp1 = temp;
			temp = temp->next;
		}

		temp1->next = new_node;
		new_node->next = temp;
		this->length++;
		return;
	}
}


// delete node from list at certain position
void linkedList::delete_node(int position)
{
	// in case list is empty
	if (head == NULL)
	{
		cout << "List Empty!\n";
		return;
	}

	if (position > this->length)
	{
		cout << "Error in position!\n";
		return;
	}

	node * temp = head;
	node * temp1 = NULL;

	if (position == 1)
	{
		this->head = head->next;
		delete temp;
		this->length--;
		return;
	}
	else
	{
		int i = 1;
		while (temp != NULL && i < position)
		{
			i++;
			temp1 = temp;
			temp = temp->next;
		}

		temp1->next = temp->next;
		delete temp;
		this->length--;
		return;
	}
}

void linkedList::delete_list()
{
	int init_len = this->length;
	for (int i = 0; i <= init_len; i++)
	{
		this->delete_node(1);
	}
}