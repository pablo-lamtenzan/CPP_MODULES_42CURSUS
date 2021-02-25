/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 20:20:48 by plamtenz          #+#    #+#             */
/*   Updated: 2021/02/25 11:14:20 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>
#include "easyfind.hpp"

int main()
{
	// Find tests
    std::vector<int> vec;
    vec.push_back(12);
    vec.push_back(13);
    vec.push_back(14);
    vec.push_back(15);
    std::cout << easyfind(vec, 13) << std::endl;
	std::cout << easyfind(vec, 15) << std::endl;

	std::cout << std::string(20, '-') << std::endl;

	// Not found exception
    try {
        std::cout << easyfind(vec, 10) << std::endl;
    } catch (const std::exception& e) {
        std::cout << "exception catched: " << e.what() << std::endl;
    }
	
	std::cout << std::string(20, '-') << std::endl;

	// Empty exception
	std::deque<int> deq;
	try {
        std::cout << easyfind(deq, 0) << std::endl;
    } catch (const std::exception& e) {
        std::cout << "exception catched: " << e.what() << std::endl;
    }

	std::cout << std::string(20, '-') << std::endl;

	// Const container
	const std::vector<int> cp = vec;
	std::cout << easyfind(vec, 13) << std::endl;
	std::cout << easyfind(vec, 15) << std::endl;
    return (0);
}