/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 20:07:46 by plamtenz          #+#    #+#             */
/*   Updated: 2021/01/26 21:36:21 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

template <typename T>
static void printf_array(const Array<T> &src)
{
    std::cout << "Array display : [size = " << src.size() << "] ";
    size_t i = -1;
    while (++i < src.size())
        std::cout << src[i] << "; ";
    std::cout << std::endl;
}

int main()
{
	// Test operator[]
    Array<int> x(10);
    printf_array(x);
    x[1] = 1;
    printf_array(x);
    x[3] = 3;

	// Test operator=
	Array<int> y = x;
    printf_array(y);
	y[5] = 42;

	// Test copy constructor
	Array<int> z(y);
	printf_array(z);

	// Test out of bounds exeption
    try
    {
        (void)x[15];
    }
    catch(const std::exception& e)
    {
        std::cout << "exception catched: " << e.what() << std::endl;
    }

    return (0);
}