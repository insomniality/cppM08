#pragma once

#include <algorithm>
#include <stack>

#include <iostream>
#include <stack>
#include <list>

template <class T>
class MutantStack : public std::stack<T>
{
	///TODO: ste orthodox petqa?
	///TODO: reverse em tese ka, bayc vorde kashmar chi lini che? ete chavelacnem reverse@

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
