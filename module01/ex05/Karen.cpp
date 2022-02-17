#include "Karen.hpp"

Karen::Karen()
{
}

Karen::~Karen()
{
}

void Karen::complain( std::string level )
{
	void	(Karen::*complaint[])( void ) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};
	std::string complaintLevels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	for (int i = 0; i < 4; i++)
	{
		void (Karen::*selectedComplaint)( void ) = complaint[i];
		if (level == complaintLevels[i])
			(this->*selectedComplaint)();
	}
}

void Karen::debug( void )
{
	std::cout << "DEBUG\n";
}

void Karen::info( void )
{
	std::cout << "INFO\n";
}

void Karen::warning( void )
{
	std::cout << "WARNING\n";
}

void Karen::error( void )
{
	std::cout << "ERROR\n";
}