/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 20:07:46 by plamtenz          #+#    #+#             */
/*   Updated: 2021/02/24 14:50:09 by pablo            ###   ########lyon.fr   */
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
	// Test empty
	Array<int> e;
	printf_array(e);

	// Test 0 size
	Array<int> u(0);
	printf_array(u);

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

	// Test const
	const Array<int> s = x;
	// s[0] = 2;
	// Uncomment the line above to test const operator=
	// Only read, no writting allowed.
	printf_array(s);

	// Test with other an arbitrary type
	Array<std::string> w(3);
	w[0] = "1";
	w[2] = "2";
	printf_array(w);
	
    return (0);
}