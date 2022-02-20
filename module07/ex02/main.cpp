#include <iostream>
#include "Array.hpp"

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

	return 0;
}