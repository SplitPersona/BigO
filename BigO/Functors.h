#pragma once
#include "bigO.h"
struct linearSearchFunction 
{
	int* arr;
	int size;
	int target;
	linearSearchFunction(int* arr, int size, int target)
	{
		this->arr = arr;
		this->size = size;
		this->target = target;
	}
	
	void operator()()
	{
		linearSearch(arr, size, target);
	}
};

struct binarySearchFunction
{
	int* arr;
	int size;
	int target;

	binarySearchFunction(int* arr, int size, int target)
	{
		this->arr = arr;
		this->size = size;
		this->target = target;
	}

	void operator()()
	{
		binarySearch(arr, size, target);
	}
};