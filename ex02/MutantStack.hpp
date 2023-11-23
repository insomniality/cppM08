#pragma once

#include <algorithm>
#include <stack>

#include <iostream>
#include <list>

template <class T>
class MutantStack : public std::stack<T>
{
	///TODO: ste Orthodox Petqa?
	///TODO: ete hpp-um ban em poxum make-@ chi nkatum (et normala?, relink chi?, incha?)
	///TODO: reverse em tese ka, bayc vorde kashmar chi lini che? ete chavelacnem reverse@

	public:
		///TODO: for the record standard chi container_type-@
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
