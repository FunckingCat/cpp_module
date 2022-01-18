#include <iostream>
#include <fstream> 
# include <sstream>

std::string str_replace(std::string &line, std::string &search, std::string &replace)
{
	std::stringstream stream;
	size_t j;
	size_t slen(search.length());

	for (size_t i = 0; i < line.length(); i++)
	{
		j = 0;
		while (line[i + j] == search[j] && j < slen)
			j++;
		if (j == slen)
		{
			stream << replace;
			i += (j - 1);
		}
		else
			stream << line[i];
	}
	return (stream.str());
}

int	replace(std::ifstream &infile, std::string name, std::string search, std::string replace)
{
	std::ofstream outfile(name + ".replace", std::ios::trunc);
	std::string line;

	if (!outfile.is_open())
	{
		std::cout << "Error: can`t create file\n";
		infile.close();
		return (1);
	}
	while (std::getline(infile, line))
	{
		outfile << str_replace(line, search, replace);
		if (!infile.eof())
			outfile << '\n';
	}
	infile.close();
	outfile.close();
	return (0);
}

int	main(int argc, char **argv)
{
	std::ifstream infile;
 
	if (argc != 4)
	{
		std::cout << "Error: arguments\n"; 
		return (1);
	}
	if (std::string(argv[2]).length() == 0)
	{
		std::cout << "Error: string to sind is empty\n"; 
		return (1);
	}
	if (std::string(argv[3]).length() == 0)
	{
		std::cout << "Error: string to search is empty\n"; 
		return (1);
	}
	infile.open(argv[1]);
	if (!infile.is_open()) 
	{
		std::cout << "Error: no such file or directory\n"; 
		return (1);
	}
	return (replace(infile, argv[1], argv[2], argv[3]));
}