#pragma once

class Lstack
{
public:

	Lstack() : size(0)
	{

	}


	int pop();
	void push(int new_data);
	void print_stack();
	int peak();
	int get_size();




private:
	linkedList stack_list;
	int size;
};