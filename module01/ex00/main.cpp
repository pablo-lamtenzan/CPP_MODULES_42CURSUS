/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 00:12:03 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/20 02:54:52 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int main()
{
	std::string tmp;

	std::cout << "Welcome to Day01/Ex00! Type any key to continue." << std::endl;
	std::cin >> tmp;
	std::cout << "Lets start customizing your \"Heap Pony\" Pony. Type any key to continue." << std::endl;
	ponyOnTheHeap();
	std::cin >> tmp;
	std::cout << "Well, well did u like it ? Lets proceed with your \"Stack Pony\". Type any key to continue." << std::endl;
	std::cin >> tmp;
	ponyOnTheStack();
	std::cin >> tmp;
	std::cout << "EXIT" << std::endl;
	return (0);
}