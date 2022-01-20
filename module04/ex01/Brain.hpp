#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

# define THOUGHT "Mmm Pelmeshki"
# define CAT_THOUGHT "Meou Meou Meou"
# define DOG_THOUGHT "Bark Bark Bark"

typedef std::string str;

class Brain
{
private:
protected:
	str ideas[100];
public:
	Brain();
	Brain(str type);
	Brain(const Brain &old);
	virtual ~Brain();

	Brain& operator= (const Brain &other);
	const str	getThought(void) const;
	void		setThought(str th);
};

#endif