#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
///TODO: wtf is associative containers

class Span
{
	private:
		unsigned int			siz;
		std::vector<int> 		arr;
	public:
		void	addNumber(int);
		void	addNumberS();
		size_t	shortestSpan();
		size_t	longestSpan();
	public:
		Span();
		Span(unsigned int);
		Span(const Span& obj);
		Span& operator=(const Span& obj);
		~Span();
};
