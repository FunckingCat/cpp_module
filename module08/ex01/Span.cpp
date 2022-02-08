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

size_t Span::shortestSpan(void) const
{
	size_t size = this->storage.size();
	if (size <= 1)
		throw Span::TooFewNumbersException();

	std::multiset<int>::iterator first = this->storage.begin();
	std::multiset<int>::iterator next = ++this->storage.begin();
	size_t minDiff = std::abs(*next++ - *first++);
	while (next != this->storage.end())
	{
		size_t diff = std::abs(*next - *first);
		if (diff < minDiff)
			minDiff = diff;
		first++;
		next++;
	}
	return (minDiff);
}

size_t Span::longestSpan(void) const
{
	if (this->storage.size() <= 1)
		throw Span::TooFewNumbersException();

	int biggest = *std::max_element(this->storage.begin(), this->storage.end());
	int smallest = *std::min_element(this->storage.begin(), this->storage.end());
	return (std::abs(biggest - smallest));
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