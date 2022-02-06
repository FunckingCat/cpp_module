#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int	main(void)
{
	{
		std::vector<int> vec;
		for (int count=0; count < 5; ++count)
			vec.push_back(count);
		std::vector<int>::iterator found;
		found = easyfind(vec, 2);
		std::cout << "2 in vector: " << *found << std::endl;
		found = easyfind(vec, 10);
		if (found == vec.end())
			std::cout << "10 not found\n";
		else
			std::cout << "10 in vector: " << *found << std::endl;
	}
	{
		std::list<int> lst;
		for (int count=0; count < 5; ++count)
			lst.push_back(count);
		std::list<int>::iterator found;
		found = easyfind(lst, 2);
		std::cout << "2 in list: " << *found << std::endl;
		found = easyfind(lst, 10);
		if (found == lst.end())
			std::cout << "10 not found\n";
		else
			std::cout << "10 in list: " << *found << std::endl;
	}
	return (0);
}