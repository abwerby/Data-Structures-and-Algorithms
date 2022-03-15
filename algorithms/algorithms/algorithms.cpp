// algorithms.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include "algorithme_interface.h"

using namespace std;



int main()
{

	vector<int> arr;
	for (int i = 100000; i >= 0; i--)
	{
		arr.push_back(rand());
	}


	vector<int> sortedArrQ = quickSort(arr);

	vector<int> sortedArrM = mergeSort(arr);


	return 0;
}


