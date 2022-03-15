#include "stdafx.h"
#include <iostream>
#include "linkedlist.hpp"
#include "Lstack.h"

int Lstack::pop()
{
	int temp = stack_list.fetch(1);
	stack_list.delete_node(1);
	this->size--;
	return temp;
	
}

void Lstack::push(int new_data)
{
	this->stack_list.push(new_data);
	this->size++;
}


void Lstack::print_stack()
{
	this->stack_list.print_list();
}


int Lstack::peak()
{
	return stack_list.fetch(1);
}


int Lstack::get_size()
{
	return this->stack_list.len();
}

