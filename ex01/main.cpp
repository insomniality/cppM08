#include "Span.hpp"

int main()
{
	try
	{	
		Span a(120);

		// for (int i = 0; i < 30; i++)
		// 	a.addNumber(30 - i);
		a.addNumber(30);
		a.addNumber(3);
		a.addNumber(120);
		
		std::cout << a.longestSpan() << std::endl;
		std::cout << a.shortestSpan() << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}