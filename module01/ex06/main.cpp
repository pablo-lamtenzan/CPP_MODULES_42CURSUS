/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pablo <pablo@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 21:21:23 by plamtenz          #+#    #+#             */
/*   Updated: 2020/12/20 06:40:40 by pablo            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

#define TEST 1

int main(int ac, const char** av)
{
	(void)av;
    if (TEST == 0 || ac > 1)
	{
    	Weapon	club = Weapon("crude spiked club");
    	HumanA	bob("Bob", club);
    	bob.attack();
    	club.setType("some other type of club");
    	bob.attack();
	}
    else
	{
		Weapon	club = Weapon("crude spiked club");
    	HumanB	jim("Jim");
    	jim.setWeapon(club);
    	jim.attack();
    	club.setType("some other type of club");
    	jim.attack();
	}
}