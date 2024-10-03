#pragma once
#include <iostream>
#include <fstream> 
using namespace std;

template<class T>
class MyVector
{
	T* arr;
	int capacity;
	int m_size;
	void grow();

public:
	MyVector(int x = 5);
	void add(T item);
	void remove(int position);
	int size();
	T get(int position);
	void insert(T item, int pos);
	template<class T>
	friend ostream& operator<<(ostream& out, MyVector<T>& items);
};

template<class T>
void MyVector<T>::insert(T item, int pos) 
{

}

template<class T>
ostream& operator<<(ostream& out, MyVector<T>& items)
{
	cout << "[";
	for (int i = 0; i < items.size(); i++)
	{
		if (i == items.size() - 1)
			cout << items.get(i);
		else
			cout << items.get(i) << ", ";
	}
}

template<class T>
void MyVector<T>::grow()
{
	T* temp = new T[capacity * 2];
	for (int i = 0; i < m_size; i++)
	{
		temp[i] = arr[i];
	}
	delete[] arr;
	arr = temp;
	capacity *= 2;
}

template<class T>
MyVector<T>::MyVector(int x) 
{
	T* arr = new T[x];
	capacity = x;
	m_size = 0;
}

template<class T>
void MyVector<T>::add(T item)
{
	if (m_size == capacity)
	{
		grow();
	}
	arr[m_size] = item;
	m_size++;
}

template<class T>
int MyVector<T>::size()
{
	return m_size;
}

template<class T>
void MyVector<T>::remove(int position) 
{
	if (position < 0 || position >= m_size)
		throw logic_error("Array out of bounds exception");

	for (int i = position; i < m_size - 1; i++)
	{
		arr[i] = arr[i + 1];
	}
	m_size--;
}


