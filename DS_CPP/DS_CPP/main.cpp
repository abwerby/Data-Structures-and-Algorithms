
#include "stdafx.h"
#include <iostream>
#include <set>
#include "linkedlist.hpp"
#include "Astack.h"
#include "Lstack.h"
#include "BST.h"

using namespace std;



int main()
{
	BSTree tree;

	tree.insert(10);
	tree.insert(20);
	tree.insert(5);
	tree.insert(-1);
	tree.insert(33);
	tree.insert(87);


	bool state1 = tree.search(-1);
	bool state2 = tree.search(0);
	bool state3 = tree.search(87);
	

	return 0;
}





