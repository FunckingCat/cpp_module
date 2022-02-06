#include "Span.hpp"

Span::Span(size_t size):
	size(size)
{
}

Span::Span(Span const &other)
{
	(void)other;
}

void	Span::addNumber(int numb)
{
	if (storage.size() < this->size)
		this->storage.insert(numb);
	else
		throw StorageFullException();
}

Span::~Span()
{
}

Span &Span::operator=(Span const &other)
{
	(void)other;
	return (*this);
}

const char* Span::StorageFullException::what() const throw()
{
	return "StorageFullException: storage is full";
}

const char* Span::TooFewNumbersException::what() const throw()
{
	return "TooFewNumbersException: too few numbers in da storage";
}

std::ostream &operator<<(std::ostream &out, Span const &span)
{
	std::multiset<int>::iterator item;
	
	out << "Storage with size " << span.size << " : ";
	item = span.storage.begin();
	for (; item != span.storage.end(); item++)
		out << *item << " ";
	return (out);
}