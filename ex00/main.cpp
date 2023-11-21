#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> a;

	for (size_t i = 0; i < 34; i++)
	{
		a.push_back(i);
	}

	std::cout << a[20] << "\n";

	for (std::vector<int>::iterator it = a.begin(); it != a.end(); ++it)
		std::cout << *it << "\n";
	// a.begin();

	if (easyfind(a, 22) != a.end())
		std::cout << *(easyfind(a, 22)) << "\n";
	else
	{
		std::cout << "NOT FOUND\n";
	}
}