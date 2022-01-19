#include <iostream>
#include <map>

class Karen
{
private:
	std::map<std::string, int> map;

	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

	enum lvl {
		DEBUG = 1,
		INFO,
		WARNING,
		ERROR,
	};

public:
	Karen();
	~Karen();

	void complain( std::string level );
};
