/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 03:15:01 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/23 08:21:16 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main()
{
	std::string tmp;

	std::cout << "Welcome to Day01/Ex03! Type any key yo continue." << std::endl;
	std::cin >> tmp;
	std::cout << "Please, select the amount of zombies which will compose the horde:" << std::endl << ">> ";
	std::cin >> tmp;
	for (size_t i = 0; i < tmp.size(); i++)
	{
		if (tmp.at(i) < '0' || tmp.at(i) > '9')
		{
			std::cout << "Please test with only integers..." << std::endl;
			return (1);
		}
	}
    ZombieHorde Horde(std::atoi(tmp.c_str()));
    Horde.foreach_anounce();
	std::cout << "Type any key to terminate the program." << std::endl;
	std::cin >> tmp;
	std::cout << "EXIT" << std::endl;
	return (0);
}