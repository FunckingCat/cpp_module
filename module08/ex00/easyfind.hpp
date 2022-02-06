#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

template<typename T>
typename T::iterator	easyfind(T &array, int item)
{
	return (std::find(array.begin(), array.end(), item));
}

#endif