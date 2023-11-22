#include "Span.hpp"

void	Span<T>::addNumber(T& n)
{
	if (this->arr.size() + 1 < this->siz)
		this->arr.push_back(n);
	else
		throw(std::exception);
}

void	Span<T>::addNumberS()
{

}

size_t	Span<T>::shortestSpan()
{
	// if (this->arr.size() < 2)
	// 	throw(std::exception);

	// Span cpy = *this;
	
	// std::vector<int>::iterator min = this->arr.min_element(arr.begin(), arr.end());

	// this->arr.erase(min);
	// std::vector<int>::iterator min2 = ;

	// return (distance(min, min2));
}

size_t	Span<T>::longestSpan()
{
	if (this->arr.size() < 1 && this->arr)
		throw(std::exception);
	// T min = this->arr.min_element(arr.begin(), arr.end());
	std::vector<int>::iterator min = this->arr.min_element(arr.begin(), arr.end());
	std::vector<int>::iterator max = this->arr.max_element(arr.begin(), arr.end());

	return (distance(min, max));
}

/////////////

template<typename T>
Span<T>::Span() : arr(NULL), siz(0)
{

}

template<typename T>
Span<T>::Span(unsigned int n)
{
	siz = n;
	arr.reserve(n);
}

template<typename T>
Span<T>::Span(const Span<T>& obj)
{
	arr = obj.arr; // es urish dzev piti grvi
	siz = obj.siz;
}

template<typename T>
Span<T>& Span<T>::operator=(const Span<T>& obj)
{
	if(this == &obj)
		return (*this);
	arr = obj.arr; // es urish dzev piti grvi
	siz = obj.siz;

	return (*this);
}

template<typename T>
Span<T>::~Span()
{

}
