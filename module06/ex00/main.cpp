#include "Converter.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: argyments\n";
		return (1);
	}
	Converter conv(argv[1]);
	conv.print();
	return (0);
}