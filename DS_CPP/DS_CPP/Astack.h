#pragma once 
#include <iostream>



#define STACK_ARRAY_MAX_SIZE	10

class Astack
{
public:

	Astack(): top(-1), size(0)
	{

	}


	int pop();
	void push(int new_data);
	void print_stack();
	int peak();
	int get_size();

	//Astack(int new_data) : top(), size(0), sta
	//{

	//}


private:
	int stack_array[STACK_ARRAY_MAX_SIZE];
	int top;
	int size;
	
};


