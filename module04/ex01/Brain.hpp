#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

typedef std::string str;

class Brain
{
private:
protected:
	str ideas[100];
public:
	Brain();
	Brain(const Brain &old);
	virtual ~Brain();

	Brain& operator= (const Brain &other);
};

#endif