#include "Templates.h"
#include "pair.h";
#include "MyVector.h"
#include <iostream>

template <class T>
T greaterThan(T x, T y)
{
	return x > y ? x : y;
}

void question1()
{
	int x1 = 5, y1 = 10;

	cout << "The largest between " << x1 << " and " << y1 << " is " << greaterThan(x1, y1) << endl;

}

template <class T>
T lesserThan(T x, T y)
{
	return x < y ? x : y;
}

template <class T>
void print(const list<T>& items)
{
	typedef list<T>::iterator iterator;
	cout << "[";
	for (iterator it = items.begin(); it != items.end(); it++)
	{
		if(it != items.begin())
			cout << ", ";
		cout << *it;
	}
	cout << "]" << endl;
}

void question3()
{
	list<int> nums = { 1, 5, 9, 7, 6, 3, 5, 8, 4 };
	print(nums);

	list<string> strs = { "Derek", "Don", "Doul", "Donald" };
	print(strs);
}

void question4()
{
	list<pair<int, char>> items;
	for (int i = 65; i < 91; i++) 
	{
		items.push_back(pair<int, char>(i, (char)i));
	}
}

void question5() 
{
	MyVector<int> nums;
	srand(time(NULL));
	for (int i = 0; i < 20; i++) 
	{
		nums.add(1 + rand() % 20);
	}
	cout << nums;
}