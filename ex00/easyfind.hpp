#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>

template<typename T>
typename T::iterator easyfind(T& cnt, int to_find)
{
	return (std::find(cnt.begin(), cnt.end(), to_find));
}

#endif // EASYFIND_HPP