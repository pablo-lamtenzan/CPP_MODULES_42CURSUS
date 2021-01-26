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

#include "iter.hpp"

static void test_int(const int& test) { std::cout << test << std::endl; }
static void test_string(const std::string& test) { std::cout << test << std::endl; }

int main()
{
    std::cout << "Integer test 1: " << std::endl;
    int array[] = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
    iter(array, 10, test_int);

    std::cout << std::endl << "Integer test 2: " << std::endl;
    iter(array, 5, test_int);


    std::cout << std::endl <<"String test 1: " << std::endl;
    std::string s_array[] = {"1", "2", "3", "lalalala", "5 is enought"};
    iter(s_array, 5, test_string);

    std::cout << std::endl << "String test 2: " << std::endl;
    iter(s_array, 4, test_string);

    return (0);
}