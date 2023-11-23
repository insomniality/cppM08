#pragma once

#include <algorithm>
#include <stack>

#include <iostream>
#include <list>

template <class T>
class MutantStack : public std::stack<T>
{

	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin()
		{
			return (this->c.begin());
		};
		iterator end()
		{
			return (this->c.end());
		};
};
