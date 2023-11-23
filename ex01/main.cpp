#include "Span.hpp"

int main()
{
	try
	{	
		Span a(8);

		std::vector<int> b;

		for (size_t i = 0; i < 10; ++i)
			b.push_back(i * 765);

		// for (int i = 0; i < 30; i++)
		// 	a.addNumber(30 - i);
		a.addNumber(30);
		a.addNumber(3);
		a.addNumber(120);
		
		std::cout << a.longestSpan() << std::endl;
		std::cout << a.shortestSpan() << std::endl;

		a.addNumberS(b.begin(), b.begin() + 6);

		for (size_t i = 0; i < a.arr.size(); ++i)
		{
			std::cout << a.arr[i] << " ";
		}
		
		std::cout << "\n";

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}