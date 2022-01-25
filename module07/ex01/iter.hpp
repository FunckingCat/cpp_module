#ifndef ITER_HPP
#define ITER_HPP

template<typename T>
void iter(T *arr, size_t size, void (*f)(T const &item));

template<typename T>
void func(T const &itm);

#endif