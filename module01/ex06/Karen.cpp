#include "Karen.hpp"

Karen::Karen()
{
	this->map["DEBUG"] = DEBUG;
	this->map["INFO"] = INFO;
	this->map["WARNING"] = WARNING;
	this->map["ERROR"] = ERROR;
}

Karen::~Karen()
{
}

void Karen::complain( std::string level )
{
	int stat(this->map[level]);

	switch (stat)
	{
	case DEBUG:
		this->debug();
		break;
	case INFO:
		this->debug();
		this->info();
		break;
	case WARNING:
		this->debug();
		this->info();
		this->warning();
		break;
	case ERROR:
		this->debug();
		this->info();
		this->warning();
		this->error();
		break;
	default:
		break;
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