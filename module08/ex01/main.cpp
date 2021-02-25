/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 11:17:31 by pablo             #+#    #+#             */
/*   Updated: 2021/02/25 11:21:50 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <stdlib.h>

int main()
{
	srand(time(NULL));
	
	// test basic 
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "SHORTER: " << sp.shortestSpan() << std::endl;
	std::cout << "LONGUER: " << sp.longestSpan() << std::endl;

	std::cout << std::string(20, '-') << std::endl;

	// test better add number range signature

	Span huge(10000000);

	huge.better_addNumber(1, 1000000);
	std::cout << "SHORTER: " << huge.shortestSpan() << std::endl;
	std::cout << "LONGUER: " << huge.longestSpan() << std::endl;

	std::cout << std::string(20, '-') << std::endl;

	// test better add number random signature

	Span huge_rand(10000000);
	huge_rand.better_addNumber(9999999);
	std::cout << "SHORTER: " << huge_rand.shortestSpan() << std::endl;
	std::cout << "LONGUER: " << huge_rand.longestSpan() << std::endl;

	std::cout << std::string(20, '-') << std::endl;

	// test error out fill span

	try {
		sp.addNumber(42);
		std::cout << "Something went wrong" << std::endl;
	} catch (std::exception& e) { std::cerr << e.what() << std::endl; }

	std::cout << std::string(20, '-') << std::endl;

	// test error to short span

	Span sht(1);
	sht.addNumber(1);
	
	try {
		sht.shortestSpan();
		std::cout << "Something went wrong" << std::endl;
	} catch (std::exception& e) { std::cerr << e.what() << std::endl; }

	Span sht2(0);

	try {
		sht2.shortestSpan();
		std::cout << "Something went wrong" << std::endl;
	} catch (std::exception& e) { std::cerr << e.what() << std::endl; }

	return (0);
}