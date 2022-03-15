#include <iostream>
#include <vector>
#include "algorithme_interface.h"

using namespace std;

vector<int> insertionSort(vector<int> arr)
{
	int i;
	for (int j = 1; j < arr.size(); j++)
	{
		int key = arr[j];
		i = j - 1;

		while (i >= 0 && arr[i] > key)
		{
			arr[i + 1] = arr[i];
			i = i - 1;
		}

		arr[i + 1] = key;
	}
	return arr;
}


vector<int> bubbleSort(vector<int> arr)
{
	for (int j = 0; j < arr.size() - 1; j++)
	{
		for (int i = j + 1; i < arr.size(); i++)
		{
			if (arr[j] > arr[i])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	return arr;
}



vector<int> quickSort(vector<int> arr)
{
	vector<int> res;
	int pivot;
	if (arr.size() < 2)
	{
		return arr;
	}
	else
	{
		pivot = arr[arr.size()/2];
		vector<int> less, bigger;
		for (int i = 1; i < arr.size(); i++)
		{
			if (arr[i] <= pivot)
			{
				less.push_back(arr[i]);
			}

			if (arr[i] > pivot)
			{
				bigger.push_back(arr[i]);
			}
		}


		vector<int> temp1 = quickSort(less);
		vector<int> temp2 = quickSort(bigger);

		res.insert(res.end(), temp1.begin(), temp1.end());
		res.push_back(pivot);
		res.insert(res.end(), temp2.begin(), temp2.end());

		return res;

	}
}

vector<int> mergeSort(vector<int> arr)
{
	if (arr.size() == 1)
	{
		return arr;
	}
	else
	{
		int mid = arr.size() / 2;

		vector<int> left, right;
		for (int i = 0; i < mid; i++)
		{
			left.push_back(arr[i]);
		}

		for (int i = mid; i < arr.size(); i++)
		{
			right.push_back(arr[i]);
		}

		return merge(mergeSort(left), mergeSort(right));
	}
}

vector<int> merge(vector<int> left, vector<int> right)
{
	vector<int> res;

	while (left.size() && right.size())
	{
		if (left[0] < right[0])
		{
			res.push_back(left[0]);
			left.erase(left.begin());
		}
		else
		{
			res.push_back(right[0]);
			right.erase(right.begin());
		}
	}

	res.insert(res.end(), left.begin(), left.end());
	res.insert(res.end(), right.begin(), right.end());

	return res;
}


