#ifndef ITER_HPP
#define ITER_HPP

template<typename T>
void	iter(T *arr, size_t size, void (*f)(T const &item))
{
	for (size_t i = 0; i < size; i++)
		(*f)(arr[i]);
}

template<typename T>
void func(T const &itm)
{
	std::cout << itm << " : ";
}

#endif