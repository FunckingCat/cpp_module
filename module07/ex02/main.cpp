#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
#include <cstdlib>

int main(void)
{
	Array<int>			int_Arr;
	Array<std::string>	str_arr(7);
	Array<std::string>	another_str_arr;

	str_arr[0] = "string 0";
	str_arr[1] = "string 1";
	str_arr[2] = "string 2";
	str_arr[3] = "string 3";
	str_arr[4] = "string 4";
	str_arr[5] = "string 5";
	for (int i = 0; i < str_arr.size(); i++)
	{
		std::cout << i << " " << str_arr[i] << std::endl;
	}
	std::cout << "int_Arr.size() is " << int_Arr.size() << std::endl;
	std::cout << "str_arr.size() is " << str_arr.size() << std::endl;
	another_str_arr = str_arr;
	another_str_arr[3] = "Changed value 3";
	std::cout << "another_str_arr\n";
	for (int i = 0; i < another_str_arr.size(); i++)
	{
		std::cout << i << " " << another_str_arr[i] << std::endl;
	}
	std::cout << "str_arr\n";
	for (int i = 0; i < str_arr.size(); i++)
	{
		std::cout << i << " " << str_arr[i] << std::endl;
	}
	try
	{
		std::cout << str_arr[59] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << str_arr[-3] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	{
		Array<int> tmp = numbers;
		Array<int> test(numbers);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;

	return 0;
}