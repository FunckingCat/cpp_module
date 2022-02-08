#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <set>

class Span
{
private:
	Span();

public:
	size_t size;
	std::multiset<int> storage;

	Span(size_t size);
	Span(Span const &other);
	virtual ~Span();

	Span &operator=(Span const &other);

	class StorageFullException: public std::exception {
		virtual const char* what() const throw();
	};
	class TooFewNumbersException: public std::exception {
		virtual const char* what() const throw();
	};

	void	addNumber(int numb);
	template<typename Iter>
	void	Span::addNumber(Iter begin, Iter end);
	size_t	shortestSpan(void) const;
	size_t	longestSpan(void) const;
};

std::ostream &operator<<(std::ostream &out, Span const &span);

template<typename Iter>
void	Span::addNumber(Iter begin, Iter end) 
{
	if (this->storage.size() + std::distance(begin, end) > this->size)
		throw Span::StorageFullException();
	this->storage.insert(begin, end);
}

#endif