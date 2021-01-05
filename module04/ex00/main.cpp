/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 06:12:35 by plamtenz          #+#    #+#             */
/*   Updated: 2021/01/05 04:11:21 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "More.hpp"

int main()
{
	// Test simple construction
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	More more("qwerty");
	std::cout << std::endl;

	// Test overload << operator inheritance
	std::cout << robert << jim << joe << more << std::endl;

	// Test inheritance compatibiity and sorcerer methods
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(more);
	std::cout << std::endl;

	
	robert.introduce_himself();

	// Test victim methods
	more.introduce_hisself();
	more.getPolymorphed();
	std::cout << std::endl;

	// Test inheritance copy compability
	more = joe;
	more.introduce_hisself();
	std::cout << std::endl;

	// Test copy construct inheritance compability
	More m(joe);
	m.introduce_hisself();
	std::cout << std::endl;

	std::cout << std::endl << "EXIT" << std::endl;
	return 0;
}
