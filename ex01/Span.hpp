#pragma once

#include <iostream>
#include <vector>
///TODO: wtf is associative containers

template<typename T>
class Span
{
	private:
		// T*				arr;
		std::vector<T> 		arr;
		unsigned int	siz;

	public:
		void	addNumber(T&);
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
