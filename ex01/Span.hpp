#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
///TODO: wtf is associative containers

class Span
{
	private:
		unsigned int			siz;
	public:
		std::vector<int> 		arr;
		void	addNumber(int);
		void	addNumberS(std::vector<int>::iterator first, std::vector<int>::iterator last);
		size_t	shortestSpan();
		size_t	longestSpan();
	public:
		Span();
		Span(unsigned int);
		Span(const Span& obj);
		Span& operator=(const Span& obj);
		~Span();
};
