/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 15:16:07 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 15:16:07 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

template <typename T>
void iter(T *array, size_t size, void (&f)(const T &))
{
    int i = -1;
    while (++i < size)
        f(array[i]);
}

void test_int(const int &test)
{
    std::cout << test << std::endl;
}

void test_string(const std::string &test)
{
    std::cout << test << std::endl;
}

int main()
{
    std::cout << "Int test 1: " << std::endl;
    int array[] = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
    iter(array, 10, test_int);
    std::cout << std::endl << "Int test 2: " << std::endl;
    iter(array, 5, test_int);

    std::cout << std::endl <<"String test 1: " << std::endl;
    std::string s_array[] = {"1", "2", "3", "lalalala", "5 is enought"};
    iter(s_array, 5, test_string);
    std::cout << std::endl << "String test 2: " << std::endl;
    iter(s_array, 4, test_string);

    return (0);
}