#include "Span.hpp"

void	Span::addNumber(int n)
{
	// std::cout << arr.size() << " nya\n" << "siz is " << siz << "\n";
	if (arr.size() < siz)
	{
		// std::cout << arr.size() << " nya\n";
		arr.push_back(n);
	}
	else
		throw(std::exception());
}

void	Span::addNumberS(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
	arr.insert(arr.end(), first, last);

	if (arr.size() > siz)
		throw std::exception();
}

size_t	Span::shortestSpan()
{
	if (this->arr.size() < 2)
		throw(std::exception());

	std::sort(arr.begin(), arr.end());
	int	diff = arr[1] - arr[0];

	for (size_t i = 0; i < arr.size() - 1; i++)
		if (arr[i + 1] - arr[i] < diff)
			diff = arr[i + 1] - arr[i];
	return (diff);
}

size_t	Span::longestSpan()
{
	if (this->arr.size() < 2)
		throw(std::exception());
	std::vector<int>::iterator min = std::min_element(arr.begin(), arr.end());
	std::vector<int>::iterator max = std::max_element(arr.begin(), arr.end());

	// std::cout << *min << std::endl;
	// std::cout << *max << std::endl;
	return (*max - *min);
}

/////////////tak@ oka

Span::Span()
{
	// (void)arr;
	siz = 0;
}

Span::Span(unsigned int n)
{
	siz = n;
	// arr.reserve(n);
}

Span::Span(const Span& obj)
{
	arr = obj.arr; // es urish dzev piti grvi
	siz = obj.siz;
}

Span& Span::operator=(const Span& obj)
{
	if(this == &obj)
		return (*this);
	arr = obj.arr; // es urish dzev piti grvi
	siz = obj.siz;

	return (*this);
}

Span::~Span()
{

}
