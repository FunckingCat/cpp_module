#include <iostream>
#include <vector>
#include "Span.hpp"

int	main(void)
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::vector<int> tmp;
	Span sprandom = Span(100);
	for (int i = 0; i < 100; i++)
		tmp.push_back((rand() % 1000) - 500);
	sprandom.addNumber(tmp.begin(), tmp.end());
	std::cout << sprandom << std::endl;
	std::cout << sprandom.shortestSpan() << std::endl;
	std::cout << sprandom.longestSpan() << std::endl;

	return (0);
}