#pragma once
#include <iostream>

using namespace std;

template <class K, class Y>
class Pair
{
	K first;
	Y second;
public:
	Pair(K first, Y second);
	K getFirst();
	Y getSecond();
	void setFirst(K first);
	void setSecond(Y second);
};

template <class K, class Y>
Pair<K, Y>::Pair(K first, Y second)
{
	this->first = first;
	this->second = second;
}

template <class K, class Y>
K Pair<K, Y>::getFirst()
{
	return first;
}

template <class K, class Y>
Y Pair<K, Y>::getSecond()
{
	return second;
}

template <class K, class Y>
void Pair<K, Y>::setFirst(K f)
{
	first = f;
}

template <class K, class Y>
void Pair<K, Y>::setSecond(Y s)
{
	second = s;
}

template <class K, class Y>
ostream& operator<<(ostream& out, Pair<K, Y>& p)
{
	return out << "(" << p.first() << "->" << p.second() << ")";
}

