/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 20:07:46 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 20:16:09 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

template <typename T>
static void printf_array(const Array<T> &src)
{
    std::cout << "Array display : [size = " << src.size() << "] ";
    int i = -1;
    while (++i < src.size())
        std::cout << src[i] << "; ";
    std::cout << std::endl;
}

int main()
{
    Array<int> x(10);
    printf_array(x);
    x[1] = 1;
    printf_array(x);
    x[3] = 3;
    printf_array(x);
    try
    {
        (void)x[15];
    }
    catch(const std::exception& e)
    {
        std::cout << "exception catched :" << e.what() << std::endl;
    }
    return (0);
}