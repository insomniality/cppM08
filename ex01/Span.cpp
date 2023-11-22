#include "Span.hpp"

void	addNumber()
{

}

void	addNumberS()
{

}

size_t	shortestSpan()
{

}

size_t	longestSpan()
{

}

/////////////

template<typename T>
Span<T>::Span() : arr(NULL), siz(0)
{

}

template<typename T>
Span<T>::Span(unsigned int n) : arr(NULL), siz(n)
{

}

template<typename T>
Span<T>::Span(const Span<T>& obj)
{
	this->arr = obj.arr; // es urish dzev piti grvi
	this->siz = obj.siz;
}

template<typename T>
Span<T>& Span<T>::operator=(const Span<T>& obj)
{
	if(this == &obj)
		return (*this);
	this->siz = obj.siz;

	return (*this);
}

template<typename T>
Span<T>::~Span()
{

}
