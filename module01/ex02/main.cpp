/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 00:58:21 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/20 04:09:49 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main()
{
	std::string tmp;

	srand(time(NULL));
	std::cout << "Welcome to Day01/Ex02! Type any key to continue." << std::endl;
	std::cin >> tmp;
	std::cout << "Lets start with a \"randomChump\". Type any key to continue." << std::endl;
	std::cin >> tmp;
    randomChump();
	std::cout << "(type somethin to proceed)" << std::endl;
	std::cin >> tmp;
	std::cout << "Lest go with another one. Type any key to continue." << std::endl;
	std::cin >> tmp;
	randomChump();
	std::cout << "(type something to proceed)" << std::endl;
	std::cin >> tmp;
	std::cout << "As you can see all is clean. Lets end with one more. Type any key to continue." << std::endl;
	std::cin >> tmp;
	randomChump();
	std::cout << "(type somethin to proceed)" << std::endl;
	std::cin >> tmp;
	std::cout << "EXIT" << std::endl;
	return (0);
}