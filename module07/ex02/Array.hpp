/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 15:16:10 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 15:16:10 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>
# include <exception>

template <typename T>
class Array
{

    T*		array;
    size_t	_size;

    public :

    Array();
    Array(size_t n);
    Array(const Array<T>& src);
    ~Array();
    Array<T>&	operator=(const Array<T>& src);
    T&			operator[](size_t pos);
    const T&	operator[](size_t pos) const;
    size_t		size() const;

    class ArrayFailException : public std::exception { public: const char *what() const throw(); };
};

template <typename T>
Array<T>::Array() : array(NULL), _size(0) { }

template <typename T>
Array<T>::Array(size_t n) : array(new T[n]()), _size(n) { }

template <typename T>
Array<T>::~Array() { delete [] array; }

template <typename T>
Array<T>::Array(const Array<T>& src)
{
	if (this != &src)
	{
		const size_t s = src.size();
		if (s > 0)
		{
			array = new T[s];
			for (size_t i = 0 ; i < s ; i++)
				array[i] = src.operator[](i);
		}
		_size = s;
	}
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array<T>& src)
{

	if (this != &src)
	{
		delete [] array;
    	array = NULL;
		const size_t s = src.size();
		if (&src && s)
		{
			array = new T [s];
			for (size_t i = 0 ; i < s ; i++)
				array[i] = src.operator[](i);
		}
		_size = s;
	}
	return (*this);
}

template <typename T>
T&			Array<T>::operator[](size_t pos)
{
	if (pos >= _size || !array)
		throw ArrayFailException();
	else
		return (array[pos]);
}

template <typename T>
const T&	Array<T>::operator[](size_t pos) const
{
    if (pos >= _size || !array)
		throw ArrayFailException();
	else
		return (array[pos]);
}

template <typename T>
size_t	Array<T>::size() const { return (_size); }

template <typename T>
const char*		Array<T>::ArrayFailException::what() const throw() { return ("Array error"); }
