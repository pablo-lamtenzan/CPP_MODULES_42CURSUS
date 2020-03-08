/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plamtenz <plamtenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 20:20:48 by plamtenz          #+#    #+#             */
/*   Updated: 2020/03/08 20:25:53 by plamtenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
    std::vector<int> vec;
    vec.push_back(12);
    vec.push_back(13);
    vec.push_back(14);
    vec.push_back(15);
    std::cout << easyfind(vec, 12) << std::endl;
    try
    {
        std::cout << easyfind(vec, 10) << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "exception catched :" << e.what() << std::endl;
    }
    return (0);
}