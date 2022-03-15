#include "stdafx.h"
#include <iostream>
#include "Astack.h"


int Astack::pop()
{
	if (this-> top < 0)
	{
		std::cout << "Empty List \n";
		throw "Error !!";
	}

	int temp = this->stack_array[top];
	this->top--;
	this->size--;

	return temp;
}

void Astack::push(int new_data)
{
	if (this->top == STACK_ARRAY_MAX_SIZE-1)
	{
		std::cout << "Stack is Full \n";
		return;
	}

	this->top++;
	stack_array[top] = new_data;
	this->size++;

}


void Astack::print_stack()
{
	for (int i = 0; i <= this->top; i++)
	{
		std::cout << this->stack_array[i] << " ,";
	}
	std::cout << "\n";
}


int Astack::peak()
{
	return this->stack_array[top];
}


int Astack::get_size()
{
	return this->size;
}

